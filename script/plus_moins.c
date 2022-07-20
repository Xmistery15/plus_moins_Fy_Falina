#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
   if (choix_joueur < valeur_a_trouver)
	printf("Plus\n");
   else if (choix_joueur > valeur_a_trouver)
	printf("Moins\n");
   else
	printf("Bingo!\n");
}

int difficulty(int niveau_diff)
{
   switch(niveau_diff)
   {
   	case 1:
		return 10000; //Infinite d'essai
		break;
	case 2:
		return 25;
		break;
	case 3:
		return 10;
		break;
   }
}

int main()
{
   printf("Bienvenu dans le jeu Plus ou Moins!\n");
   int val;
   //Initialisation de l'algorithme générateur de la fonction rand()
   srand(time(NULL));
   val=rand()%100;
   int level;
   printf("Choisissez une mode de difficulté:\n 1-Facile\n 2-Moyen\n 3-Difficile\n");
   scanf("%d",&level);
   printf("Je pense à un chiffre entre 0 à 100.\n");
   int essai,limit,prop;
   essai=0;
   limit=difficulty(level);
   do
   {
   printf("Devinez lequel: \n");
   scanf("%d",&prop);
   plus_moins(prop,val);
   essai++;
   if (essai == limit)
     {
	printf("Perdu!\n");
	break;
     }
   }
   while((prop != val) && (essai<=limit));
}
