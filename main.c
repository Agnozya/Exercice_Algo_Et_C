#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
ALGORITHME DES EXERCICES

1.
ALGORITHME : Voyage
//BUT : Indiquer le nombre de ville
//ENTREE : le nombre d'habitant des lieux
//SORTIE : le nombre de villes

VAR:
	lieu, hbt, ville, n : ENTIER

DEBUT
	ECRIRE "Veuillez entrer le nombre de lieux"
	LIRE lieu //Indique le nombre de lieux
	ville<-0
	TANTQUE (n!=lieu) //Boucle qui demande le nombre d'habitant de chaque lieux
	FAIRE
		ECRIRE "Veuillez entrer le nombre d'habitants"
		LIRE hbt
		SI (hbt >= 10000) //Si il y a plus de 10000 habitants...
		ALORS
			ville<-ville+1 //Le compteur de villes augmente de 1
		FINSI
		n<-n+1
	FINTANTQUE
	ECRIRE "Il y a " + ville + "villes" //Affiche le nombre de villes
FIN

2.
ALGORITHME : Auberge
//BUT : Donner le prix de la chambre
//ENTREE : L'age et le poids des bagages
//SORTIE : Le prix de la chambre

VAR:
	age, poids, prix : ENTIER

DEBUT
	ECRIRE "Veuillez donner votre age"
	LIRE age
	SI (age!=60 OU age>10) //Si age différent de 60 et supérieur à 10 alors...
	ALORS
		prix<-30 //...prix de base demande de poids des bagages
		ECRIRE "Veuillez donner le poids de vos bagages"
		LIRE poids
		SI (poids>=20) //+10 ecus si poids supérieur ou égale à 20kg
		ALORS
			prix<-prix + 10
		FINSI
	FINSI
	SI (age = 60) //Gratuit si age=60
	ALORS
		prix<-0
	FINSI
	SI (age<10) //Prix de 5 ecus si age inférieur à 10
	ALORS
		prix<-5
	FINSI
	ECRIRE "Le prix de la chambre est de :" + prix
FIN

3.
ALGORITHME : Start to Play
//BUT : voir nombre de personne dans la salle
//ENTREE : nombre de personne entré et sortie
//SORTIE : nombre actuelle de personne

VAR:
	places, entre, libre : ENTIER

DEBUT
	place<-0
	TANTQUE(entre!=0)
	FAIRE
		ECRIRE "Veuillez entrer le nombre de personne qui rentrent ou qui sortent (+ ou -)"
		LIRE entre
		SI (place + entre > 250) //Impossible si supérieur à 250
		ALORS
			ECRIRE "Impossible"
		SINON
			place <-place+entre  //Sinon augmentation du nombre de personnes à l'intérieur
		FINSI
		libre<-(250 - place) //Calcul du nombre de places restantes
		ECRIRE "Il reste " + libre + "places" //Affiche le nombre de places restantes
	FINTANTQUE
FIN

4. Triangles
ALGORITHME : Triangle XO et Triangle nombres
//BUT : Afficher triangle composé de X et de O
//ENTREE : Aucune entrée
//SORTIE : Afficher triangle

VAR:

	n_i, n_j : ENTIER

DEBUT
	POUR n_i DE 1 A 8 FAIRE PAS DE 1 //Boucle qui permet de passer par chaque cas
	FAIRE
		CAS n_i PARMIS:
			CAS 1: ECRIRE "X"
			CAS 2: ECRIRE "XX"
			CAS 3: ECRIRE "XOX"
			CAS 4: ECRIRE "XOOX"
			CAS 5: ECRIRE "XOOOX"
			CAS 6: ECRIRE "XOOOOX"
			CAS 7: ECRIRE "XOOOOOX"
			CAS 8: ECRIRE "XXXXXXXX"
			CASDEFAULT : ECRIRE "ERREUR" //Erreur si différents des autres cas
		FINCASPARMI
	FINPOUR
FIN

DEBUT
	POUR n_j DE 1 A 10 FAIRE PAS DE 1
	FAIRE
		CAS n_j PARMIS:
			CAS 1: ECRIRE "0000000000"
			CAS 2: ECRIRE " 111111111"
			CAS 3: ECRIRE "  22222222"
			CAS 4: ECRIRE "   3333333"
			CAS 5: ECRIRE "    444444"
			CAS 6: ECRIRE "     55555"
			CAS 7: ECRIRE "      6666"
			CAS 8: ECRIRE "       777"
			CAS 9: ECRIRE "        88"
			CAS 10: ECRIRE "         9"
			CASDEFAULT : ECRIRE "ERREUR" //Erreur si différents des autres cas
		FINCASPARMI
	FINPOUR
FIN





5.Carré
ALGORITHME : Carrés
//BUT : Afficher un carré avec 2 caractères différents
//ENTREE : 2 caractères ainsi que la longueur et la largeur
//SORTIE : Affiche le carré

VAR:
	L, l, n_i, n_j : ENTIER
	c1, c2 : CARACTERE

