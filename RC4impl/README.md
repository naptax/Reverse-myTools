# RC4impl - Implémentation de l'algorithme de chiffrement RC4

## Description
Une implémentation complète de l'algorithme de chiffrement RC4 (Rivest Cipher 4) en langage C. Ce programme démontre les quatre étapes principales de l'algorithme RC4 : initialisation, KSA (Key Scheduling Algorithm), génération du keystream et chiffrement/déchiffrement par XOR.

## Fichiers

### main.c
Implémentation complète de l'algorithme RC4 avec affichage détaillé des étapes.

**Fonctionnalités :**
- Chiffrement et déchiffrement de messages texte
- Affichage détaillé de chaque étape de l'algorithme
- Support des messages jusqu'à 4096 caractères
- Vérification avec CyberChef pour validation

**Fonctions principales :**
- `initialize(u_char *State)` : Initialise le tableau d'état S avec les valeurs 0-255
- `swap(u_char *a, u_char *b)` : Échange deux valeurs
- `ksa(u_char *State, u_char *key, int keylen)` : Algorithme de planification des clés
- `prng(u_char *State, int msglength)` : Générateur pseudo-aléatoire pour le keystream
- `rc4(u_char *key, u_char *input, u_char *output, int msglen)` : Fonction principale de chiffrement/déchiffrement

**Étapes de l'algorithme :**
1. **Initialisation** : Création du tableau d'état S[0..255]
2. **KSA** : Mélange du tableau d'état avec la clé
3. **PRNG** : Génération du flux de clés (keystream)
4. **XOR** : Chiffrement/déchiffrement par XOR avec le keystream

## Utilisation

```bash
# Compilation
cmake .
make

# Exécution
./RC4impl "votre_message_ici"
```

**Exemple :**
```bash
./RC4impl "Hello World"
```

## Sécurité

⚠️ **Note importante :** Ce programme utilise une clé hardcodée ("password") à des fins de démonstration. Dans un environnement de production, la clé doit être :
- Générée de manière sécurisée
- Stockée de manière sécurisée
- Jamais hardcodée dans le code source

## Validation
L'implémentation peut être vérifiée avec CyberChef :
https://gchq.github.io/CyberChef/#recipe=RC4(%7B'option':'UTF8','string':'password'%7D,'Hex','UTF8')

## Objectif Pédagogique
Ce programme illustre :
- Le fonctionnement interne de l'algorithme RC4
- Les concepts de chiffrement symétrique
- L'importance de la gestion sécurisée des clés
- Les techniques de cryptanalyse et de validation
