#include <stdio.h>
#include <stdlib.h>



int main()
{
	const int TAILLE_TABLEAU = 2;
	int mon_tableau[TAILLE_TABLEAU];

	//init du tableau
	for (int i=0; i < TAILLE_TABLEAU; i++)
	{
		printf("> ");
		scanf("%d", (mon_tableau+i));		//entree par l'utilisateur
	}

	//affichage du tableau
	for (int i=0; i < TAILLE_TABLEAU; i++)
	{
		printf("mon_tableau[%d] = %d\n", i, *(mon_tableau+i));
	}



	return 0;
}