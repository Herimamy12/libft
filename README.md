![Libft](libft.jpg)
# Libft

## Description

Libft est le premier projet dans le cadre du cursus de l'École 42. Il consiste à recréer certaines fonctions de la librairie standard C, tout en respectant les bonnes pratiques de développement, notamment la gestion de la mémoire et les conventions de l'école. Ce projet est essentiel car il permet de se familiariser avec les fonctions de manipulation de chaînes de caractères, de gestion de la mémoire, et de manipulation de fichiers. À travers ce projet, l'objectif est de prouver sa capacité à écrire des fonctions efficaces, robustes et maintenables.

## Fonctionnalités

Libft implémente une série de fonctions essentielles qui peuvent être utilisées dans d'autres projets à l'École 42 ou dans tout autre projet C. Les principales fonctions implémentées dans cette bibliothèque incluent :

### Manipulation de chaînes de caractères
- `ft_strlen()`
- `ft_strcpy()`
- `ft_strdup()`
- `ft_strcmp()`
- `ft_strcat()`
- `ft_strchr()`
- `ft_strlcpy()`
- `ft_strlcat()`

### Gestion de la mémoire
- `ft_memset()`
- `ft_bzero()`
- `ft_memcpy()`
- `ft_memmove()`
- `ft_memchr()`
- `ft_memcmp()`
- `ft_calloc()`

### Fonctions utilitaires
- `ft_isdigit()`
- `ft_isalpha()`
- `ft_isalnum()`
- `ft_isascii()`
- `ft_isprint()`
- `ft_toupper()`
- `ft_tolower()`

### Conversion de types
- `ft_atoi()`
- `ft_itoa()`
- `ft_itoa_base()`
- `ft_itoa_base_ull()`

## Compilation

1. Clonez le repository :

   ```bash
   git clone https://github.com/Herimamy12/libft.git

2. Compilez la librairie en utilisant le Makefile inclus :

   ```bash
    cd libft
    make

3. Vous pouvez ensuite utiliser la bibliothèque dans vos autres projets en ajoutant simplement le fichier libft.a et les fichiers sources de libft dans votre projet.

## Bonus

La partie Bonus du projet Libft inclut des fonctionnalités supplémentaires, telles que les fonctions de gestion des listes chaînées. Ces fonctions sont facultatives, mais sont recommandées pour améliorer la performance et la fonctionnalité de votre bibliothèque.

## Fonctionnalités Bonus

### Listes chaînées :
- `ft_lstnew()`
- `ft_lstadd_front()`
- `ft_lstsize()`
- `ft_lstlast()`
- `ft_lstadd_back()`
- `ft_lstdelone()`
- `ft_lstclear()`
- `ft_lstiter()`
- `ft_lstmap()`

4. Pour compiler et inclure les fonctionnalités bonus, il suffit de lancer la commande suivante :

   ```bash
      make bonus

## Contribution

Les contributions à ce projet sont les bienvenues ! Si vous souhaitez participer, voici les étapes à suivre :

1. Forkez ce projet.
2. Créez une branche pour chaque fonctionnalité ou correction de bug.
3. Assurez-vous que vos modifications ne cassent pas l'existant et que toutes les fonctionnalités sont correctement testées.
4. Soumettez une Pull Request pour que vos modifications puissent être examinées et fusionnées.

Nous vous encourageons également à ajouter des tests unitaires pour garantir la stabilité du projet et éviter toute régression.

## Remerciements

Merci à l'école 42 pour cette incroyable opportunité d'apprentissage et pour le soutien de la communauté. Un grand merci également à tous ceux qui ont contribué directement ou indirectement à ce projet.

#### Auteurs

- [Herimamy12](https://github.com/Herimamy12)
