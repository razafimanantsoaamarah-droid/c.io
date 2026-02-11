# Libft — Your First C Library

*This project has been created as part of the 42 curriculum by maherraz.*

---

## Table des matières
1. [Description](#description)
2. [Library Contents](#library-contents)
   - [Part 1 — Libc Functions](#part-1--libc-functions)
   - [Part 2 — Additional Functions](#part-2--additional-functions)
   - [Part 3 — Linked List Functions (Bonus)](#part-3--linked-list-functions-bonus)
3. [Instructions](#instructions)
   - [Compilation](#compilation)
   - [Installation](#installation)
   - [Utilisation](#utilisation)
4. [Resources](#resources)
   - [Documentation Officielle](#documentation-officielle)
   - [Tests & Validation](#tests--validation)
   - [AI Usage Disclosure](#ai-usage-disclosure)

---

## Description

**Libft** est le projet fondateur du cursus 42 — une réimplémentation des fonctions standards de la librairie C, accompagnée d'utilitaires personnalisés. Cette bibliothèque constitue la **boîte à outils personnelle** de chaque étudiant pour l'ensemble des projets C à venir.

**Objectifs pédagogiques :**
- Comprendre le fonctionnement interne des fonctions standards
- Maîtriser la gestion manuelle de la mémoire (`malloc`/`free`)
- Manipuler les pointeurs et les tableaux
- Implémenter des structures de données (listes chaînées)
- Produire du code conforme à la **Norminette** (style 42)

---

## Library Contents

### Partie 1 — Fonctions Libc

| Catégorie | Fonctions |
|-----------|-----------|
| **Tests de caractères** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| **Transformation** | `ft_toupper`, `ft_tolower` |
| **Manipulation de chaînes** | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| **Manipulation mémoire** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| **Conversion/Allocation** | `ft_atoi`, `ft_calloc` |

---

### Partie 2 — Fonctions Additionnelles

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Extrait une sous-chaîne |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatène deux chaînes |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Supprime les caractères spécifiés en début/fin |
| `ft_split` | `char **ft_split(char const *s, char c)` | Découpe une chaîne en tableau de mots |
| `ft_itoa` | `char *ft_itoa(int n)` | Convertit un entier en chaîne |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applique une fonction à chaque caractère (nouvelle allocation) |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applique une fonction à chaque caractère (modification sur place) |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Écrit un caractère sur un descripteur de fichier |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Écrit une chaîne sur un descripteur de fichier |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Écrit une chaîne + newline sur un descripteur |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Écrit un entier sur un descripteur |

---

### Partie 3 — Listes Chaînées (Bonus)

**Structure utilisée :**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

| Fonction | Description |
|----------|-------------|
| `ft_lstnew` | Crée un nouvel élément |
| `ft_lstadd_front` | Ajoute un élément en tête de liste |
| `ft_lstsize` | Compte le nombre d'éléments |
| `ft_lstlast` | Retourne le dernier élément |
| `ft_lstadd_back` | Ajoute un élément en fin de liste |
| `ft_lstdelone` | Libère le contenu d'un élément |
| `ft_lstclear` | Supprime et libère toute la liste |
| `ft_lstiter` | Itère et applique une fonction sur chaque élément |
| `ft_lstmap` | Crée une nouvelle liste en appliquant une fonction |

---

## Instructions

### Compilation

```bash
# Compilation de la librairie (partie obligatoire)
make

# Compilation avec les bonus
make bonus

# Nettoyage des fichiers objets
make clean

# Nettoyage complet (objets + librairie)
make fclean

# Recompilation intégrale
make re
```

**Flags de compilation :** `-Wall -Wextra -Werror`

### Installation

1. Clonez le dépôt :
```bash
git clone <votre-repo> libft
cd libft
```

2. Compilez la librairie :
```bash
make
```

3. Vérifiez la conformité Norminette :
```bash
norminette
```

### Utilisation dans vos projets

1. **Inclure le header :**
```c
#include "libft.h"
```

2. **Compiler avec la librairie :**
```bash
gcc -Wall -Wextra -Werror votre_programme.c libft.a -o votre_programme
```

3. **Exemple d'utilisation :**
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello 42!");
    char **words = ft_split("Libft is awesome", ' ');
    
    printf("%s\n", str);
    
    int i = 0;
    while (words[i])
    {
        printf("Word %d: %s\n", i, words[i]);
        free(words[i]);
        i++;
    }
    free(words);
    free(str);
    
    return (0);
}
```

---

## Resources

### Documentation Officielle

| Source | Description |
|--------|-------------|
| `man 3` | Pages de manuel des fonctions libc |
| [Norminette](https://github.com/42School/norminette) | Outil de vérification du style 42 |
| [42 Subjects](https://github.com/42School) | Sujets officiels du cursus |
| [GNU C Library](https://www.gnu.org/software/libc/manual/) | Documentation complète glibc |

### Tests & Validation

Plusieurs testeurs tiers sont disponibles pour valider votre librairie :

```bash
# Testeur Tripouille (recommandé)
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make m

# Test avec Valgrind (détection fuites mémoire)
make m valgrind   # ou manuellement :
valgrind --leak-check=full --show-leak-kinds=all ./a.out
```

### AI Usage Disclosure

Conformément aux **Instructions IA** du sujet v19.1 et à la politique de l'école 42, l'utilisation de l'IA a été strictement encadrée :

| Tâche | Outil IA | Usage |
|-------|----------|-------|
| **Structure du README** | Gemini | Mise en page, formatage markdown selon les standards du sujet |
| **Interprétation des tests** | Gemini | Analyse des logs de testeurs (notamment les résultats `MOK`) |
| **Debugging** | Gemini | Identification des patterns de fuites mémoire et propositions de correctifs |
| **Validation normative** | - | Aucune utilisation - respect strict de la Norminette |

**Engagement personnel :**

> *"Je certifie que l'intégralité du code présent dans cette librairie a été écrite manuellement. Aucune fonction, aucun algorithme n'a été généré par intelligence artificielle. L'IA a uniquement servi d'outil de documentation et de relecture, conformément à la philosophie de 42 qui place l'effort intellectuel et la compréhension approfondie au cœur de l'apprentissage."*

— **maherraz**, 42 Student

---

## Validation & Peer-Evaluation

Ce projet est soumis à une **évaluation par les pairs** selon les critères suivants :

✅ **Fonctionnalités** — Toutes les fonctions doivent produire le résultat attendu  
✅ **Gestion mémoire** — Aucune fuite mémoire tolérée  
✅ **Norme** — Code conforme à la Norminette  
✅ **Makefile** — Règles `NAME`, `all`, `clean`, `fclean`, `re`, `bonus`  
✅ **Robustesse** — Protection contre les échecs d'allocation

---

## 📄 License

Projet pédagogique réalisé dans le cadre du cursus de l'**École 42**. Libre d'utilisation pour tout étudiant du réseau.

---

<p align="center">
  <i>"Le chemin est plus important que la destination."</i><br>
  <b>— 42 AI Instructions</b>
</p>

<p align="center">
  <a href="#libft--your-first-c-library">⬆ Retour en haut</a>
</p>