#include <stdio.h>
#include <stdlib.h>



int main()
{
	const int TAILLE_TABLEAU = 3;
	int mon_tableau[TAILLE_TABLEAU];

	//init du tableau
	for (int i=0; i < TAILLE_TABLEAU; i++)
	{
		mon_tableau[i] = i;
	}

	//affichage du tableau
	for (int i=0; i < TAILLE_TABLEAU; i++)
	{
		printf("mon_tableau[%d] = %d\n", i, mon_tableau[i]);
	}



	return 0;
}