# Shelltest - Exécuteur de Shellcode

## Description
Un outil de test et d'exécution de shellcode écrit en C. Ce programme démontre comment exécuter du code machine (shellcode) en mémoire en modifiant les permissions de pages mémoire.

## Fichiers

### shelltest.c
Programme principal pour l'exécution de shellcode.

**Fonctionnalités :**
- Contient un shellcode précompilé (44 bytes)
- Modifie les permissions mémoire pour rendre le shellcode exécutable
- Exécute le shellcode comme une fonction

**Shellcode inclus :**
Le shellcode intégré semble être conçu pour exécuter `/bin/sh` (shell Unix/Linux) :
```c
const char shellcode[] = {
    0x6a, 0x68, 0x68, 0x2f, 0x2f, 0x2f, 0x73, 0x68, 0x2f, 0x62, 0x69, 0x6e, 
    0x89, 0xe3, 0x68, 0x1, 0x1, 0x1, 0x1, 0x81, 0x34, 0x24, 0x72, 0x69, 0x1, 
    0x1, 0x31, 0xc9, 0x51, 0x6a, 0x4, 0x59, 0x1, 0xe1, 0x51, 0x89, 0xe1, 0x31, 
    0xd2, 0x6a, 0xb, 0x58, 0xcd, 0x80
};
```

**Fonctions principales :**
- `main()` : Point d'entrée qui configure les permissions mémoire et exécute le shellcode
- `mprotect()` : Modifie les permissions de la page mémoire (lecture, écriture, exécution)

### original.c
Version de référence ou backup du programme principal.

### Binaires
- `shelltest` : Exécutable compilé
- `original` : Exécutable de la version originale

## Compilation et Exécution

```bash
# Compilation
gcc -o shelltest shelltest.c

# Exécution
./shelltest
```

## Concepts Techniques

**Protection de la mémoire :**
- Utilise `mprotect()` pour modifier les permissions de pages mémoire
- Rend le shellcode exécutable avec `PROT_READ | PROT_WRITE | PROT_EXEC`
- Aligne sur les limites de pages (4096 bytes)

**Exécution de code :**
- Cast du shellcode en pointeur de fonction
- Appel direct du shellcode comme fonction C

## Objectifs Pédagogiques
Ce programme illustre :
- Les concepts de protection de la mémoire
- L'exécution de code machine arbitraire
- Les techniques d'exploitation et de développement d'exploits
- La gestion des permissions mémoire sous Unix/Linux

⚠️ **Attention :** Ce programme est destiné à des fins éducatives et de recherche en sécurité. L'exécution de shellcode peut être dangereuse et doit être effectuée dans un environnement contrôlé.
