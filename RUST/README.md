# RUST - Projets Rust

## Description
Collection de projets écrits en Rust démontrant différents concepts de programmation système et d'interaction avec l'API Windows.

## Projets

### helloRust
Un projet Rust basique qui affiche "Hello, world!".

**Fichiers :**
- `src/main.rs` : Programme principal simple
- `Cargo.toml` : Configuration du projet Rust

**Utilisation :**
```bash
cd helloRust
cargo run
```

### shellExec
Un projet Rust avancé utilisant l'API Windows pour la gestion d'événements et l'affichage de boîtes de dialogue.

**Fichiers :**
- `src/main.rs` : Programme principal avec intégration Windows API
- `Cargo.toml` : Configuration avec dépendances Windows

**Fonctionnalités :**
- Création et gestion d'événements Windows
- Affichage de MessageBox (ANSI et Unicode)
- Utilisation des APIs Win32 Foundation, System Threading et UI

**Dépendances :**
- `windows = "0.44.0"` avec features :
  - `Data_Xml_Dom`
  - `Win32_Foundation`
  - `Win32_Security`
  - `Win32_System_Threading`
  - `Win32_UI_WindowsAndMessaging`

**Utilisation :**
```bash
cd shellExec
cargo run
```

⚠️ **Note :** Ce projet est spécifiquement conçu pour Windows et utilise des APIs Windows natives.

## Objectifs Pédagogiques
- Introduction au langage Rust
- Intégration avec les APIs système Windows
- Gestion de la mémoire sécurisée en Rust
- Interopérabilité avec les APIs C/C++
