# ⚔️ Jeux de Combat

Un mini RPG en mode combat tour par tour, codé en C.

## 📖 Description

Deux joueurs s'affrontent dans un combat tour par tour. Chaque joueur choisit une arme à chaque tour pour attaquer son adversaire. Le premier joueur à atteindre 0 PV perd la partie.

## 🎮 Comment jouer

1. Compiler le projet :
```bash
gcc jeux_combat.c -o jeux_combat
```

2. Lancer le programme :
```bash
./jeux_combat
```

3. Les deux joueurs entrent leur nom.

4. À chaque tour, chaque joueur choisit une arme parmi :

| Arme    | Dégâts |
|---------|--------|
| Épée    | 10 PV  |
| Couteau | 5 PV   |
| Masse   | 15 PV  |
| Dague   | 11 PV  |

5. Le combat continue jusqu'à ce qu'un joueur atteigne 0 PV.

## 🏆 Fonctionnalités

- Création de 2 personnages avec nom et points de vie (100 PV chacun)
- Menu d'armes avec 4 armes différentes
- Combat tour par tour
- Affichage des PV en temps réel après chaque attaque
- Détection automatique du gagnant

## 💻 Technologies utilisées

- **Langage** : C
- **Concepts utilisés** : Structures (`struct`), pointeurs, fonctions, boucles `while`, conditions

## 📁 Structure du projet

```
Jeux-de-Combat/
└── jeux_combat.c    # Code source principal
```

## 👤 Auteur

[athohck](https://github.com/athohck)
