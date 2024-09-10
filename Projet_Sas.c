#include<stdio.h>
#include<string.h>
typedef struct {
int jour,mois,annee;
}DateNaissence;

typedef struct Etudiant{
 int id;
char nom[100],prenom[100],departement[100];
DateNaissence dateN;
float moyenne;
}Etudiant;


//redéfinition de fonctions
void Ajouter();
void Afficher();
void MenuPrincipal();
// définition des variables
int choix,count=0,i,j,choixDepart;
Etudiant etudiant[100];

void main()
{
MenuPrincipal();


}



void MenuPrincipal()
{

    printf("tappez 1 pour ajouter :\n");
    printf("tappez 2 pour Modifier ou supprimer un étudiant :\n");
    printf("tappez 3 pour Afficher les détails d'un étudiant :\n");
    printf("tappez 4 pour Calculer la moyenne générale  :\n");
    printf("tappez 5 pour Statistiques : :\n");
    printf("tappez 5 pour Rechercher un étudiant par :\n");
    printf("tappez 5 pour Trier un étudiant par :\n");
    printf("=========choisi un nombre=========\n");
    scanf("%d",&choix);
    do{
    switch(choix){
case 1:
    Ajouter();
    break;

case 2:


case 3:
Afficher();
    break;
case 4:

case 5:

case 6:

case 7:

default : break;
    }
}while(choix!=8);
}
//ajouter
void Ajouter()
{
etudiant[count].id=count;
printf("saisir le nom  :\n");
scanf(" %[^\n]s",etudiant[count].nom);
printf("saisir le prenom :\n");
scanf(" %[^\n]s",etudiant[count].prenom);
printf("saisir le jour :\n");
scanf("%d",&etudiant[count].dateN.jour);
printf("saisir le moi :\n");
scanf("%d",&etudiant[count].dateN.mois);
printf("saisir le année :\n");
scanf("%d",&etudiant[count].dateN.annee);
do{
printf("choisi une departement  :\n 1 :informatique        2:chimie         3:droit      4:physique \n");
scanf("%d",&choixDepart);
switch(choixDepart){

case 1:strcpy(etudiant[count].departement,"informatique");
        break;
case 2:strcpy("chimie",etudiant[count].departement);
        break;
case 3:strcpy("droit",etudiant[count].departement);
        break;
case 4:strcpy("physique",etudiant[count].departement);
        break;
default :printf("choix n'exixte pas ! essayez encore \n");
        break;
}}while(choixDepart<0 && choixDepart<=4);
printf("saisir la moyenne :");
scanf("%f",&etudiant[count].moyenne);;
count++;
MenuPrincipal();
}
//afficher
void Afficher()
{
    for(i=0;i<count;i++)
    {
        printf("oui");
        printf("%d | %s | %s | %d | %d | %d | %s | %f ",etudiant[i].id ,etudiant[i].nom ,etudiant[i].prenom ,etudiant[i].dateN.jour ,etudiant[i].dateN.mois ,etudiant[i].dateN.annee ,etudiant[i].departement ,etudiant[i].moyenne);
    }
}