DEBUT
	ECRIRE "Veuillez entrer la longueur et la largeur" //Récupération des données
	LIRE L
	LIRE l
	ECRIRE "Veuillez indiquer le premier et le deuxième caractère"
	LIRE c1
	LIRE c2
	POUR n_i de 1 A L FAIRE PAS DE 1 //initialisation des lignes
		POUR n_j de 1 A l FAIRE PAS DE 1 //initialisation des colonnes
			SI ((n_i=1) OU (n_i=L) OU (n_j=1) OU (n_j=l))
			ALORS
				ECRIRE c1 //Ecrire caractere 1 si exeption (pour les contours)
			SINON
				ECRIRE c2 //Sinon ecriture du caractere 2
		FINPOUR
	FINPOUR

6.Epidemie
ALGORITHME : Epidemie
//BUT : Donner le jour ou une population total est malade
//ENTREE : Le nombre de la population
//SORTIE : Le nombre de jour pour que la population total soit malade

VAR:
	pop, malade, jours : ENTIER

DEBUT
	ECRIRE "Veuillez donner la population totale de la ville"
	LIRE pop
	malade<-1
	jour<-0
	TANTQUE (malade<pop) //Boucle tant que toute la population n'est pas malade
	FAIRE
		malade<-malade*3 //Multiplication par 3 des personnes malades
		jours<-jours+1
	FINTANTQUE
	jours<-jours+1  //Ajout du premier jour manquant
	ECRIRE "La ville sera entièrement malade au bout de " + jours + "jours." //Indique le nombre de jour pour que toute la population soit contaminés
FIN

7.Pyramide
ALGORITHME : Pyramide
//BUT : Indiquer la hauteur maximum ainsi que le nombre de pierres nécessaire
//ENTREE : Le nombre de pierres disponibles
//SORTIE : La hauteur possible et le nombres de pierres nécessaire

VAR:
	hauteur, pierremax, pierre, n : ENTIER

DEBUT
	ECRIRE "Veuillez indiquer le nombre maximum de pierres"
	LIRE pierremax
	hauteur<-0
	TANTQUE (pierre<pierremax) //Boucle tant que le nombre de pierre utilisé est différent du nombre de 								pierre max
	FAIRE
		n<-(hauteur*hauteur) //Calcule de l'étage suivant qui correspond à la hauteur au carré
		pierre<-(pierre+n) //Rajout du nombre de pierre de l'étage avec les pierres des étages précédents
		hauteur<-(hauteur+1) //augmentation de la hauteur pour la prochaine boucle
		SI (((hauteur*hauteur)+pierre)>pierremax) //Arret de la boucle si la hauteur prochaine dépasse le 												nombre de pierre max
		ALORS
			pierremax<-0
		FINSI
	FINTANTQUE
	hauteur<-hauteur-1  //Réduction d'une hauteur
	ECRIRE "La pyramide pourra faire maximum " + hauteur + "de hauteur en utilisant " + pierre + "pierres."
