#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {

	//! Un petit jeu que j'appelle « Plus ou moins ».

	/*
	Le principe est le suivant.
L'ordinateur tire au sort un nombre entre 1 et 100.
Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100.
L'ordinateur compare le nombre que vous avez entré avec le nombre « mystère » qu'il a tiré au sort.
Il vous dit si le nombre mystère est supérieur ou inférieur à celui que vous avez entré.
Puis l'ordinateur vous redemande le nombre.
… Et il vous indique si le nombre mystère est supérieur ou inférieur.
Et ainsi de suite, jusqu'à ce que vous trouviez le nombre mystère.
	*/

	//!Version 1: We have two players, the first write a secret number and the second try to find it

	int continuerPartie = 1;

	while (continuerPartie != 2) {

		int modeJeux = 0;

		printf("Choisir le mode de jeux:\n1-1 Joeur.\n2-2 Joeurs.\n");
		scanf_s("%d",&modeJeux);

		if (modeJeux == 1)
		{
			double secretNumber = 0, rightNumber = 0;
			int compteur = 0;

			printf("PLAYER 1: Enter a secret number: ");
			scanf_s("%f", &secretNumber);

			printf("PLAYER 1: I challenge you, find the secret number^^ \n");

			do
			{
				printf("PLAYER 2: Enter the right number: ");
				scanf_s("%f", &rightNumber);
				compteur++;
				if (rightNumber == secretNumber)
				{
					//TODO erreur à corriger pourquoi l'affichage du nombre ne se fait pas correctement ?
					printf("Felicitation %f est le bon nombre", rightNumber);
					printf("\nVous l'avez trouve apres %d tentatives.", compteur);
					break;
				}
				else if (rightNumber < secretNumber)
				{
					printf("The secret number is greater than the one you enter.\n");
				}
				else
				{
					printf("The secret number is fewer than the one you enter.\n");
				}
			} while (secretNumber != rightNumber);
			printf("\nVoulez-vous refaire une autre partie ?\n1-Oui\n2-Non\n");
			scanf_s("%d", &continuerPartie);
			if (continuerPartie == 2)
			{
				break;
			}
		}
		else
		{
			//todo ajouter mode jeux
		}

	}
    

		

	//!Version 2: We have one player, the computer generate a aleatory number. The Player have to find it.
	//! 
	//todo Correct warnings on the program
	/*
	double nombreMystere = 0;
	const int MAX = 100, MIN = 1;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	printf("COMPUTER: I chosed an aleatory number, find it !\n");

	int playerNumber = 0,compteur = 0;
	
	do
	{
		printf("PLAYER 2: Enter the right number: ");
		scanf_s("%f", &playerNumber);
		compteur++;

		if (playerNumber == nombreMystere)
		{
			//TODO erreur à corriger pourquoi l'affichage du nombre ne se fait pas correctement ?
			printf("Felicitation %f est le bon nombre", playerNumber);
			printf("\nVous l'avez trouvé après &d tentatives.", compteur);
			break;
		}
		else if (playerNumber < nombreMystere)
		{
			printf("The secret number is greater than the one you enter.\n");
		}
		else
		{
			printf("The secret number is fewer than the one you enter.\n");
		}
	} while (nombreMystere != playerNumber);
	*/
	return 0;
}