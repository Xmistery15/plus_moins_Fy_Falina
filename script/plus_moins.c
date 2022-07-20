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

int main()
{
   int val;
   srand(time(NULL));
   val=rand()%100;
   printf("Bonjour, je pense à un chiffre entre 0 à 100.\n");
   int prop;
   do
   {
   printf("Devinez lequel: \n");
   scanf("%d",&prop);
   plus_moins(prop,val);
   }
   while(prop != val);
}
