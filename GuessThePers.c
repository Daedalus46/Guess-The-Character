#include <stdio.h>
#include <stdlib.h>
#include "Personality.c"
#include <windows.h>
#include <mmsystem.h>
#include "Title.c"

void Start_the_Game()
{
	int count = 1;
	char ch;
	printf("\n\t Lets Start The Game? \n");
	printf("\t Press 'Y' for YES \n");
	printf("\t Press 'N' for NO \n");
	printf("\t Option: ");

	// Read the user's input
	scanf(" %c", &ch);

	switch (ch)
	{
	case 'Y':
	case 'y':
		printf("\n\tNOTE! TO ANSWER THE QUESTIONS YOU HAVE TO ENTER :\n");
		printf("\n\t'Y' for YES :\n");
		printf("\t'N' for NO :\n");
		printf("\t'D' for Don't Know :\n");
		printf("\n\tPress Y/y to continue.");
		printf("\n\tOption: ");
		// Read the user's input for the second question
		scanf(" %c", &ch);

		switch (ch)
		{
		case 'Y':
		case 'y':
			printf("\n\t\t\t\tQuestion no %d", count);
			printf("\n\t\t\tIs your charchter male ?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
				nawaz(ch, count);
				break;
			default:
				firdous(ch, count);
				maryam(ch, count);
				Benazir(ch, count);
				break;
			}

		default:
			exit(0);
			break;
		}
		break;

	case 'N':
	case 'n':
		exit(0);
		break;

	default:
		exit(0);
		break;
	}
}

int main()
{
	PlaySound(TEXT("akinator_theme_(1).wav"), NULL, SND_ASYNC);
	//  system("clrscr");
	system("color F0");
	border();
	Title();
	Title2();
	Title3();
	border();
	Disclaimer();
	Rules();
	border();
	limitations();
	border();
	Start_the_Game();
}