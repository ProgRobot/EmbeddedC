#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	//! Un petit jeu que j'appelle � Plus ou moins �.

	/*
	Le principe est le suivant.
L'ordinateur tire au sort un nombre entre 1 et 100.
Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100.
L'ordinateur compare le nombre que vous avez entr� avec le nombre � myst�re � qu'il a tir� au sort.
Il vous dit si le nombre myst�re est sup�rieur ou inf�rieur � celui que vous avez entr�.
Puis l'ordinateur vous redemande le nombre.
� Et il vous indique si le nombre myst�re est sup�rieur ou inf�rieur.
Et ainsi de suite, jusqu'� ce que vous trouviez le nombre myst�re.
	*/

	//!Version 1: We have two players, the first write a secret number and the second try to find it

	double secretNumber = 0, rightNumber=0;

	printf("PLAYER 1: Enter a secret number: ");
	scanf_s("%f", &secretNumber);
	
	printf("I challenge you, find the secret number^^ \n");

	do
	{
		printf("PLAYER 2: Enter the right number: ");
		scanf_s("%f", &rightNumber);

		if (rightNumber == secretNumber)
		{
			//TODO erreur � corriger pourquoi l'affichage du nombre ne se fait pas correctement ?
			printf("Felicitation %f est le bon nombre", rightNumber);
			break;
		}
		else if (rightNumber<secretNumber)
		{
			printf("The secret number is greater than the one you enter.\n");
		}
		else
		{
			printf("The secret number is fewer than the one you enter.\n");
		}
	} while (secretNumber!=rightNumber);

	
	
	return 0;
}

