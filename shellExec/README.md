# shellExec - BlobRunner - Exécuteur de Shellcode Windows

## Description
BlobRunner est un outil avancé d'exécution de shellcode pour Windows, écrit en C. Il permet de charger et d'exécuter du code machine (shellcode) depuis un fichier avec diverses options de débogage et d'analyse.

## Fichiers

### main.c
Programme principal de BlobRunner version 0.0.5.

**Fonctionnalités principales :**
- Chargement de shellcode depuis un fichier
- Allocation mémoire dynamique avec permissions d'exécution
- Support des architectures 32-bit et 64-bit
- Options de débogage avancées
- Gestion des offsets personnalisés
- Mode JIT (Just-In-Time) debugging

**Fonctions principales :**
- `banner()` : Affiche la bannière ASCII du programme
- `process_file()` : Lit le fichier de shellcode et l'alloue en mémoire
- `execute()` : Exécute le shellcode avec les options spécifiées
- `print_help()` : Affiche l'aide d'utilisation
- `main()` : Point d'entrée avec parsing des arguments

**Options de ligne de commande :**
- `--offset <offset>` : Spécifie un offset pour l'exécution (hex ou décimal)
- `--nopause` : Exécute sans pause (dangereux !)
- `--jit` : Force une exception pour déclencher le débogueur JIT
- `--debug` : Active le mode verbeux
- `--version` : Affiche la version

## Utilisation

```bash
# Compilation avec CMake
cmake .
make

# Utilisation basique
./shellExec shellcode.bin

# Avec offset
./shellExec shellcode.bin --offset 0x100

# Mode débogage JIT
./shellExec shellcode.bin --jit

# Sans pause (automatique)
./shellExec shellcode.bin --nopause
```

## Fonctionnalités Techniques

**Gestion mémoire :**
- Utilise `VirtualAlloc()` avec permissions RWX
- Copie le shellcode en mémoire avec `CopyMemory()`
- Support des offsets personnalisés

**Architecture 64-bit :**
- Crée un thread suspendu pour l'exécution
- Utilise `CreateThread()` et `ResumeThread()`
- Affichage des adresses 64-bit

**Architecture 32-bit :**
- Exécution directe avec `__asm jmp`
- Saut direct vers l'adresse du shellcode

**Mode JIT :**
- Supprime les permissions d'exécution pour forcer une exception
- Permet l'attachement d'un débogueur automatiquement

## Objectifs Pédagogiques
Ce programme illustre :
- L'exécution contrôlée de shellcode
- La gestion des permissions mémoire Windows
- Les techniques de débogage d'exploits
- Les différences entre architectures 32/64-bit
- L'analyse dynamique de malware

⚠️ **Attention :** Cet outil est destiné aux professionnels de la sécurité, chercheurs et analystes de malware. L'exécution de shellcode peut être dangereuse et doit être effectuée dans un environnement isolé et contrôlé.
