# TP1.1 - 25/09/2018
## Exercice 3 - Shell
#1.  
`pwd` affiche `home/users/100/mapepins/exo`.  
Pour revenir au répertoire de base, les deux solution `cd` et `cd ..` fonctionnent et sont équivalentes: `cd` va nous rediriger vers vers le répertoire de connexion et `cd ..` vers le répertoire parent, qui est, dans ce cas-ci, également le répertoire de connexion.  

&nbsp;  
#3.  
Oui, avec la commande `cp -i es1.txt essai2/es1-copie.txt`.  

&nbsp;  
#4.  
`ls *` affiche tous les sous-répertoires et ce qu\'ils contiennent.  
Pour voir les fichiers dont le nom commence par `es`, on fait la commande `ls es*`  

&nbsp;  
#5.  
`rm -i name-file` supprime le fichier name-file avec demande de confirmation.  
`rm -r name-file` supprime le fichier name-file de façon récursive et donc tous les fichiers contenus dans name-file, si celui-ci est un répertoire. 
 
&nbsp;  
#6.  
`sed -n 51p file` affichera la ligne 51 du fichier file. 

&nbsp;  
#7.  
`grep passwd /etc/*?` affiche les fichiers contenus dans les repertoires dont le nom est d\'au moins un caractère et dont le répertoire parent est ./etc.  
Pas de message d\'erreur.  

&nbsp;  
#8.  
`find [a-A]*`  

&nbsp;  
#9.  
`find -cnewer file`  

&nbsp;  
#10.  
`find *.o -delete`
