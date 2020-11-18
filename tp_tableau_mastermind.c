#include <stdio.h>
#include <stdlib.h>



int main()
{
	printf("Jeux Mastermind\n");

	//constante
	const int MAX_TENTATIVES = 3;
	const int NOMBRE_COULEUR = 5;
	const char COULEURS[] = {'R', 'V', 'B', 'J', 'O' };
	const int TAILLE_CODE = 4;

	char code_secret[] = {'R', 'V', 'B', 'J' };
	char saisie_utilisateur[TAILLE_CODE];

	for (int nb_tentative = 1; nb_tentative <= MAX_TENTATIVES; nb_tentative++)
	{
		//lecture saisie utilisateur
		printf("Donnez un code de 4 couleurs parmis {'R', 'V', 'B', 'J', 'O' }\n");
		fflush(stdin);
		scanf("%c%c%c%c", saisie_utilisateur, (saisie_utilisateur + 1),  (saisie_utilisateur + 2), (saisie_utilisateur + 3));


		//init des compteurs
		int nb_couleur_place = 0;

		//faire la comparaison du code secret et de la saisie utilisateur
		for (int i = 0; i<TAILLE_CODE; i++)
		{
			if (code_secret[i] == saisie_utilisateur[i])
			{
				nb_couleur_place++;

			}
		}


		//gestion fin de partie

		if (nb_couleur_place == TAILLE_CODE)
		{
			printf("Bravo! Vous avez trouvez le code secret en %d tentatives\n", nb_tentative);
			break;
		}
		else if(nb_tentative >= MAX_TENTATIVES)
		{

			printf("Dommage! Vous avez depasse le nombre maximum de tentatives\n");
			printf("le bon code est %c%c%c%c\n", code_secret[0],code_secret[1],code_secret[2],code_secret[3] );
		}
		else
		{
			printf("\t Tentative %d/%d\n", nb_tentative, MAX_TENTATIVES);
			printf("Couleurs bien placees: %d\n\n", nb_couleur_place);

		}


	}


	return 0;
}