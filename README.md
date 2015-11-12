# Arguiduino (en)
A Graphical User Interface to control Arduino board

The aim of this project is to be able to control an [Arduino](https://www.arduino.cc/) board through a useful an user-friendly interface.
In a first time, the only supported board will be Arduino Uno. When everything will work correctly on it, the goal will be to support every Arduino board.

##TODO

- [ ] Control the Arduino Uno board via a GUI
  - [ ] Control the Arduino board through serial link
  - [ ] Control the Arduino board with Python
  - [ ] Use the GUI to control Python
  - [ ] Make a good documentation
- [ ] Control every Arduino board models
- [ ] Interface with serial communications of the board (I2C, SPI...)
- [ ] Control many boards

##Communication with Arduino board

The communication with the Arduino board will be made by the serial bus. In this configuration, the Arduino board could be seen as a slave, and the computer as the master.

##Operate on Arduino

A program will be made for the Arduino board to interpret and execute the order received by the serial bus.

##Control the Arduino

The main program which will make the orders to the Arduino board will be written in Python. This language is chosen because of its flexibility and its simplicity.

##Graphical User Interface (GUI)

No choices have been made for the interface yet.

##Management of the project

It's my first "real" project so I want it to be very clean and serious. I choose GitHub because of its simplicity, its capacity of sharing a project and its various tools like the issues, milestones etc... I will work with [git-flow](https://github.com/nvie/gitflow) (I recommend for those who don't know anything about it to see [this](http://nvie.com/posts/a-successful-git-branching-model/) to understand it and [this](http://danielkummer.github.io/git-flow-cheatsheet/) to use it). This will ease me to make a good branching for my project.


# Arguiduino (fr)
Une interface graphique pour contrôler une carte Arduino

Le but de ce projet est d'être capable de contrôler une carte [Arduino](https://www.arduino.cc/) à travers une interface utile et ergonomique.
Dans un premier temps, seule la carte Arduino Uno ne sera supportée. Quand tout fonctionnera complètement pour ce modèle, le but sera de supporter tous les modèles de cartes Arduino.

##À faire

- [ ] Contrôler une carte Arduino Uno via une IHM
  - [ ] Contrôler une carte Arduino via le lien  série
  - [ ] Contrôler une carte Arduino grâce Python
  - [ ] Utiliser une IHM pour contrôler le Python
  - [ ] Faire une documentation complète
- [ ] Contrôler tous les modèles de cartes Arduino
- [ ] S'interfacer avec les bus de communication série de la carte(I2C, SPI...)
- [ ] Contrôler plusieurs cartes Arduino

##Communication avec la carte Arduino

La communication avec la carte Arduino se fera via le bus série. Dans cette configuration, la carte Arduino pourra être vu comme esclave, et l'ordinateur comme maître.

##Fonctionnement sur l'Arduino

Un programme sera fait pour que la carte Arduino interprète et exécute les ordres reçus via le bus série.

##Contrôler l'Arduino

Le programme principal qui construira les ordres pour la carte Arduino sera écrit en Python. Ce langage a été choisi pour sa flexibilité et sa simplicité.

##IHM (Interface Homme Machine)

Aucun choix n'a été fait quant à la conception de l'interface pour l'instant.

##Management du projet

Ce projet est mon premier "vrai" projet. Je voudrais donc qu'il soit le plus propre et sérieux possible. J'ai choisi GitHub pour sa simplicité, sa capacité de partage et ses divers outils comme les issues, milestones etc... Je travaillerais avec [git-flow](https://github.com/nvie/gitflow) (je recommande à ceux qui ne connaissent pas la lecture de [ceci](http://nvie.com/posts/a-successful-git-branching-model/) pour une meilleure compréhension et de [ceci](http://danielkummer.github.io/git-flow-cheatsheet/) pour l'utilisation). Cela me facilitera la gestion des différentes branches de mon projet.
