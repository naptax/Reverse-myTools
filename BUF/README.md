# BUF - Buffer Overflow Demonstration Tool

## Description
Un outil de démonstration de vulnérabilité de débordement de tampon (buffer overflow) écrit en C. Ce programme illustre une faille de sécurité classique où l'utilisation de la fonction `gets()` peut permettre à un attaquant de déborder le tampon et potentiellement exécuter du code arbitraire.

## Fichiers

### main.c
Programme principal qui démontre une vulnérabilité de buffer overflow.

**Fonctionnalités :**
- Simule un système de don à une ONG
- Contient une vulnérabilité intentionnelle avec `gets()`
- Utilise un tampon de 256 caractères pour stocker le nom de l'ONG
- Affiche un message de remerciement après le don

**Fonctions :**
- `donne(int montant)` : Demande le nom d'une ONG et affiche le montant du don
- `main()` : Point d'entrée du programme, fixe le montant à 1000€

**Vulnérabilité :**
Le programme utilise `gets()` qui ne vérifie pas la taille du tampon, permettant un débordement de tampon si l'utilisateur saisit plus de 256 caractères.

## Compilation et Exécution

### Avec CMake
```bash
mkdir build && cd build
cmake ..
make
./BUF
```

### Avec le Makefile
```bash
make
./bin/main
```

## Objectif Pédagogique
Ce programme est conçu à des fins éducatives pour comprendre :
- Les vulnérabilités de débordement de tampon
- L'importance de la validation des entrées
- Les bonnes pratiques de programmation sécurisée

⚠️ **Attention :** Ce code contient intentionnellement une vulnérabilité et ne doit être utilisé qu'à des fins d'apprentissage dans un environnement contrôlé.