FIN
*/
int main()
{
//Exercice 1 Voyage

    int n_lieu=0, n_hbt=0, n_ville=0, n_n=0;

    printf("Veuillez entrer le nombre de lieux\n");
    scanf("%d",&n_lieu); //n_lieu comporte le nombre de lieux visités
    while(n_n!=n_lieu){ //Boucle tant que les nombres d'habitants de chaque lieux sont rentrés
        printf("Veuillez entrer le nombre d'habitants\n");
        scanf("%d",&n_hbt); //Vérifie le nombre d'habitant pour chaque lieu...
        if(n_hbt>=10000){ //...et si le nombre d'habitants est supérieur à 10000 alors n_ville augmente de 1
            n_ville++;
        }
        n_n++;
        fflush(stdin);
    }
    printf("Il y a %d villes sur les %d lieux",n_ville,n_lieu); //Indique le nombre de villes présentes sur le nombre de lieux visité

//Exercice 2 Auberge

    int n_age=0, n_poids=0, n_prix=0;

    printf("Veuillez donner votre age\n");
    scanf("%d",&n_age); //Vérifie l'age
    if((n_age!=60) || (n_age>10)){ //Calcule le prix en excluant les excéption de 60 et de moins de 10 ans
        n_prix=30;
        printf("Veuillez donner le poids de vos bagages\n"); //Rajoute les 10 ecus si le poids des bagages est au moins egal à 20kg
        scanf("%d",&n_poids);
        if(n_poids>=20){
            n_prix=(n_prix+10);
        }
    }
    if(n_age==60){ //Si l'age est égal à 60 le prix est de 0
        n_prix=0;
    }
    if(n_age<10){ //Si l'age est inférieur à 10 le prix est de 5
        n_prix=5;
    }
    printf("Le prix de la chambre est de : %d ecus\n",n_prix); //Affihe le prix de la chambre

//Exercice 3 Start to play

    int n_places=0, n_entre=0, n_libre=0;

    do{
        printf("Veuillez entrer le nombre de personne qui rentrent ou qui sortent (+ ou -)\n");
        scanf("%d",&n_entre);
        if((n_places+n_entre)>250){ //Vérifie si il y a plus 250 personnes...
            printf("Impossible\n"); //..est affiche impossible dans ce cas
        }else{
            n_places=(n_places+n_entre); //Sinon le nombre de personnes qui entrent ou sortent est ajouter au nombre de place
        }
        n_libre=(250-n_places); //Calcule le nombre de places disponibles
        fflush(stdin);
        printf("Il reste : %d\n",n_libre); //Affiche le nombre de place restantes
    }while(n_entre!=0); //Boucle s'arrete si 0 est entré

//Exercice 4 Triangles

int n_i=1, n_j=1;

for(n_i=1;n_i<9;n_i++){ //Boucle tant que toutes les lignes ne sont pas faites
    switch(n_i){    //Cas parmi pour chaque lignes
        case 1 : printf("X\n");break;
        case 2 : printf("XX\n");break;
        case 3 : printf("XOX\n");break;
        case 4 : printf("XOOX\n");break;
        case 5 : printf("XOOOX\n");break;
        case 6 : printf("XOOOOX\n");break;
        case 7 : printf("XOOOOOX\n");break;
        case 8 : printf("XXXXXXXX\n");break;
        default : printf("ERREUR\n");break; //Erreur si pas l'un des cas au dessus
    }
}

for(n_j=1;n_j<11;n_j++){ //Boucle tant que toutes les lignes ne sont pas faites
    switch(n_j){ //Cas parmi pour chaque lignes
        case 1 : printf("00000000000\n");break;
        case 2 : printf(" 1111111111\n");break;
        case 3 : printf("  22222222\n");break;
        case 4 : printf("   3333333\n");break;
        case 5 : printf("    444444\n");break;
        case 6 : printf("     55555\n");break;
        case 7 : printf("      6666\n");break;
        case 8 : printf("       777\n");break;
        case 9 : printf("        88\n");break;
        case 10 : printf("         9\n");break;
        default : printf("ERREUR\n");break;//Erreur si pas l'un des cas au dessus
    }
}



//Exercice 5 Carrés

    int n_L=0, n_l=0, n_i=1, n_j=1;
    char c_c1, c_c2;

    printf("Veuillez entrer la longueur\n"); //entré des différentes valeurs (longueur, largeur et les 2 caractères
    scanf("%d",&n_L);
    printf("Veuillez entrer la largeur\n");
    scanf("%d",&n_l);
    printf("Veuillez indiquer le premier caractere\n");
    scanf(" %c",&c_c1);
    printf("Veuillez indiquer le second caractere\n");
    scanf(" %c",&c_c2);
    for(n_i=1;n_i<n_L+1;n_i++){ //initialisation des lignes
        for(n_j=1;n_j<n_l+1;n_j++){ //initialisation des colonnes
            if((n_i==1)||(n_i==n_L)||(n_j==1)||(n_j==n_l)){ //Exeption pour les bordures du carré en placant le caractère 1
                printf(" %c",c_c1);
            }else{ //Sinon mise en place du caractère 2
                printf("%c",c_c2);
            }
        }
        printf("\n"); //Saut à la ligne à chaque fin de la seconde boucle
    }

//Exercice 6 Epidemie

    int n_pop=0, n_malade=1, n_jours=0;

    printf("Veuillez donner la population totale de la ville\n");
    scanf ("%d",&n_pop); //entré du nombre de la population
    while(n_malade<n_pop){ //boucle qui continu tant que le nombre de malade est différent du nombre de la population
        n_malade=(n_malade*3);
        n_jours++; //Augmentation du compteur de jour
    }
    n_jours++; //Rajout du premier jour qui est manquant
    printf("La ville sera entierement malade au bout de %d jours\n",n_jours); //Affichage du nombre de jours afin que toute la population soit malade


//Exercice 7

    int n_hauteur=0, n_pierremax=0, n_pierre=0, n_n=0;

    printf("Veuillez indiquer le nombre maximum de pierres\n");
    scanf("%d",&n_pierremax);
    while(n_pierre<n_pierremax){ //Boucle tant que le nombre de pierre utilisé est différent du nombre de pierre max
        n_n=(n_hauteur*n_hauteur); //Calcule de l'étage suivant qui correspond à la hauteur au carré
        n_pierre=n_pierre+n_n; //Rajout du nombre de pierre de l'étage avec les pierres des étages précédents
        n_hauteur++; //augmentation de la hauteur pour la prochaine boucle
        if(((n_hauteur*n_hauteur)+n_pierre)>n_pierremax){ //Arret de la boucle si la hauteur prochaine dépasse le nombre de pierre max
            n_pierremax=0;
        }
    }
    n_hauteur--; //Réduction d'une hauteur
    printf("La pyramide pourra faire maximum %d de hauteur en utilisant %d pierres\n",n_hauteur,n_pierre);

}
