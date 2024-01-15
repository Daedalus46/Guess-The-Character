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
		printf("\nNOTE! TO ANSWER THE QUESTIONS YOU HAVE TO ENTER :\n");
		printf("\n\t'Y' for YES :\n");
		printf("\t'N' for NO :\n");
		printf("\t'D' for Don't Know :\n");
		printf("\nPress Y/y to continue.");
		printf("\n\tOption: ");
		// Read the user's input for the second question
		scanf(" %c", &ch);

		switch (ch)
		{
		case 'Y':
		case 'y':
			printf("\n\tQuestion no %d", count);
			printf("\nIs your charchter male ?\n");
			printf("\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
				printf("\n\tQuestion no %d", count);
				printf("\nIs your character currently in Pakistan?\n");
				printf("\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y': // Nawaz Sharif Q1
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d", count);
					printf("\nIs your character over 50 years?\n");
					printf("\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd': // Nawaz Sharif Q2
						printf("\n\tQuestion no %d", count);
						printf("\nDoes your character have famous  brother?\n");
						printf("\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd': // Nawaz Sharif Q3
							printf("\n\tQuestion no %d", count);
							printf("\nDoes your character have famous  Daughter?\n");
							printf("\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
								// Nawaz Sharif Q4
								printf("\n\tQuestion no %d", count);
								printf("\nDoes your character's Daughter politician?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y': // Nawaz Sharif Q5

									printf("\n\tQuestion no %d", count);
									printf("\nDoes your character introduced Projects?\n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y': // Nawaz Sharif Q6
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d", count);
										printf("\nDid your character got hit with a shoe?\n");
										printf("\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd': // Nawaz Sharif Q7
											printf("\n\tQuestion no %d", count);
											printf("\nDid your character become PM more than 1 times?\n");
											printf("\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd': // Nawaz Sharif Q8
												printf("\n\tQuestion no %d", count);
												printf("\nIs your character half bald?\n");
												printf("\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd': // Nawaz Sharif Q9
													printf("\n\tQuestion no %d", count);
													printf("\nDoes he have a palace??\n");
													printf("\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y': // Nawaz Sharif Q10
													case 'D':
													case 'd':
														printf("\n\tQuestion no %d", count);
														printf("\nDoes your character look like Bhalu?\n");
														printf("\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y': // Nawaz Sharif Q11
														case 'D':
														case 'd':
															printf("\n\tQuestion no %d", count);
															printf("\nYour character got jailed?\n");
															printf("\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y':
															case 'y':
															case 'D':
															case 'd': // Nawaz Sharif Q12
																printf("\n\tQuestion no %d", count);
																printf("\nDoes your character went for the medical abroad?\n");
																printf("\t Option: ");
																scanf(" %c", &ch);
																count++;
																switch (ch)
																{
																case 'Y':
																case 'y':
																case 'D':
																case 'd': // Nawaz Sharif Q13
																	printf("\n\tQuestion no %d", count);
																	printf("\nDid your character ran from the country?\n");
																	printf("\t Option: ");
																	scanf(" %c", &ch);
																	count++;
																	switch (ch)
																	{
																	case 'Y':
																	case 'y':
																	case 'D':
																	case 'd': // Nawaz Sharif Q14
																		printf("\n\tQuestion no %d", count);
																		printf("\nIs your character's wife alive?\n");
																		printf("\t Option: ");
																		scanf(" %c", &ch);
																		count++;
																		switch (ch)
																		{
																		case 'Y':
																		case 'y': // Nawaz Sharif Q15
																		case 'D':
																		case 'd':
																			printf("\n\tQuestion no %d", count);
																			printf("\nIs your character from GO NAWAZ GO era?\n");
																			printf("\t Option: ");
																			scanf(" %c", &ch);
																			count++;
																			switch (ch)
																			{
																			case 'Y':
																			case 'y':
																			case 'D':
																			case 'd':
																				printf("\nYour character is the one and only nawaz shariff!\n");
																				printf("\n\tna sadiq hu na Ameen hu \n\tme krapshan ki masheen hu");
																				PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\nawaz.wav"), NULL, SND_ASYNC);
																				system("pause");
																				exit(0);
																			}
																		default: // Nawaz Sharif Q15
																			shahbaz(ch, count);
																			Altaf(ch, count);

																			imran_khan(ch, count);

																			sheikh_rasheed(ch, count);

																			Bilawal(ch, count);
																			break;
																		}
																	default: // Nawaz Sharif Q14
																		Altaf(ch, count);

																		imran_khan(ch, count);

																		shahbaz(ch, count);

																		sheikh_rasheed(ch, count);

																		Bilawal(ch, count);
																		break;
																	}
																default: // Nawaz Sharif Q13
																	Altaf(ch, count);

																	imran_khan(ch, count);

																	shahbaz(ch, count);
																	sheikh_rasheed(ch, count);

																	Bilawal(ch, count);
																	break;
																}
															default: // Nawaz Sharif Q12
																Altaf(ch, count);

																imran_khan(ch, count);

																shahbaz(ch, count);

																sheikh_rasheed(ch, count);

																Bilawal(ch, count);
																break;
															}
														default: // Nawaz Sharif Q11
															Altaf(ch, count);

															imran_khan(ch, count);

															shahbaz(ch, count);

															sheikh_rasheed(ch, count);

															Bilawal(ch, count);
															break;
														}
													default: // Nawaz Sharif Q10
														Altaf(ch, count);

														imran_khan(ch, count);

														shahbaz(ch, count);

														sheikh_rasheed(ch, count);

														Bilawal(ch, count);
														break;
													}
												default: // Nawaz Sharif Q9
													Altaf(ch, count);

													imran_khan(ch, count);

													shahbaz(ch, count);

													sheikh_rasheed(ch, count);

													Bilawal(ch, count);
													break;
												}
											default: // Nawaz Sharif Q8
												Altaf(ch, count);

												imran_khan(ch, count);

												shahbaz(ch, count);

												sheikh_rasheed(ch, count);

												Bilawal(ch, count);
												break;
											}
										default: // Nawaz Sharif Q7
											Altaf(ch, count);

											imran_khan(ch, count);

											shahbaz(ch, count);

											sheikh_rasheed(ch, count);

											Bilawal(ch, count);
											break;
										}
									default: // Nawaz Sharif Q6
										Altaf(ch, count);
										imran_khan(ch, count);
										shahbaz(ch, count);
										sheikh_rasheed(ch, count);
										Bilawal(ch, count);
										break;
									}
								default: // Nawaz Sharif Q5
									shahbaz(ch, count);
									imran_khan(ch, count);
									Altaf(ch, count);
									Bilawal(ch, count);
									sheikh_rasheed(ch, count);
									break;
								}
							default: // Nawaz Sharif Q4
								shahbaz(ch, count);
								imran_khan(ch, count);
								Altaf(ch, count);
								Bilawal(ch, count);
								sheikh_rasheed(ch, count);
								break;
							}
						default: // Nawaz Sharif Q3
							Altaf(ch, count);

							imran_khan(ch, count);

							shahbaz(ch, count);

							sheikh_rasheed(ch, count);

							Bilawal(ch, count);
							break;
						}
					default: // Nawaz Sharif Q2
						Bilawal(ch, count);

						Altaf(ch, count);

						imran_khan(ch, count);

						shahbaz(ch, count);

						sheikh_rasheed(ch, count);
						break;
					}
					// Nawaz Sharif Q1
				default:
					Bilawal(ch, count);

					Altaf(ch, count);

					imran_khan(ch, count);

					shahbaz(ch, count);

					sheikh_rasheed(ch, count);
					break;
				}
			default:
				firdous(ch, count);
				maryam(ch, count);
				Benazir(ch, count);
				break;
			}
			shahbaz(ch, count);
			Bilawal(ch, count);
			imran_khan(ch, count);
			sheikh_rasheed(ch, count);
			break;

		default:
			// Handle other cases for the first question
			// ...
			break;
		}
		break;

	case 'N':
	case 'n':
		// Handle the case where the user doesn't want to start the game
		// ...
		break;

	default:
		// Handle other cases for the initial question
		// ...
		break;
	}
}

int main()
{
	while (1)
	{
		PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\akinator_theme (1).wav"), NULL, SND_ASYNC);
		system("clrscr");
		system("color F0");
		border();
		Title();
		Title2();
		Title3();
		Disclaimer();
		Rules();
		Start_the_Game();
		char o;
		Printf(" If you want to play again \n Press '1' to continue \nPress 'Q' to Quit ");
		scanf("%c", &o);
		if (o == 1)
		{
			continue;
		}
		else
		{
			break;
		}
		return 0;
	}
}