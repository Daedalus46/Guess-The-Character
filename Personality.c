#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>

void sheikh_rasheed(char ch, int count);
void imran_khan(char ch, int count);
void shahbaz(char ch, int count);
void maryam(char ch, int count);
void nawaz_sharif(char ch, int count);
void Bilawal(char ch, int count);
void Altaf(char ch, int count);
void Benazir(char ch, int count);
void firdous(char ch, int count);
void nawaz(char ch, int count);

void nawaz(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d", count);
	printf("\n\t\t\tIs your character over 50 years?\n");
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y': // Nawaz Sharif Q1
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d", count);
		printf("\n\t\t\tDoes your character belongs from Punjab?\n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd': // Nawaz Sharif Q2
			printf("\n\t\t\t\tQuestion no %d", count);
			printf("\n\t\t\tDoes your character have famous  brother?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd': // Nawaz Sharif Q3
				printf("\n\t\t\t\tQuestion no %d", count);
				printf("\n\t\t\tDoes your character have famous Daughter?\n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
					// Nawaz Sharif Q4
					printf("\n\t\t\t\tQuestion no %d", count);
					printf("\n\t\t\tDoes your character's Daughter politician?\n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y': // Nawaz Sharif Q5

						printf("\n\t\t\t\tQuestion no %d", count);
						printf("\n\t\t\tDoes your character introduced Projects?\n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y': // Nawaz Sharif Q6
						case 'D':
						case 'd':
							printf("\n\t\t\t\tQuestion no %d", count);
							printf("\n\t\t\tDid your character got hit with a shoe?\n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd': // Nawaz Sharif Q7
								printf("\n\t\t\t\tQuestion no %d", count);
								printf("\n\t\t\tDid your character become PM more than 1 times?\n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd': // Nawaz Sharif Q8
									printf("\n\t\t\t\tQuestion no %d", count);
									printf("\n\t\t\tIs your character half bald?\n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd': // Nawaz Sharif Q9
										printf("\n\t\t\t\tQuestion no %d", count);
										printf("\n\t\t\tDoes he have a palace?\n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y': // Nawaz Sharif Q10
										case 'D':
										case 'd':
										case 'n':
										case 'N':
											printf("\n\t\t\t\tQuestion no %d", count);
											printf("\n\t\t\tDoes your character look like Bhalu?\n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y': // Nawaz Sharif Q11
											case 'D':
											case 'd':
											case 'n':
											case 'N':
												printf("\n\t\t\t\tQuestion no %d", count);
												printf("\n\t\t\tYour character got jailed?\n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd': // Nawaz Sharif Q12
													printf("\n\t\t\t\tQuestion no %d", count);
													printf("\n\t\t\tDoes your character went for the medical abroad?\n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd': // Nawaz Sharif Q13
														printf("\n\t\t\t\tQuestion no %d", count);
														printf("\n\t\t\tDid your character ran from the country?\n");
														printf("\t\t\t\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y':
														case 'D':
														case 'd': // Nawaz Sharif Q14
															printf("\n\t\t\t\tQuestion no %d", count);
															printf("\n\t\t\tIs your character's wife alive?\n");
															printf("\t\t\t\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y':
															case 'y': // Nawaz Sharif Q15
															case 'D':
															case 'd':
															case 'n':
															case 'N':
																printf("\n\t\t\t\tQuestion no %d", count);
																printf("\n\t\t\tIs your character from GO NAWAZ GO era?\n");
																printf("\t\t\t\t Option: ");
																scanf(" %c", &ch);
																count++;
																switch (ch)
																{
																case 'Y':
																case 'y':
																case 'D':
																case 'd':
																	printf("\n\t\t\t\tYour character is the one and only nawaz shariff!\n");
																	printf("\n\t\t\tna sadiq hu na Ameen hu \n\tme krapshan ki masheen hu");
																	PlaySound(TEXT("nawaz.wav"), NULL, SND_ASYNC);
																	system("pause");
																	exit(0);
																}
															default: // Nawaz Sharif Q15
																nawaz(ch, count);

																break;
															}
														default: // Nawaz Sharif Q14
															nawaz(ch, count);

															break;
														}
													default: // Nawaz Sharif Q13
														nawaz(ch, count);

														break;
													}
												default: // Nawaz Sharif Q12
													nawaz(ch, count);

													break;
												}
											default: // Nawaz Sharif Q11
												nawaz(ch, count);

												break;
											}
										default: // Nawaz Sharif Q10
											nawaz(ch, count);

											break;
										}
									default: // Nawaz Sharif Q9
										Altaf(ch, count);
										sheikh_rasheed(ch, count);
										imran_khan(ch, count);
										shahbaz(ch, count);
										nawaz(ch, count);

										break;
									}
								default: // Nawaz Sharif Q8
									nawaz(ch, count);
									break;
								}
							default: // Nawaz Sharif Q7
								nawaz(ch, count);

								break;
							}
						default: // Nawaz Sharif Q6
							nawaz(ch, count);

							break;
						}
					default: // Nawaz Sharif Q5
						shahbaz(ch, count);
						Altaf(ch, count);
						sheikh_rasheed(ch, count);
						imran_khan(ch, count);
						nawaz(ch, count);

						break;
					}
				default: // Nawaz Sharif Q4
					shahbaz(ch, count);
					Altaf(ch, count);
					sheikh_rasheed(ch, count);
					imran_khan(ch, count);
					nawaz(ch, count);
					break;
				}
			default: // Nawaz Sharif Q3
				Altaf(ch, count);
				sheikh_rasheed(ch, count);
				imran_khan(ch, count);

				nawaz(ch, count);

				break;
			}
		default: // Nawaz Sharif Q2
			Altaf(ch, count);

			sheikh_rasheed(ch, count);
			imran_khan(ch, count);

			shahbaz(ch, count);
			nawaz(ch, count);

			break;
		}
		// Nawaz Sharif Q1
	default:
		Bilawal(ch, count);
		nawaz(ch, count);

		break;
	}
}

