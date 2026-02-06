#!/usr/bin/env bash
set -euo pipefail

# ------------------------------
# Couleurs et fonctions d'affichage
# ------------------------------
GREEN="\033[0;32m"
RED="\033[0;31m"
BLUE="\033[0;34m"
YELLOW="\033[1;33m"
NC="\033[0m"

info()  { echo -e "${BLUE}➜ $1${NC}"; }
ok()    { echo -e "${GREEN}✔ $1${NC}"; }
warn()  { echo -e "${YELLOW}⚠ $1${NC}"; }
fail()  { echo -e "${RED}✖ $1${NC}"; }

# ------------------------------
# Vérifications
# ------------------------------
command -v norminette &> /dev/null || { fail "norminette non installée"; exit 1; }
command -v vim &> /dev/null || { fail "vim non installé"; exit 1; }

# ------------------------------
# Projet / fichiers
# ------------------------------
PROJECT_DIR="${1:-.}"  # Par défaut : dossier courant

# Cherche tous les fichiers .c et .h dans le projet
FILES=$(find "$PROJECT_DIR" -type f \( -name "*.c" -o -name "*.h" \) | sort)
TOTAL_FILES=$(echo "$FILES" | wc -l)

if [ "$TOTAL_FILES" -eq 0 ]; then
    fail "Aucun fichier .c ou .h trouvé dans $PROJECT_DIR"
    exit 1
fi

# ------------------------------
# Interface
# ------------------------------
clear
echo -e "${BLUE}╔══════════════════════════════════╗"
echo -e "║   Norminette Interactive 42     ║"
echo -e "╚══════════════════════════════════╝${NC}"
echo -e "${BLUE}📂 Total de fichiers : $TOTAL_FILES${NC}\n"

INDEX=0
PROGRESS=""

# ------------------------------
# Boucle sur les fichiers
# ------------------------------
for file in $FILES; do
    INDEX=$((INDEX + 1))
    info "[$INDEX/$TOTAL_FILES] Vérification : $file"

    while true; do
        OUTPUT=$(norminette "$file" || true)
        ERRORS=$(echo "$OUTPUT" | grep -v "OK!" || true)

        if [ -z "$ERRORS" ]; then
            ok "$file est clean"
            PROGRESS="${PROGRESS}█"
            break
        fi

        fail "Erreurs détectées"
        PROGRESS="${PROGRESS}░"
        echo "────────────────────────"
        echo "$ERRORS"
        echo "────────────────────────"

        # 🔍 Extraire ligne ET colonne de la première erreur
        LINE=$(echo "$ERRORS" \
            | grep -oE 'line: *[0-9]+' \
            | head -n1 \
            | grep -oE '[0-9]+')
        COL=$(echo "$ERRORS" \
            | grep -oE 'col: *[0-9]+' \
            | head -n1 \
            | grep -oE '[0-9]+')

        warn "Ouverture de vim à line $LINE, col $COL"

        if [ -n "$LINE" ] && [ -n "$COL" ]; then
            # Linux avec gnome-terminal
            if command -v gnome-terminal &> /dev/null; then
                gnome-terminal -- vim +"set number | call cursor($LINE,$COL) | set colorcolumn=$COL | highlight ColorColumn ctermbg=red" "$file"
            # macOS Terminal
            elif [[ "$OSTYPE" == "darwin"* ]]; then
                osascript -e "tell application \"Terminal\" to do script \"vim +$LINE,$COL '$file'\""
            else
                # Fallback : ouvrir vim dans le même terminal
                vim +"set number | call cursor($LINE,$COL) | set colorcolumn=$COL | highlight ColorColumn ctermbg=red" "$file"
            fi
        else
            vim +"set number" "$file"
        fi

        echo
        read -rp "➡ Appuie sur Entrée après correction"
        info "Re-vérification..."
    done

    # Affichage du graphe dynamique
    echo -e "${BLUE}Progression : $PROGRESS${NC}\n"
done

ok "Tous les fichiers sont conformes à la Norme 🎉🔥"
echo -e "${BLUE}📊 Graphique final : $PROGRESS${NC}"
echo -e "${GREEN}✅ $TOTAL_FILES fichiers vérifiés avec succès${NC}"
