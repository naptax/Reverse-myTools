# Reverse Engineering & Security Tools Collection

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Language: Rust](https://img.shields.io/badge/Language-Rust-orange.svg)](https://www.rust-lang.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-blue.svg)](https://www.microsoft.com/windows)
[![Platform: Linux](https://img.shields.io/badge/Platform-Linux-green.svg)](https://www.linux.org/)
[![Security: Educational](https://img.shields.io/badge/Security-Educational-red.svg)](https://github.com/topics/security)
[![Build: CMake](https://img.shields.io/badge/Build-CMake-green.svg)](https://cmake.org/)
[![Build: Cargo](https://img.shields.io/badge/Build-Cargo-orange.svg)](https://doc.rust-lang.org/cargo/)

Ma Collection d'outils "HomeMade" pour l'apprentissage de la rétro-ingénierie, de la sécurité informatique et des techniques d'exploitation. Chaque répertoire contient un outil spécialisé avec sa propre documentation.

## 🛠️ Outils Disponibles

### 🔓 [BUF](./BUF/) - Buffer Overflow Demonstration
**Langage :** C | **Plateforme :** Linux/Windows

Outil de démonstration de vulnérabilité de débordement de tampon utilisant la fonction dangereuse `gets()`.

**Caractéristiques :**
- Simulation d'un système de don à une ONG
- Vulnérabilité intentionnelle pour l'apprentissage
- Tampon de 256 caractères débordable
- Compilation avec CMake ou Makefile

### 🔐 [RC4impl](./RC4impl/) - Implémentation RC4
**Langage :** C | **Plateforme :** Linux/Windows

Implémentation complète et éducative de l'algorithme de chiffrement RC4 avec affichage détaillé des étapes.

**Caractéristiques :**
- Algorithme RC4 complet (Init, KSA, PRNG, XOR)
- Affichage pas-à-pas de chaque étape
- Support jusqu'à 4096 caractères
- Validation avec CyberChef
- Clé de démonstration intégrée

### 🦀 [RUST](./RUST/) - Projets Rust
**Langage :** Rust | **Plateforme :** Windows

Collection de projets Rust démontrant l'intégration avec les APIs Windows.

**Sous-projets :**
- **helloRust** : Programme basique "Hello World"
- **shellExec** : Intégration avancée avec Windows API (événements, MessageBox)

### 💉 [Shelltest](./Shelltest/) - Exécuteur de Shellcode Linux
**Langage :** C | **Plateforme :** Linux

Outil d'exécution de shellcode pour systèmes Unix/Linux avec gestion des permissions mémoire.

**Caractéristiques :**
- Shellcode précompilé pour `/bin/sh`
- Modification des permissions mémoire avec `mprotect()`
- Exécution directe en mémoire
- 44 bytes de shellcode intégré

### 🎯 [shellExec](./shellExec/) - BlobRunner Windows
**Langage :** C | **Plateforme :** Windows

Outil avancé d'exécution de shellcode pour Windows avec options de débogage étendues.

**Caractéristiques :**
- Support architectures 32-bit et 64-bit
- Chargement depuis fichier
- Mode JIT debugging
- Gestion des offsets personnalisés
- Thread suspendu (64-bit) ou saut direct (32-bit)

## 🚀 Installation et Utilisation

### Prérequis
- **Pour les projets C :** GCC ou MSVC, CMake (optionnel)
- **Pour les projets Rust :** Rustc et Cargo
- **Systèmes supportés :** Linux, Windows

### Compilation Rapide

```bash
# Projets C avec CMake
cd <répertoire_outil>
mkdir build && cd build
cmake ..
make

# Projets Rust
cd RUST/<sous-projet>
cargo build --release
```

## ⚠️ Avertissements de Sécurité

**🔴 IMPORTANT :** Ces outils sont destinés **exclusivement** à des fins éducatives et de recherche en sécurité informatique.

- ✅ **Utilisation autorisée :** Environnements de test, laboratoires de sécurité, formation
- ❌ **Utilisation interdite :** Systèmes de production, activités malveillantes
- 🛡️ **Recommandations :** Utiliser dans des machines virtuelles isolées

## 📚 Objectifs Pédagogiques

Cette collection permet d'apprendre :
- **Vulnérabilités logicielles** : Buffer overflows, injection de code
- **Cryptographie** : Implémentation d'algorithmes de chiffrement
- **Programmation système** : Gestion mémoire, APIs système
- **Analyse de malware** : Exécution contrôlée de code
- **Sécurité défensive** : Compréhension des vecteurs d'attaque

## 🤝 Contribution

Les contributions sont les bienvenues ! Veuillez :
1. Fork le projet
2. Créer une branche pour votre fonctionnalité
3. Commiter vos changements
4. Pousser vers la branche
5. Ouvrir une Pull Request

## 📄 Licence

Ce projet est sous licence MIT. Voir le fichier `LICENSE` pour plus de détails.

## 🔗 Ressources Utiles

- [CyberChef](https://gchq.github.io/CyberChef/) - Validation des algorithmes cryptographiques
- [OWASP](https://owasp.org/) - Ressources de sécurité web
- [Exploit Database](https://www.exploit-db.com/) - Base de données d'exploits
- [Rust Book](https://doc.rust-lang.org/book/) - Documentation officielle Rust

---

**Développé à des fins éducatives** | **Utilisez de manière responsable** 🎓🔒