void maryam(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q1
	printf("\t\t\tIs ur character over 40 years?\n");
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q2
		printf("\t\t\tDoes ur character look young?\n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q3
			printf("\t\t\tIs ur character married?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q4
				printf("\t\t\tDoes ur character have 4 kids?\n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q5
					printf("\t\t\tDoes ur character have someone who is in politics?\n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
						printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q6
						printf("\t\t\tIs she the chair person of prime minsiters youth program?\n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q7
							printf("\t\t\tIs she is known as the nani of other politicians?\n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q8
								printf("\t\t\tDid her degree was critized by someone and challenged in court?\n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q9
									printf("\t\t\tDo she wears tons of makeup?\n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q10
										printf("\t\t\tDid she contributed to betterment of country?\n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q11
											printf("\t\t\tDoes she always target other politicians in her speech?\n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
												printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q12
												printf("\t\t\tDoes she wear glasses?\n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
													printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q13
													printf("\t\t\tDoes she play the role of Phuppo in politics?\n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
														printf("\n\t\t\t\tQuestion no %d\n", count); // maryam nawaz Q14
														printf("\t\t\tIs she a role model for many people?\n");
														printf("\t\t\t\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y':
														case 'D':
														case 'd':
															printf("\t\t\t\tYou are thinking about maryam nawaz!\n");
															printf("\n\t\t\tYe bhool hain gulaab k koi asla to nhi\n\t\t\tPF mai backlog lage koi masla to nhi \n");
															PlaySound(TEXT("Maryam.wav"), NULL, SND_ASYNC);
															system("pause");
															exit(0);
														}
													default: // maryam nawaz Q14
														maryam(ch, count);
														firdous(ch, count);
														break;
													}
												default: // maryam nawaz Q13
													maryam(ch, count);
													firdous(ch, count);
													break;
												}
											default: // maryam nawaz Q12
												maryam(ch, count);
												firdous(ch, count);
												break;
											}
										default: // maryam nawaz Q11
											maryam(ch, count);
											firdous(ch, count);
											break;
										}
									default: // maryam nawaz Q10
										maryam(ch, count);
										firdous(ch, count);
										break;
									}
								default: // maryam nawaz Q9
									maryam(ch, count);
									firdous(ch, count);
									break;
								}
							default: // maryam nawaz Q8
								maryam(ch, count);
								firdous(ch, count);
								break;
							}
						default: // maryam nawaz Q7
							maryam(ch, count);
							firdous(ch, count);
							break;
						}
					default: // maryam nawaz Q6
						maryam(ch, count);
						firdous(ch, count);
						break;
					}
				default: // maryam nawaz Q5
					maryam(ch, count);
					firdous(ch, count);
					break;
				}
			default: // maryam nawaz Q4
				maryam(ch, count);
				firdous(ch, count);
				break;
			}
		default: // maryam nawaz Q3
			maryam(ch, count);
			firdous(ch, count);
			break;
		}
	default: // maryam nawaz Q2
		maryam(ch, count);
		firdous(ch, count);
		break;
	}
}
void Altaf(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d", count);
	printf("\n\t\t\tIs he currently in Pakistan?  \n"); // Altaf Q1
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'N':
	case 'n':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q2
		printf("\n\t\t\tDoes he have moustache?  \n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q3
			printf("\n\t\t\tDoes he wear shawll?   \n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
			case 'N':
			case 'n':
				printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q4
				printf("\n\t\t\tDoes he started a league of rights?   \n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
				case 'N':
				case 'n':
					printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q5
					printf("\n\t\t\tDoes he talks like gargel??   \n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
					case 'N':
					case 'n':
						printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q6
						printf("\n\t\t\tDoes he studied from KU?   \n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
						case 'N':
						case 'n':
							printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q7
							printf("\n\t\t\tIs your character savage?   \n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
							case 'N':
							case 'n':
								printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q8
								printf("\n\t\t\tIs his wife alive?   \n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
								case 'N':
								case 'n':
									printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q9
									printf("\n\t\t\tWear sun glasses?    \n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q10
										printf("\n\t\t\tIs there a university by his father name?    \n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
										case 'N':
										case 'n':
											printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q11
											printf("\n\t\t\tDoes he need two chair to sit?    \n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
											case 'N':
											case 'n':
												printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q12
												printf("\n\t\t\tIs your charachter from a kahata pita gharana?    \n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
												case 'N':
												case 'n':
													printf("\n\t\t\t\tQuestion no %d", count); // Altaf Q13
													printf("\n\t\t\tIs his call is enough for breakdown?     \n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'N':
													case 'n':
													{
														printf("\n\t\t\t Sach Batao! \n\t 1 bonus marks idhar \n \t 1 bonus marks udhar\n");
													}
													case 'D':
													case 'd':
													case 'Y':
													case 'y':
														printf("\n\t\t\t\tYour character is Altaf Hussain!\n");
														printf("\n\t\t\tVote for Miss Samia Masood Awan  \n\t\t\tWarnaa bori tayyaar\n");
														PlaySound(TEXT("altaf.wav"), NULL, SND_ASYNC);
														system("pause");
														exit(0);
													}
												default:
													Altaf(ch, count);
													break; // Q13
												}
											default: // Q12
												Altaf(ch, count);
												break;
											}
										default: // Q11
											Altaf(ch, count);
											break;
										}
									default: // Q10
										Altaf(ch, count);
										break;
									}
								default: // Q9
									Altaf(ch, count);
									break;
								}
							default: // Q8
								Altaf(ch, count);
								break;
							}
						default: // Q7
							Altaf(ch, count);
							break;
						}
					default: // Q6
						Altaf(ch, count);
						break;
					}
				default: // Q5
					Altaf(ch, count);
					break;
				}
			default: // Q4
				Altaf(ch, count);
				break;
			}
		default: // Q3
			Altaf(ch, count);
			break;
		}
	default: // Q2
		sheikh_rasheed(ch, count);
		imran_khan(ch, count);

		break;
	}
}
void Benazir(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d\n", count); // benazir Q1
	printf("\t\t\tIs your character famous in Sindh?\n");
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y': // benazir Q2
	case 'y':
	case 'D':
	case 'd':
	case 'N':
	case 'n':
		printf("\n\t\t\t\tQuestion no %d\n", count);
		printf("\t\t\tWas this person associated with a prominent political family in Pakistan?\n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y': // benazir Q3
		case 'y':
		case 'D':
		case 'd':
		case 'N':

		case 'n':
			printf("\n\t\t\t\tQuestion no %d\n", count);
			printf("\t\t\tDid she attend Harvard University and Oxford Uni for her education?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y': // benazir Q4
			case 'y':
			case 'D':
			case 'd':
			case 'N':
			case 'n':
				printf("\n\t\t\t\tQuestion no %d\n", count);
				printf("\t\t\tWas your character married?\n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y': // benazir Q5
				case 'y':
				case 'D':
				case 'd':
				case 'N':
				case 'n':
					printf("\n\t\t\t\tQuestion no %d\n", count);
					printf("\t\t\tDid her political career involve periods of exile?\n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y': // benazir Q6
					case 'y':
					case 'D':
					case 'd':
					case 'N':
					case 'n':
						printf("\n\t\t\t\tQuestion no %d\n", count);
						printf("\t\t\tWas she the first woman to lead a Muslim-majority country?\n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y': // benazir Q7
						case 'y':
						case 'D':
						case 'd':
						case 'N':
						case 'n':
							printf("\n\t\t\t\tQuestion no %d\n", count);
							printf("\t\t\tDid this person serve as the Prime Minister of Pakistan??\n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y': // benazir Q8
							case 'y':
							case 'D':
							case 'd':
							case 'N':
							case 'n':
								printf("\n\t\t\t\tQuestion no %d\n", count);
								printf("\t\t\tWas she known for her efforts in promoting women's rights in her country?\n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y': // benazir bhutto Q9
								case 'y':
								case 'D':
								case 'd':
								case 'N':
								case 'n':
									printf("\n\t\t\t\tQuestion no %d\n", count);
									printf("\t\t\tDid she write an autobiography sharing her experiences in politics?\n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y': // benazir bhutto Q10
									case 'y':
									case 'D':
									case 'd':
									case 'N':
									case 'n':
										printf("\n\t\t\t\tQuestion no %d\n", count);
										printf("\t\t\tDid her life end tragically due to a political incident?\n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
										case 'N':
										case 'n':
											printf("\n\t\t\tYour character is the 1st women PM of Pakistan Benzair Bhutto!\n");
											system("pause");
											exit(0);
										}
									default: // benazir bhutto Q10
										Benazir(ch, count);

										break;
									}
								default: // // benazir bhutto Q9
									Benazir(ch, count);
									break;
								}
							default: // benazir Q8
								Benazir(ch, count);

								break;
							}
						default: // benazir Q7
							Benazir(ch, count);
							break;
						}
					default: // benazir Q6
						Benazir(ch, count);

						break;
					}
				default: // benazir Q5
					Benazir(ch, count);

					break;
				}
			default: // benazir Q4
				Benazir(ch, count);

				break;
			}
		default: // benazir Q3
			Benazir(ch, count);

			break;
		}
	default: // benazir Q2
		Benazir(ch, count);

		break;
	}
} // function end
void Bilawal(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d\n", count); // bilawal bhutto Q1
	printf("\t\t\tIs your character alive?\n");
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y': // bilawal bhutto Q2
	case 'y':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d\n", count);
		printf("\t\t\tIs his father or mother famous politician?\n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y': // bilawal bhutto Q3
		case 'y':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d\n", count);
			printf("\t\t\tIs your character clean-shaved?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y': // bilawal bhutto Q4
			case 'y':
			case 'D':
			case 'd':
				printf("\n\t\t\t\tQuestion no %d\n", count);
				printf("\t\t\tIs your character un-married?\n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y': // bilawal bhutto Q5
				case 'y':
				case 'D':
				case 'd':
					printf("\n\t\t\t\tQuestion no %d\n", count);
					printf("\t\t\tYour character studied abroad?\n");
					printf("\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y': // bilawal bhutto Q6
					case 'y':
					case 'D':
					case 'd':
					case 'N':
					case 'n':
						printf("\n\t\t\t\tQuestion no %d\n", count);
						printf("\t\t\tDid your character made visa free for all Irani people?\n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y': // bilawal bhutto Q7
						case 'y':
						case 'D':
						case 'd':
						case 'N':
						case 'n':
							printf("\n\t\t\t\tQuestion no %d\n", count);
							printf("\t\t\tDoes your politician holds higher position in party?\n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y': // bilawal bhutto Q8
							case 'y':
							case 'D':
							case 'd':
							case 'N':
							case 'n':
								printf("\n\t\t\t\tQuestion no %d\n", count);
								printf("\t\t\tWas your politician a former prime minister/chief minister?\n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y': // bilawal bhutto Q9
								case 'y':
								case 'D':
								case 'd':
								case 'N':
								case 'n':
									printf("\n\t\t\t\tQuestion no %d\n", count);
									printf("\t\t\tDoes his speech not make any sense right?\n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y': // bilawal bhutto Q10
									case 'y':
									case 'D':
									case 'd':
									case 'N':
									case 'n':
										printf("\n\t\t\t\tQuestion no %d\n", count);
										printf("\t\t\tIs he fluent in english??\n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y': // bilawal bhutto Q11
										case 'y':
										case 'D':
										case 'd':
											printf("\n\t\t\t\tQuestion no %d\n", count);
											printf("\t\t\tDoes he have issue in gender pronounciation?\n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y': // bilawal bhutto Q12
											case 'y':
											case 'D':
											case 'd':
												printf("\n\t\t\t\tQuestion no %d\n", count);
												printf("\t\t\tIs he favorite of any other politician?\n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y': // bilawal bhutto Q13
												case 'y':
												case 'D':
												case 'd':
													printf("\n\t\t\t\tQuestion no %d\n", count);
													printf("\t\t\tDid he recently said a province KFC?\n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y': // bilawal bhutto Q14
													case 'y':
													case 'D':
													case 'd':
														printf("\n\t\t\t\tQuestion no %d\n", count);
														printf("\t\t\tKya aap k politician ka bolne ka andaaz thora kasual he?\tkiya apki kanpe tang rahi hai\n");
														printf("\t\t\t\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y': // bilawal bhutto Q15
														case 'y':
														case 'D':
														case 'd':
														case 'N':
														case 'n':
															printf("\n\t\t\t\tQuestion no %d\n", count);
															printf("\t\t\tIs your politician likely to become Prime minister in future?\n");
															printf("\t\t\t\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y': // bilawal bhutto Q16
															case 'y':
															case 'D':
															case 'd':
															case 'N':
															case 'n':
																printf("\n\t\t\t\tQuestion no %d\n", count);
																printf("\t\t\tYou know him because of (Barish huti hai tw pani ata hai)?\n");
																printf("\t\t\t\t Option: ");
																scanf(" %c", &ch);
																count++;
																switch (ch)
																{
																case 'Y': // bilawal bhutto end
																case 'y':
																case 'D':
																case 'd':
																case 'N':
																case 'n':
																	printf("\n\t\t\t\tYour character is Bilawal Bhutto!\n");
																	printf("\n\t\t\tTum to aik kanputli (statue) ho\n\t\t\ttumhari doren to PF hilaa raha hai\n");
																	PlaySound(TEXT("bilawal.wav"), NULL, SND_ASYNC);
																	system("pause");
																	exit(0);
																}
															default: // bilawal bhutto Q16
																Bilawal(ch, count);
																break;
															}
														default: // bilawal bhutto Q15
															Bilawal(ch, count);
															break;
														}
													default: // bilawal bhutto Q14
														Bilawal(ch, count);
														break;
													}
												default: // bilawal bhutto Q13
													Bilawal(ch, count);
													break;
												}
											default: // bilawal bhutto Q12
												Bilawal(ch, count);
												break;
											}
										default: // bilawal bhutto Q11
											Bilawal(ch, count);
											break;
										}
									default: // bilawal bhutto Q10
										Bilawal(ch, count);
										break;
									}
								default: // bilawal bhutto Q9
									Bilawal(ch, count);
									break;
								}
							default: // bilawal bhutto Q8
								Bilawal(ch, count);
								break;
							}
						default: // bilawal bhutto Q7
							Bilawal(ch, count);
							break;
						}
					default: // bilawal bhutto Q6
						Bilawal(ch, count);
						break;
					}
				default: // bilawal bhutto Q5
					Bilawal(ch, count);
					break;
				}
			default: // bilawal bhutto Q4
				Bilawal(ch, count);
				break;
			}
		default: // bilawal bhutto Q3
			Bilawal(ch, count);
			break;
		}
	default: // bilawal bhutto Q2
		Bilawal(ch, count);

		break;
	}
}

