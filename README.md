## Installer la librairie de test : Unity

Il faut télécharger la dernière release disponible sur le dépôt officiel : https://github.com/ThrowTheSwitch/Unity/releases/
Ensuite, il faut décompresser et placer le contenu à la racine du projet à tester.

Voilà la commande qui permet de faire toutes les étapes décrites précédemment :

```
export UNITY_RELEASE=2.5.2
wget -P /tmp/ https://github.com/ThrowTheSwitch/Unity/archive/v$UNITY_RELEASE.tar.gz
tar xzf /tmp/v$UNITY_RELEASE.tar.gz
mv Unity-$UNITY_RELEASE unity
```

*Note : les assertions disponibles dans Unity sont listées ici : https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md#the-assertions-in-all-their-blessed-glory*


## Commandes de base

### Compiler l'application

Compiler l'exécutable principal `dummy` dans le dossier `bin` :

```
gcc src/main.c src/dummy.c -o bin/dummy
```


## Tester le code

Compiler l'exécutable de test `test_dummy` dans le dossier `bin` :

```
gcc -Isrc -Iunity/src test/TestDummy.c src/dummy.c unity/src/unity.c -o bin/test_dummy
```

Exécuter les tests :

```
./bin/test_dummy
```