void firdous(char ch, int count)
{

	printf("\n\t\t\t\tQuestion no %d\n", count);
	printf("\t\t\tIs she over 40 years ?\n");
	printf("\t\t\t\t Option: "); // firdous ashiq Q1
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d\n", count);
		printf("\t\t\tIs she from sialkot district?\n");
		printf("\t\t\t\t Option: "); // firdous ashiq Q2
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d\n", count);
			printf("\t\t\tIs she role model for many people?\n");
			printf("\t\t\t\t Option: "); // firdous ashiq Q3
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\t\t\t\tQuestion no %d\n", count);
				printf("\t\t\tDoes she weear glasses?\n");
				printf("\t\t\t\t Option: "); // firdous ashiq Q4
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\t\t\t\tQuestion no %d\n", count);
					printf("\t\t\tIs ur character multi talented?\n");
					printf("\t\t\t\t Option: "); // firdous ashiq Q5
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
						printf("\n\t\t\t\tQuestion no %d\n", count);
						printf("\t\t\tshe is also invovled in boxing?\n");
						printf("\t\t\t\t Option: "); // firdous ashiq Q6
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\t\t\t\tQuestion no %d\n", count);
							printf("\t\t\tDoes she like to slap people alot?\n");
							printf("\t\t\t\t Option: "); // firdous ashiq Q7
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\t\t\t\tQuestion no %d\n", count);
								printf("\t\t\tDoes she likes to play cricket?\n");
								printf("\t\t\t\t Option: "); // firdous ashiq Q8
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\t\t\t\tQuestion no %d\n", count);
									printf("\t\t\tDid she drove a tractor once in her life?\n");
									printf("\t\t\t\t Option: "); // firdous ashiq Q9
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\t\t\t\tQuestion no %d\n", count);
										printf("\t\t\tDid she gaves rules & regulations on EID(no pappiyan and jhappyan)?\n");
										printf("\t\t\t\t Option: "); // firdous ashiq Q10
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\t\t\t\tYour character is firdous ashiq awan!\n");
											printf("\n\t\t\tPolitics mujhe ati nhi \n\t\t\tBoxing meri jaati nhi\n");
											PlaySound(TEXT("Firdos.wav"), NULL, SND_ASYNC);
											system("pause");
											exit(0);
										}
									default: // firdous ashiq Q10
										maryam(ch, count);
										firdous(ch, count);

										break;
									}

								default: // firdous ashiq Q9
									maryam(ch, count);
									firdous(ch, count);
									break;
								}

							default: // firdous ashiq Q8
								maryam(ch, count);
								firdous(ch, count);
								break;
							}

						default: // firdous ashiq Q7
							maryam(ch, count);
							firdous(ch, count);
							break;
						}

					default: // firdous ashiq Q6
						maryam(ch, count);
						firdous(ch, count);
						break;
					}
				default: // firdous ashiq Q5
					maryam(ch, count);
					firdous(ch, count);
					break;
				}

			default: // firdous ashiq Q4
				maryam(ch, count);
				firdous(ch, count);
				break;
			}

		default: // firdous ashiq Q3
			printf("\n\t\t\t\tQuestion no %d\n", count);
			printf("\t\t\tIs your character alive?     \n");
			printf("\t\t\t\t Option: "); // firdous ashiq Q7
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				maryam(ch, count);

			default:
				Benazir(ch, count);

				break;
			}
			break;
		}

	default: // firdous ashiq Q2
		maryam(ch, count);
		Benazir(ch, count);
		break;
	}
}
void imran_khan(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q1
	printf("\t\t\tIs ur character over 50 years?\n");
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q2
		printf("\t\t\tIs he healthy and fit?\n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q3
			printf("\t\t\tIs charachter a bold man?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q4
				printf("\t\t\tDoes your character often wear national dress?\n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q5
					printf("\t\t\tDo your character have 3 or more wifes?\n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':

						printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q6
						printf("\t\t\tDo you think ur character is loyal?\n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
						case 'n':
						case 'N':
							printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q7
							printf("\t\t\tkiya ap ghabra to nhi rahe?\n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
							case 'n':
							case 'N':
								printf("\n");
								printf("\t\t\t\tapne gabrana nhi hai.\n");
								printf("\n\t\t\tQuestion no %d\n", count); // imran khan Q8
								printf("\n\t\t\t\tIs ur character patriotic\n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
								case 'n':
								case 'N':
									printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q9
									printf("\t\t\tDoes your character started a charity project?\n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q10
										printf("\t\t\tDoes your character have betrayers?\n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q11
											printf("\t\t\tIs your chracter a former cricketer?\n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
												printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q12
												printf("\t\t\tDid ur politician got shot on leg?\n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
													printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q13
													printf("\t\t\tkiya ap ghabra to nhi rahe?\n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
													case 'n':
													case 'N':
														printf("\n");
														printf("\n\t\t\t\tapne gabrana nhi hai\n");
														printf("\n\t\t\tQuestion no %d\n", count); // imran khan Q14
														printf("\t\t\tIs your character famous for saying Absolutely not.\n");
														printf("\t\t\t\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y':
														case 'D':
														case 'd':
														case 'n':
														case 'N':

															printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q15
															printf("\t\t\tDid he fell from stage?\n");
															printf("\t\t\t\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y':
															case 'y':
															case 'D':
															case 'd':
															case 'n':
															case 'N':
																printf("\n\t\t\t\tQuestion no %d\n", count); // imran khan Q16
																printf("\t\t\tkya tabdeeli aa chuki he?\n");
																printf("\t\t\t\t Option: ");
																scanf(" %c", &ch);
																count++;
																switch (ch)
																{
																case 'Y':
																case 'y':
																case 'D':
																case 'd':
																case 'N':
																case 'n':
																	printf("\t\t\t\tYou are thinking about imran khan!\n");
																	printf("\n\t\t\tHame to pf ne loota\n\t\t\tfit mai kahan dam tha\n\t\t\tGPA bhi wahan giri\n\t\t\tjahan AP mai number kam thay\n");
																	PlaySound(TEXT("imran.wav"), NULL, SND_ASYNC);
																	system("pause");
																	exit(0);
																}
															default: // imran khan Q16
																imran_khan(ch, count);
																break;
															}
														default: // imran khan Q15
															imran_khan(ch, count);
															break;
														}
													default: // imran khan Q14
														imran_khan(ch, count);
														break;
													}
												default: // imran khan Q13
													imran_khan(ch, count);
													break;
												}
											default: // imran khan Q12
												imran_khan(ch, count);
												break;
											}
										default: // imran khan Q11
											imran_khan(ch, count);
											break;
										}
									default: // imran khan Q10
										imran_khan(ch, count);
										break;
									}
								default: // imran khan Q9
									imran_khan(ch, count);
									break;
								}
							default: // imran khan Q8
								imran_khan(ch, count);
								break;
							}
						default: // imran khan Q7
							imran_khan(ch, count);
							break;
						}
					default: // imran khan Q6
						imran_khan(ch, count);
						break;
					}
				default: // imran khan Q5
					sheikh_rasheed(ch, count);
					shahbaz(ch, count);
					imran_khan(ch, count);
					break;
				}
			default: // imran khan Q4
				shahbaz(ch, count);
				imran_khan(ch, count);

				break;
			}
		default: // imran khan Q3

			Altaf(ch, count);
			sheikh_rasheed(ch, count);
			break;
		}
	default: // imran khan Q2
		Bilawal(ch, count);
		imran_khan(ch, count);
		break;
	}
} // imran khan End
void shahbaz(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d", count);
	printf("\n\t\t\tIs he below 80 years?  \n"); // show Q1
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d", count); // show Q2
		printf("\n\t\t\tDoes ur character often incorporates his humor with his speech?  \n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d", count); // show Q3
			printf("\n\t\t\tDoes he likes to sing?   \n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
			case 'N':
			case 'n':
				printf("\n\t\t\t\tQuestion no %d", count); // show Q4
				printf("\n\t\t\tDid he started a scheme for students?   \n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
				case 'N':
				case 'n':
					printf("\n\t\t\t\tQuestion no %d", count); // show Q5
					printf("\n\t\t\tDid he completed launch project?   \n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
					case 'N':
					case 'n':
						printf("\n\t\t\t\tQuestion no %d", count); // show Q6
						printf("\n\t\t\tis your character jazbaati?   \n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
						case 'N':
						case 'n':
							printf("\n\t\t\t\tQuestion no %d", count); // show Q7
							printf("\n\t\t\tis his wife alive?   \n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
							case 'N':
							case 'n':
								printf("\n\t\t\t\tQuestion no %d", count); // show Q8
								printf("\n\t\t\tDoes he complete the Sunnah of 4 wives?   \n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
								case 'N':
								case 'n':
									printf("\n\t\t\t\tQuestion no %d", count); // show Q9
									printf("\n\t\t\tWear sun glasses?    \n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\t\t\t\tQuestion no %d", count); // show Q10
										printf("\n\t\t\tIs he liked by people?     \n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
										case 'N':
										case 'n':
											printf("\n\t\t\t\tQuestion no %d", count); // show Q11
											printf("\n\t\t\tDid your politcian Wear Safari Suit?    \n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
											case 'N':
											case 'n':
												printf("\n\t\t\t\tQuestion no %d", count); // show Q12
												printf("\n\t\t\tIs his son carbon copy of him?    \n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
												case 'N':
												case 'n':
													printf("\n\t\t\t\tQuestion no %d", count); // show Q13
													printf("\n\t\t\t Does he visits his relative in abroad hospital?     \n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
													case 'N':
													case 'n':
														printf("\n\t\t\t\tQuestion no %d", count); // show Q14
														printf("\n\t\t\tDoes your poltitican had a rumour of cherry blossom?     \n");
														printf("\t\t\t\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y':
														case 'D':
														case 'd':
														case 'N':
														case 'n':
															printf("\n\t\t\t\tQuestion no %d", count); // show Q15
															printf("\n\t\t\tDoes ur character said beggars Can't be choosers? \t\t(the 1 who ask for bonus marks can't be programmers)  \n");
															printf("\t\t\t\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y':
															case 'y':
															case 'D':
															case 'd':
																printf("\n\t\t\tYour character is Shahbaz Sharif!\n");
																printf("\n\t\t\t Mei Programming Prhne nhi aya \n\t\t\tlekin CS k lye Majboori hei\n");
																PlaySound(TEXT("Shahbaz.wav"), NULL, SND_ASYNC);
																system("pause");
																exit(0);
															}
														default:
															shahbaz(ch, count);
															break;
														}
													default: // Q14
														shahbaz(ch, count);
														break;
													}
												default:
													shahbaz(ch, count);
													break; // Q13
												}
											default: // Q12
												shahbaz(ch, count);
												break;
											}
										default: // Q11
											shahbaz(ch, count);
											break;
										}
									default: // Q10
										shahbaz(ch, count);
										break;
									}
								default: // Q9
									shahbaz(ch, count);
									break;
								}
							default: // Q08
								shahbaz(ch, count);
								break;
							}
						default: // Q07
							shahbaz(ch, count);
							break;
						}
					default: // Q06
						shahbaz(ch, count);
						break;
					}
				default: // Q05
					shahbaz(ch, count);
					break;
				}
			default: // Q04
				shahbaz(ch, count);
				break;
			}
		default: // Q03
			sheikh_rasheed(ch, count);
			imran_khan(ch, count);
			shahbaz(ch, count);

			break;
		}
	default: // Q02
		shahbaz(ch, count);
		break;
	}
} // shahbaz End
void sheikh_rasheed(char ch, int count)
{
	printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q1
	printf("\t\t\tIs your character from kashmiri family?\n");
	printf("\t\t\t\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q2
		printf("\t\t\tDoes Your character looks old?\n");
		printf("\t\t\t\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'N':
		case 'n':
		case 'D':
		case 'd':
			printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q3
			printf("\t\t\tIs charachter a bold(confident) man?\n");
			printf("\t\t\t\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q4
				printf("\t\t\tIs charachter fat?\n");
				printf("\t\t\t\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q5
					printf("\t\t\tIs he Married?\n");
					printf("\t\t\t\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'N':
					case 'n':
					case 'D':
					case 'd':
						printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q6
						printf("\t\t\tDoes he smokes?\n");
						printf("\t\t\t\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q7
							printf("\t\t\tDoes ur character gives sigma vibes?\n");
							printf("\t\t\t\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q8
								printf("\t\t\tDoes ur character have a moustache?\n");
								printf("\t\t\t\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q9
									printf("\t\t\tDoes your character owns a laal mansion?\n");
									printf("\t\t\t\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q10
										printf("\t\t\tIs he currently the interior minister of Pakistan?\n");
										printf("\t\t\t\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q11
											printf("\t\t\tIs your character linked with trains?\n");
											printf("\t\t\t\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
												printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q12
												printf("\t\t\tDoes your character like to roast people?\n");
												printf("\t\t\t\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
													printf("\n\t\t\t\tQuestion no %d\n", count); // sheikh rasheed Q13
													printf("\t\t\tHe always talk about his favourite politician?\n");
													printf("\t\t\t\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
														printf("\n\t\t\t\tYou are thinking about sheikh rasheed\n");
														printf("\n\t\t\tSheikhu Didnt choose thug life ,\n\t\t\t thug life choose him\n");
														PlaySound(TEXT("Sheikh.wav"), NULL, SND_ASYNC);
														system("pause");
														exit(0);
													default:
														break;
													}
												default: // sheikh rasheed Q13
													imran_khan(ch, count);
													sheikh_rasheed(ch, count);
													break;
												}
											default: // sheikh rasheed Q12
												imran_khan(ch, count);
												sheikh_rasheed(ch, count);
												break;
											}
										default: // sheikh rasheed Q11
											imran_khan(ch, count);
											sheikh_rasheed(ch, count);
											break;
										}
									default: // sheikh rasheed Q10
										imran_khan(ch, count);
										sheikh_rasheed(ch, count);
										break;
									}
								default: // sheikh rasheed Q9
									imran_khan(ch, count);
									sheikh_rasheed(ch, count);

									break;
								}
							default: // sheikh rasheed Q8
								sheikh_rasheed(ch, count);

								break;
							}
						default: // sheikh rasheed Q7
							sheikh_rasheed(ch, count);
							imran_khan(ch, count);
							break;
						}
					default: // sheikh rasheed Q6
						imran_khan(ch, count);
						break;
					}
				default: // sheikh rasheed Q5
					imran_khan(ch, count);
					shahbaz(ch, count);
					sheikh_rasheed(ch, count);

					break;
				}
			default: // sheikh rasheed Q4
				shahbaz(ch, count);
				imran_khan(ch, count);

				sheikh_rasheed(ch, count);
				break;
			}
		default: // sheikh rasheed Q3
			shahbaz(ch, count);
			imran_khan(ch, count);
			sheikh_rasheed(ch, count);

			break;
		}
	default: // sheikh rasheed Q2
		imran_khan(ch, count);
		shahbaz(ch, count);
		sheikh_rasheed(ch, count);
		break;
	}
} // shiekh rasheed End
