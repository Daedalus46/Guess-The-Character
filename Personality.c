#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>
#include<windows.h>

void sheikh_rasheed(char ch, int count);
void imran_khan(char ch, int count);
void shahbaz(char ch, int count);
void maryam(char ch, int count);
void nawaz_sharif(char ch, int count);
void Bilawal(char ch, int count);
void Altaf(char ch, int count);
void Benazir(char ch, int count);
void firdous(char ch, int count);

void maryam(char ch, int count)
{
	printf("\n\tQuestion no %d\n", count); // maryam nawaz Q1
	printf("Is ur character over 40 years?\n");
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d\n", count); // maryam nawaz Q2
		printf("Does ur character look young?\n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d\n", count); // maryam nawaz Q3
			printf("Is ur character married?\n");
			printf("\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\tQuestion no %d\n", count); // maryam nawaz Q4
				printf("Does ur character have 4 kids?\n");
				printf("\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d\n", count); // maryam nawaz Q5
					printf("Does ur character have someone who is in politics?\n");
					printf("\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
						printf("\n\tQuestion no %d\n", count); // maryam nawaz Q6
						printf("Is she the chair person of prime minsiters youth program?\n");
						printf("\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\tQuestion no %d\n", count); // maryam nawaz Q7
							printf("Is she is known as the nani of other politicians?\n");
							printf("\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\tQuestion no %d\n", count); // maryam nawaz Q8
								printf("Did her degree was critized by someone and challenged in court?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\tQuestion no %d\n", count); // maryam nawaz Q9
									printf("Do she wears tons of makeup?\n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d\n", count); // maryam nawaz Q10
										printf("Did she contributed to betterment of country?\n");
										printf("\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\tQuestion no %d\n", count); // maryam nawaz Q11
											printf("Does she always target other politicians in her speech?\n");
											printf("\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
												printf("\n\tQuestion no %d\n", count); // maryam nawaz Q12
												printf("does she wear glasses?\n");
												printf("\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
													printf("\n\tQuestion no %d\n", count); // maryam nawaz Q13
													printf("Does she play the role of Phuppo in politics?\n");
													printf("\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
														printf("\n\tQuestion no %d\n", count); // maryam nawaz Q14
														printf("is she a role model for many people?\n");
														printf("\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y':
														case 'D':
														case 'd':
															printf("You are thinking about maryam nawaz!\n");
															printf("\n\tye bhool hain gulaab k koi asla to nhi\n\tPF mai backlog lage koi masla to nhi \n");
															PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\Maryam.wav"), NULL, SND_ASYNC);
															system("pause");
															exit(0);
														}
													default: // maryam nawaz Q14
														firdous(ch, count);
														Benazir(ch, count);
														maryam(ch, count);
														break;
													}
												default: // maryam nawaz Q13
													firdous(ch, count);
													Benazir(ch, count);
													maryam(ch, count);
													break;
												}
											default: // maryam nawaz Q12
												firdous(ch, count);
												Benazir(ch, count);
												maryam(ch, count);
												break;
											}
										default: // maryam nawaz Q11
											firdous(ch, count);
											Benazir(ch, count);
											maryam(ch, count);
											break;
										}
									default: // maryam nawaz Q10
										firdous(ch, count);

										Benazir(ch, count);
										maryam(ch, count);
										break;
									}
								default: // maryam nawaz Q9
									firdous(ch, count);
									Benazir(ch, count);
									maryam(ch, count);
									break;
								}
							default: // maryam nawaz Q8
								firdous(ch, count);
								Benazir(ch, count);
								maryam(ch, count);
								break;
							}
						default: // maryam nawaz Q7
							firdous(ch, count);
							Benazir(ch, count);
							maryam(ch, count);
							break;
						}
					default: // maryam nawaz Q6
						firdous(ch, count);
						Benazir(ch, count);
						maryam(ch, count);
						break;
					}
				default: // maryam nawaz Q5
					firdous(ch, count);
					Benazir(ch, count);
					maryam(ch, count);
					break;
				}
			default: // maryam nawaz Q4
				firdous(ch, count);
				Benazir(ch, count);
				maryam(ch, count);
				break;
			}
		default: // maryam nawaz Q3
			firdous(ch, count);
			Benazir(ch, count);
			maryam(ch, count);
			break;
		}
	default: // maryam nawaz Q2
		firdous(ch, count);
		Benazir(ch, count);
		maryam(ch, count);
		break;
	}
}
void Altaf(char ch, int count)
{
	printf("\n\tQuestion no %d", count);
	printf("\nIs he currently in Pakistan?  \n"); // Altaf Q1
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'N':
	case 'n':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d", count); // Altaf Q2
		printf("\nDoes he have moustache?  \n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d", count); // Altaf Q3
			printf("\nDoes he wear shawll?   \n");
			printf("\t Option: ");
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
				printf("\n\tQuestion no %d", count); // Altaf Q4
				printf("\nDoes he started a league of rights?   \n");
				printf("\t Option: ");
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
					printf("\n\tQuestion no %d", count); // Altaf Q5
					printf("\nDoes he talks like gargel??   \n");
					printf("\t Option: ");
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
						printf("\n\tQuestion no %d", count); // Altaf Q6
						printf("\nDoes he studied from KU?   \n");
						printf("\t Option: ");
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
							printf("\n\tQuestion no %d", count); // Altaf Q7
							printf("\nIs your character savage?   \n");
							printf("\t Option: ");
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
								printf("\n\tQuestion no %d", count); // Altaf Q8
								printf("\nIs his wife alive?   \n");
								printf("\t Option: ");
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
									printf("\n\tQuestion no %d", count); // Altaf Q9
									printf("\nWear sun glasses?    \n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d", count); // Altaf Q10
										printf("\nIs there a university by his father name?    \n");
										printf("\t Option: ");
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
											printf("\n\tQuestion no %d", count); // Altaf Q11
											printf("\nDoes he need two chair to sit?    \n");
											printf("\t Option: ");
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
												printf("\n\tQuestion no %d", count); // Altaf Q12
												printf("\nIs your charachter from a kahata pita gharana?    \n");
												printf("\t Option: ");
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
													printf("\n\tQuestion no %d", count); // Altaf Q13
													printf("\nIs his call is enough for breakdown?     \n");
													printf("\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'N':
													case 'n':
													{
														printf("\n Sach Batao! \n\t 1 bonus marks idhar \n \t 1 bonus marks udhar\n");
													}
													case 'D':
													case 'd':
													case 'Y':
													case 'y':
														printf("\nYour character is Altaf Hussain!\n");
														printf("\nVote for Miss Samia Masood Awan  \nWarnaa bori tayyaar\n");
														PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\altaf.wav"), NULL, SND_ASYNC);
														system("pause");
														exit(0);
													}
												default:
													Bilawal(ch, count);

													imran_khan(ch, count);
													shahbaz(ch, count);
													sheikh_rasheed(ch, count);
													break; // Q13
												}
											default: // Q12
												Bilawal(ch, count);

												imran_khan(ch, count);
												shahbaz(ch, count);
												sheikh_rasheed(ch, count);
												break;
											}
										default: // Q11
											Bilawal(ch, count);

											imran_khan(ch, count);
											shahbaz(ch, count);
											sheikh_rasheed(ch, count);
											break;
										}
									default: // Q10
										Bilawal(ch, count);

										imran_khan(ch, count);
										shahbaz(ch, count);
										sheikh_rasheed(ch, count);
										break;
									}
								default: // Q9
									Bilawal(ch, count);
									Altaf(ch, count);
									imran_khan(ch, count);
									shahbaz(ch, count);
									sheikh_rasheed(ch, count);
									break;
								}
							default: // Q8
								Bilawal(ch, count);
								Altaf(ch, count);
								imran_khan(ch, count);
								shahbaz(ch, count);
								sheikh_rasheed(ch, count);
								break;
							}
						default: // Q7
							Bilawal(ch, count);
							Altaf(ch, count);
							imran_khan(ch, count);
							shahbaz(ch, count);
							sheikh_rasheed(ch, count);
							break;
						}
					default: // Q6
						Bilawal(ch, count);
						Altaf(ch, count);
						imran_khan(ch, count);
						shahbaz(ch, count);
						sheikh_rasheed(ch, count);
						break;
					}
				default: // Q5
					Bilawal(ch, count);
					Altaf(ch, count);
					imran_khan(ch, count);
					shahbaz(ch, count);
					sheikh_rasheed(ch, count);
					break;
				}
			default: // Q4
				Bilawal(ch, count);
				Altaf(ch, count);
				imran_khan(ch, count);
				shahbaz(ch, count);
				sheikh_rasheed(ch, count);
				break;
			}
		default: // Q3
			shahbaz(ch, count);
			Bilawal(ch, count);
			Altaf(ch, count);
			imran_khan(ch, count);
			sheikh_rasheed(ch, count);
			break;
		}
	default: // Q2
		sheikh_rasheed(ch, count);
		Bilawal(ch, count);
		Altaf(ch, count);
		imran_khan(ch, count);
		shahbaz(ch, count);
		break;
	}
}
void Benazir(char ch, int count)
{
	printf("\n\tQuestion no %d\n", count); // benazir Q1
	printf("Is your character famous in Sindh?\n");
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y': // benazir Q2
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d\n", count);
		printf("Was this person associated with a prominent political family in Pakistan?\n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y': // benazir Q3
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d\n", count);
			printf("Did she attend Harvard University for her education?\n");
			printf("\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y': // benazir Q4
			case 'y':
			case 'D':
			case 'd':
				printf("\n\tQuestion no %d\n", count);
				printf("Was your character married?\n");
				printf("\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y': // benazir Q5
				case 'y':
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d\n", count);
					printf("Did her political career involve periods of exile?\n");
					printf("\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y': // benazir Q6
					case 'y':
					case 'D':
					case 'd':
						printf("\n\tQuestion no %d\n", count);
						printf("Was she the first woman to lead a Muslim-majority country?\n");
						printf("\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y': // benazir Q7
						case 'y':
						case 'D':
						case 'd':
							printf("\n\tQuestion no %d\n", count);
							printf("Did this person serve as the Prime Minister of Pakistan??\n");
							printf("\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y': // benazir Q8
							case 'y':
							case 'D':
							case 'd':
								printf("\n\tQuestion no %d\n", count);
								printf("Was she known for her efforts in promoting women's rights in her country?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y': // benazir bhutto Q9
								case 'y':
								case 'D':
								case 'd':
									printf("\n\tQuestion no %d\n", count);
									printf("Did she write an autobiography sharing her experiences in politics?\n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y': // benazir bhutto Q10
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d\n", count);
										printf("Did her life end tragically due to a political incident?\n");
										printf("\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\nYour character is the 1st women PM of Pakistan Benzair Bhutto!\n");
											system("pause");
											exit(0);
										}
									default: // benazir bhutto Q10
										maryam(ch, count);
										firdous(ch, count);

										break;
									}
								default: // // benazir bhutto Q9
									maryam(ch, count);
									firdous(ch, count);

									break;
									break;
								}
							default: // benazir Q8
								maryam(ch, count);
								firdous(ch, count);

								break;
								break;
							}
						default: // benazir Q7
							maryam(ch, count);
							firdous(ch, count);

							break;
							break;
						}
					default: // benazir Q6
						maryam(ch, count);
						firdous(ch, count);

						break;
						break;
					}
				default: // benazir Q5
					maryam(ch, count);
					firdous(ch, count);

					break;
					break;
				}
			default: // benazir Q4
				maryam(ch, count);
				firdous(ch, count);

				break;
				break;
			}
		default: // benazir Q3
			maryam(ch, count);
			firdous(ch, count);

			break;
			break;
		}
	default: // benazir Q2
		maryam(ch, count);
		firdous(ch, count);

		break;
		break;
	}
} // function end
void Bilawal(char ch, int count)
{
	printf("\n\tQuestion no %d\n", count); // bilawal bhutto Q1
	printf("Is your character alive?\n");
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y': // bilawal bhutto Q2
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d\n", count);
		printf("Is his father or mother famous politician?\n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y': // bilawal bhutto Q3
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d\n", count);
			printf("Is your character clean-shaved?\n");
			printf("\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y': // bilawal bhutto Q4
			case 'y':
			case 'D':
			case 'd':
				printf("\n\tQuestion no %d\n", count);
				printf("Is your character un-married?\n");
				printf("\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y': // bilawal bhutto Q5
				case 'y':
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d\n", count);
					printf("Your character studied abroad?\n");
					printf("\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y': // bilawal bhutto Q6
					case 'y':
					case 'D':
					case 'd':
						printf("\n\tQuestion no %d\n", count);
						printf("Did your character made visa free for all Irani people?\n");
						printf("\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y': // bilawal bhutto Q7
						case 'y':
						case 'D':
						case 'd':
							printf("\n\tQuestion no %d\n", count);
							printf("Does your politician holds higher position in party?\n");
							printf("\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y': // bilawal bhutto Q8
							case 'y':
							case 'D':
							case 'd':
								printf("\n\tQuestion no %d\n", count);
								printf("Was your politician a former prime minister/chief minister?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y': // bilawal bhutto Q9
								case 'y':
								case 'D':
								case 'd':
									printf("\n\tQuestion no %d\n", count);
									printf("Does his speech not make any sense right?\n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y': // bilawal bhutto Q10
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d\n", count);
										printf("Is he fluent in english??\n");
										printf("\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y': // bilawal bhutto Q11
										case 'y':
										case 'D':
										case 'd':
											printf("\n\tQuestion no %d\n", count);
											printf("Does he have issue in gender pronounciation?\n");
											printf("\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y': // bilawal bhutto Q12
											case 'y':
											case 'D':
											case 'd':
												printf("\n\tQuestion no %d\n", count);
												printf("Is he favorite of any other politician?\n");
												printf("\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y': // bilawal bhutto Q13
												case 'y':
												case 'D':
												case 'd':
													printf("\n\tQuestion no %d\n", count);
													printf("Did he recently said a province KFC?\n");
													printf("\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y': // bilawal bhutto Q14
													case 'y':
													case 'D':
													case 'd':
														printf("\n\tQuestion no %d\n", count);
														printf("Kya aap k politician ka bolne ka andaaz thora kasual he?\t\tkiya apki kanpe tang rahi hai\n");
														printf("\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y': // bilawal bhutto Q15
														case 'y':
														case 'D':
														case 'd':
															printf("\n\tQuestion no %d\n", count);
															printf("Is your politician likely to become Prime minister in future?\n");
															printf("\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y': // bilawal bhutto Q16
															case 'y':
															case 'D':
															case 'd':
																printf("\n\tQuestion no %d\n", count);
																printf("You know him because of (Barish huti hai tw pani ata hai)?\n");
																printf("\t Option: ");
																scanf(" %c", &ch);
																count++;
																switch (ch)
																{
																case 'Y': // bilawal bhutto end
																case 'y':
																case 'D':
																case 'd':
																	printf("\nYour character is Bilawal Bhutto!\n");
																	printf("\ntum to aik kanputli (statue) ho\ntumhari doren to PF hilaa raha hai\n");
																	PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\bilawal.wav"), NULL, SND_ASYNC);
																	system("pause");
																	exit(0);
																}
															default: // bilawal bhutto Q16
																Bilawal(ch, count);
																Altaf(ch, count);
																imran_khan(ch, count);
																shahbaz(ch, count);
																sheikh_rasheed(ch, count);
																break;
															}
														default: // bilawal bhutto Q15
															Bilawal(ch, count);
															Altaf(ch, count);
															imran_khan(ch, count);
															shahbaz(ch, count);
															sheikh_rasheed(ch, count);
															break;
														}
													default: // bilawal bhutto Q14
														Bilawal(ch, count);
														Altaf(ch, count);
														imran_khan(ch, count);
														shahbaz(ch, count);
														sheikh_rasheed(ch, count);
														break;
													}
												default: // bilawal bhutto Q13
													Bilawal(ch, count);
													Altaf(ch, count);
													imran_khan(ch, count);
													shahbaz(ch, count);
													sheikh_rasheed(ch, count);
													break;
												}
											default: // bilawal bhutto Q12
												Bilawal(ch, count);
												Altaf(ch, count);
												imran_khan(ch, count);
												shahbaz(ch, count);
												sheikh_rasheed(ch, count);
												break;
											}
										default: // bilawal bhutto Q11
											Bilawal(ch, count);
											Altaf(ch, count);
											imran_khan(ch, count);
											shahbaz(ch, count);
											sheikh_rasheed(ch, count);
											break;
										}
									default: // bilawal bhutto Q10
										Bilawal(ch, count);
										Altaf(ch, count);
										imran_khan(ch, count);
										shahbaz(ch, count);
										sheikh_rasheed(ch, count);
										break;
									}
								default: // bilawal bhutto Q9
									Bilawal(ch, count);
									Altaf(ch, count);
									imran_khan(ch, count);
									shahbaz(ch, count);
									sheikh_rasheed(ch, count);
									break;
								}
							default: // bilawal bhutto Q8
								Bilawal(ch, count);
								Altaf(ch, count);
								imran_khan(ch, count);
								shahbaz(ch, count);
								sheikh_rasheed(ch, count);
								break;
							}
						default: // bilawal bhutto Q7
							Bilawal(ch, count);
							Altaf(ch, count);
							imran_khan(ch, count);
							shahbaz(ch, count);
							sheikh_rasheed(ch, count);
							break;
						}
					default: // bilawal bhutto Q6
						Bilawal(ch, count);
						Altaf(ch, count);
						imran_khan(ch, count);
						shahbaz(ch, count);
						sheikh_rasheed(ch, count);
						break;
					}
				default: // bilawal bhutto Q5
					Bilawal(ch, count);
					Altaf(ch, count);
					imran_khan(ch, count);
					shahbaz(ch, count);
					sheikh_rasheed(ch, count);
					break;
				}
			default: // bilawal bhutto Q4
				Bilawal(ch, count);
				Altaf(ch, count);
				imran_khan(ch, count);
				shahbaz(ch, count);
				sheikh_rasheed(ch, count);
				break;
			}
		default: // bilawal bhutto Q3
			sheikh_rasheed(ch, count);
			shahbaz(ch, count);
			Bilawal(ch, count);
			Altaf(ch, count);
			imran_khan(ch, count);
			Altaf(ch, count);
			break;
		}
	default: // bilawal bhutto Q2
		Bilawal(ch, count);
		Altaf(ch, count);
		imran_khan(ch, count);
		shahbaz(ch, count);
		sheikh_rasheed(ch, count);
		break;
	}
}

void firdous(char ch, int count)
{

	printf("\n\tQuestion no %d\n", count);
	printf("Is she over 40 years ?\n");
	printf("\t Option: "); // firdous ashiq Q1
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d\n", count);
		printf("is she from sialkot district?\n");
		printf("\t Option: "); // firdous ashiq Q2
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d\n", count);
			printf("is she role model for many people?\n");
			printf("\t Option: "); // firdous ashiq Q3
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\tQuestion no %d\n", count);
				printf("does she weear glasses?\n");
				printf("\t Option: "); // firdous ashiq Q4
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d\n", count);
					printf("is ur character multi talented?\n");
					printf("\t Option: "); // firdous ashiq Q5
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
						printf("\n\tQuestion no %d\n", count);
						printf("she is also invovled in boxing?\n");
						printf("\t Option: "); // firdous ashiq Q6
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\tQuestion no %d\n", count);
							printf("Does she like to slap people alot?\n");
							printf("\t Option: "); // firdous ashiq Q7
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\tQuestion no %d\n", count);
								printf("does she likes to play cricket?\n");
								printf("\t Option: "); // firdous ashiq Q8
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\tQuestion no %d\n", count);
									printf("did she drove a tractor once in her life?\n");
									printf("\t Option: "); // firdous ashiq Q9
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d\n", count);
										printf("did she gaves rules & regulations on EID(no pappiyan and jhappyan)?\n");
										printf("\t Option: "); // firdous ashiq Q10
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\nYour character is firdous ashiq awan!\n");
											printf("\nPolitics mujhe ati nhi \nBoxing meri jaati nhi\n");
											PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Firdos.wav"), NULL, SND_ASYNC);
											system("pause");
											exit(0);
										}
									default: // firdous ashiq Q10
										maryam(ch, count);
										Benazir(ch, count);
										firdous(ch, count);
										break;
										break;
									}

								default: // firdous ashiq Q9
									maryam(ch, count);
									Benazir(ch, count);
									firdous(ch, count);
									break;
								}

							default: // firdous ashiq Q8
								maryam(ch, count);
								Benazir(ch, count);
								firdous(ch, count);
								break;
							}

						default: // firdous ashiq Q7
							maryam(ch, count);
							Benazir(ch, count);
							firdous(ch, count);
							break;
						}

					default: // firdous ashiq Q6
						maryam(ch, count);
						Benazir(ch, count);
						firdous(ch, count);
						break;
					}
				default: // firdous ashiq Q5
					maryam(ch, count);
					Benazir(ch, count);
					firdous(ch, count);
					break;
				}

			default: // firdous ashiq Q4
				maryam(ch, count);
				Benazir(ch, count);
				firdous(ch, count);
				break;
			}

		default: // firdous ashiq Q3
			printf("\n\tQuestion no %d\n", count);
			printf("Is your character alive?     \n");
			printf("\t Option: "); // firdous ashiq Q7
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				maryam(ch, count);
				Benazir(ch, count);
				firdous(ch, count);
			default:
				Benazir(ch, count);
				maryam(ch, count);
				firdous(ch, count);
				break;
			}
			break;
		}

	default: // firdous ashiq Q2
		maryam(ch, count);
		Benazir(ch, count);
		firdous(ch, count);
		break;
	}
}
void imran_khan(char ch, int count)
{
	printf("\n\tQuestion no %d\n", count); // imran khan Q1
	printf("Is ur character over 50 years?\n");
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d\n", count); // imran khan Q2
		printf("Is he healthy and fit?\n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d\n", count); // imran khan Q3
			printf("Is charachter a bold man?\n");
			printf("\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\tQuestion no %d\n", count); // imran khan Q4
				printf("does your character often wear national dress?\n");
				printf("\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d\n", count); // imran khan Q5
					printf("Do your character have 3 or more wifes?\n");
					printf("\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'Y':
					case 'y':
					case 'D':
					case 'd':
						printf("\n\tQuestion no %d\n", count); // imran khan Q6
						printf("Do you think ur character is loyal?\n");
						printf("\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\tQuestion no %d\n", count); // imran khan Q7
							printf("kiya ap ghabra to nhi rahe?\n");
							printf("\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\tQuestion no %d\n", count); // imran khan Q8
								printf("apne gabrana nhi hai.\n");
								printf("\nIs ur character patriotic\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\tQuestion no %d\n", count); // imran khan Q9
									printf("does your character started a charity project?\n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d\n", count); // imran khan Q10
										printf("Does your character have betrayers?\n");
										printf("\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\tQuestion no %d\n", count); // imran khan Q11
											printf("Is your chracter a former cricketer?\n");
											printf("\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
												printf("\n\tQuestion no %d\n", count); // imran khan Q12
												printf("did ur politician got shot on leg?\n");
												printf("\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
													printf("\n\tQuestion no %d\n", count); // imran khan Q13
													printf("kiya ap ghabra to nhi rahe?\n");
													printf("\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
														printf("\n\tQuestion no %d\n", count); // imran khan Q14
														printf("\napne gabrana nhi hai\n");
														printf("Is your character famous for saying Absolutely not.\n");
														printf("\t Option: ");
														scanf(" %c", &ch);
														count++;
														switch (ch)
														{
														case 'Y':
														case 'y':
														case 'D':
														case 'd':
															printf("\n\tQuestion no %d\n", count); // imran khan Q15
															printf("Did he fell from stage?\n");
															printf("\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y':
															case 'y':
															case 'D':
															case 'd':
																printf("\n\tQuestion no %d\n", count); // imran khan Q16
																printf("kya tabdeeli aa chuki he?\n");
																printf("\t Option: ");
																scanf(" %c", &ch);
																count++;
																switch (ch)
																{
																case 'Y':
																case 'y':
																case 'D':
																case 'd':
																	printf("You are thinking about imran khan!\n");
																	printf("\n\tHame to pf ne loota\n\tfit mai kahan dam tha\n\tGPA bhi wahan giri\n\tjahan AP mai number kam thay\n");
																	PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\imran.wav"), NULL, SND_ASYNC);
																	system("pause");
																	exit(0);
																}
															default: // imran khan Q16
																Bilawal(ch, count);
																Altaf(ch, count);
																imran_khan(ch, count);
																shahbaz(ch, count);
																sheikh_rasheed(ch, count);
																break;
															}
														default: // imran khan Q15
															Bilawal(ch, count);
															Altaf(ch, count);
															imran_khan(ch, count);
															shahbaz(ch, count);
															sheikh_rasheed(ch, count);
															break;
														}
													default: // imran khan Q14
														Bilawal(ch, count);
														Altaf(ch, count);
														imran_khan(ch, count);
														shahbaz(ch, count);
														sheikh_rasheed(ch, count);
														break;
													}
												default: // imran khan Q13
													Bilawal(ch, count);
													Altaf(ch, count);
													imran_khan(ch, count);
													shahbaz(ch, count);
													sheikh_rasheed(ch, count);
													break;
												}
											default: // imran khan Q12
												Bilawal(ch, count);
												Altaf(ch, count);
												imran_khan(ch, count);
												shahbaz(ch, count);
												sheikh_rasheed(ch, count);
												break;
											}
										default: // imran khan Q11
											Bilawal(ch, count);
											Altaf(ch, count);
											imran_khan(ch, count);
											shahbaz(ch, count);
											sheikh_rasheed(ch, count);
											break;
										}
									default: // imran khan Q10
										Bilawal(ch, count);
										Altaf(ch, count);
										imran_khan(ch, count);
										shahbaz(ch, count);
										sheikh_rasheed(ch, count);
										break;
									}
								default: // imran khan Q9
									Bilawal(ch, count);
									Altaf(ch, count);
									imran_khan(ch, count);
									shahbaz(ch, count);
									sheikh_rasheed(ch, count);
									break;
								}
							default: // imran khan Q8
								Bilawal(ch, count);
								Altaf(ch, count);
								imran_khan(ch, count);
								shahbaz(ch, count);
								sheikh_rasheed(ch, count);
								break;
							}
						default: // imran khan Q7
							Bilawal(ch, count);
							Altaf(ch, count);
							imran_khan(ch, count);
							shahbaz(ch, count);
							sheikh_rasheed(ch, count);
							break;
						}
					default: // imran khan Q6
						Bilawal(ch, count);
						Altaf(ch, count);
						imran_khan(ch, count);
						shahbaz(ch, count);
						sheikh_rasheed(ch, count);
						break;
					}
				default: // imran khan Q5
					Bilawal(ch, count);
					Altaf(ch, count);
					imran_khan(ch, count);
					shahbaz(ch, count);
					sheikh_rasheed(ch, count);
					break;
				}
			default: // imran khan Q4
				shahbaz(ch, count);
				Bilawal(ch, count);
				Altaf(ch, count);
				imran_khan(ch, count);
				sheikh_rasheed(ch, count);
				break;
			}
		default: // imran khan Q3
			Bilawal(ch, count);
			Altaf(ch, count);
			imran_khan(ch, count);
			shahbaz(ch, count);
			sheikh_rasheed(ch, count);
			break;
		}
	default: // imran khan Q2
		Bilawal(ch, count);
		Altaf(ch, count);
		imran_khan(ch, count);
		shahbaz(ch, count);
		sheikh_rasheed(ch, count);
		break;
	}
} // imran khan End
void shahbaz(char ch, int count)
{
	printf("\n\tQuestion no %d", count);
	printf("\nIs he below 80 years?  \n"); // show Q1
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d", count); // show Q2
		printf("\nDoes ur character often incorporates his humor with his speech?  \n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'Y':
		case 'y':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d", count); // show Q3
			printf("\nDoes he likes to sing?   \n");
			printf("\t Option: ");
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
				printf("\n\tQuestion no %d", count); // show Q4
				printf("\nDid he started a scheme for students?   \n");
				printf("\t Option: ");
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
					printf("\n\tQuestion no %d", count); // show Q5
					printf("\nDid he completed launch project?   \n");
					printf("\t Option: ");
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
						printf("\n\tQuestion no %d", count); // show Q6
						printf("\nis your character jazbaati?   \n");
						printf("\t Option: ");
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
							printf("\n\tQuestion no %d", count); // show Q7
							printf("\nis his wife alive?   \n");
							printf("\t Option: ");
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
								printf("\n\tQuestion no %d", count); // show Q8
								printf("\nDoes he complete the Sunnah of 4 wives?   \n");
								printf("\t Option: ");
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
									printf("\n\tQuestion no %d", count); // show Q9
									printf("\nWear sun glasses?    \n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d", count); // show Q10
										printf("\nIs he liked by people?     \n");
										printf("\t Option: ");
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
											printf("\n\tQuestion no %d", count); // show Q11
											printf("\nDid your politcian Wear Safari Suit?    \n");
											printf("\t Option: ");
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
												printf("\n\tQuestion no %d", count); // show Q12
												printf("\nIs his son carbon copy of him?    \n");
												printf("\t Option: ");
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
													printf("\n\tQuestion no %d", count); // show Q13
													printf("\n Does he visits his relative in abroad hospital?     \n");
													printf("\t Option: ");
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
														printf("\n\tQuestion no %d", count); // show Q14
														printf("\nDoes your poltitican had a rumour of cherry blossom?     \n");
														printf("\t Option: ");
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
															printf("\n\tQuestion no %d", count); // show Q15
															printf("\noes ur character said beggars Can't be choosers? \t\t(the 1 who ask for bonus marks can't be programmers)  \n");
															printf("\t Option: ");
															scanf(" %c", &ch);
															count++;
															switch (ch)
															{
															case 'Y':
															case 'y':
															case 'D':
															case 'd':
																printf("\nYour character is Shahbaz Sharif!\n");
																printf("\n Mei Programming Prhne nhi aya \nlekin CS k lye Majboori hei\n");
																PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\Shahbaz.wav"), NULL, SND_ASYNC);
																system("pause");
																exit(0);
															}
														default:
															Bilawal(ch, count);
															Altaf(ch, count);
															imran_khan(ch, count);
															shahbaz(ch, count);
															sheikh_rasheed(ch, count);
															break;
														}
													default: // Q14
														Bilawal(ch, count);
														Altaf(ch, count);
														imran_khan(ch, count);
														shahbaz(ch, count);
														sheikh_rasheed(ch, count);
														break;
													}
												default:
													Bilawal(ch, count);
													Altaf(ch, count);
													imran_khan(ch, count);
													shahbaz(ch, count);
													sheikh_rasheed(ch, count);
													break; // Q13
												}
											default: // Q12
												Bilawal(ch, count);
												Altaf(ch, count);
												imran_khan(ch, count);
												shahbaz(ch, count);
												sheikh_rasheed(ch, count);
												break;
											}
										default: // Q11
											Bilawal(ch, count);
											Altaf(ch, count);
											imran_khan(ch, count);
											shahbaz(ch, count);
											sheikh_rasheed(ch, count);
											break;
										}
									default: // Q10
										Bilawal(ch, count);
										Altaf(ch, count);
										imran_khan(ch, count);
										shahbaz(ch, count);
										sheikh_rasheed(ch, count);
										break;
									}
								default: // Q9
									Bilawal(ch, count);
									Altaf(ch, count);
									imran_khan(ch, count);
									shahbaz(ch, count);
									sheikh_rasheed(ch, count);
									break;
								}
							default: // Q08
								Bilawal(ch, count);
								Altaf(ch, count);
								imran_khan(ch, count);
								shahbaz(ch, count);
								sheikh_rasheed(ch, count);
								break;
							}
						default: // Q07
							Bilawal(ch, count);
							Altaf(ch, count);
							imran_khan(ch, count);
							shahbaz(ch, count);
							sheikh_rasheed(ch, count);
							break;
						}
					default: // Q06
						Bilawal(ch, count);
						Altaf(ch, count);
						imran_khan(ch, count);
						shahbaz(ch, count);
						sheikh_rasheed(ch, count);
						break;
					}
				default: // Q05
					Bilawal(ch, count);
					Altaf(ch, count);
					imran_khan(ch, count);
					shahbaz(ch, count);
					sheikh_rasheed(ch, count);
					break;
				}
			default: // Q04
				Bilawal(ch, count);
				Altaf(ch, count);
				imran_khan(ch, count);
				shahbaz(ch, count);
				sheikh_rasheed(ch, count);
				break;
			}
		default: // Q03
			Bilawal(ch, count);
			Altaf(ch, count);
			imran_khan(ch, count);
			shahbaz(ch, count);
			sheikh_rasheed(ch, count);
			break;
		}
	default: // Q02
		Altaf(ch, count);
		Bilawal(ch, count);
		imran_khan(ch, count);
		shahbaz(ch, count);
		sheikh_rasheed(ch, count);
		break;
	}
} // shahbaz End
void sheikh_rasheed(char ch, int count)
{
	printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q1
	printf("Is your character from kashmiri family?\n");
	printf("\t Option: ");
	scanf(" %c", &ch);
	count++;
	switch (ch)
	{
	case 'Y':
	case 'y':
	case 'D':
	case 'd':
		printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q2
		printf("Does Your character looks old?\n");
		printf("\t Option: ");
		scanf(" %c", &ch);
		count++;
		switch (ch)
		{
		case 'N':
		case 'n':
		case 'D':
		case 'd':
			printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q3
			printf("Is charachter a bold(confident) man?\n");
			printf("\t Option: ");
			scanf(" %c", &ch);
			count++;
			switch (ch)
			{
			case 'Y':
			case 'y':
			case 'D':
			case 'd':
				printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q4
				printf("Is charachter fat?\n");
				printf("\t Option: ");
				scanf(" %c", &ch);
				count++;
				switch (ch)
				{
				case 'Y':
				case 'y':
				case 'D':
				case 'd':
					printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q5
					printf("Is he Married?\n");
					printf("\t Option: ");
					scanf(" %c", &ch);
					count++;
					switch (ch)
					{
					case 'N':
					case 'n':
					case 'D':
					case 'd':
						printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q6
						printf("Does he smokes?\n");
						printf("\t Option: ");
						scanf(" %c", &ch);
						count++;
						switch (ch)
						{
						case 'Y':
						case 'y':
						case 'D':
						case 'd':
							printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q7
							printf("Does ur character gives sigma vibes?\n");
							printf("\t Option: ");
							scanf(" %c", &ch);
							count++;
							switch (ch)
							{
							case 'Y':
							case 'y':
							case 'D':
							case 'd':
								printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q8
								printf("Does ur character have a moustache?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
								switch (ch)
								{
								case 'Y':
								case 'y':
								case 'D':
								case 'd':
									printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q9
									printf("Does your character owns a laal mansion?\n");
									printf("\t Option: ");
									scanf(" %c", &ch);
									count++;
									switch (ch)
									{
									case 'Y':
									case 'y':
									case 'D':
									case 'd':
										printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q10
										printf("Is he currently the interior minister of Pakistan?\n");
										printf("\t Option: ");
										scanf(" %c", &ch);
										count++;
										switch (ch)
										{
										case 'Y':
										case 'y':
										case 'D':
										case 'd':
											printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q11
											printf("Is your character linked with trains?\n");
											printf("\t Option: ");
											scanf(" %c", &ch);
											count++;
											switch (ch)
											{
											case 'Y':
											case 'y':
											case 'D':
											case 'd':
												printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q12
												printf("Does your character like to roast people?\n");
												printf("\t Option: ");
												scanf(" %c", &ch);
												count++;
												switch (ch)
												{
												case 'Y':
												case 'y':
												case 'D':
												case 'd':
													printf("\n\tQuestion no %d\n", count); // sheikh rasheed Q13
													printf("He always talk about his favourite politician?\n");
													printf("\t Option: ");
													scanf(" %c", &ch);
													count++;
													switch (ch)
													{
													case 'Y':
													case 'y':
													case 'D':
													case 'd':
														printf("\nYou are thinking about sheikh rasheed\n");
														printf("\n\tSheikhu Didnt choose thug life ,\n\t thug life choose him\n");
														PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\Audios\\Sheikh.wav"), NULL, SND_ASYNC);
														system("pause");
														exit(0);
													default:
														break;
													}
												default: // sheikh rasheed Q13
													Bilawal(ch, count);
													Altaf(ch, count);
													imran_khan(ch, count);
													shahbaz(ch, count);
													sheikh_rasheed(ch, count);
													break;
												}
											default: // sheikh rasheed Q12
												Bilawal(ch, count);
												Altaf(ch, count);
												imran_khan(ch, count);
												shahbaz(ch, count);
												sheikh_rasheed(ch, count);
												break;
											}
										default: // sheikh rasheed Q11
											Bilawal(ch, count);
											Altaf(ch, count);
											imran_khan(ch, count);
											shahbaz(ch, count);
											sheikh_rasheed(ch, count);
											break;
										}
									default: // sheikh rasheed Q10
										Bilawal(ch, count);
										Altaf(ch, count);
										imran_khan(ch, count);
										shahbaz(ch, count);
										sheikh_rasheed(ch, count);
										break;
									}
								default: // sheikh rasheed Q9
									Bilawal(ch, count);
									Altaf(ch, count);
									imran_khan(ch, count);
									shahbaz(ch, count);
									sheikh_rasheed(ch, count);
									break;
								}
							default: // sheikh rasheed Q8
								Bilawal(ch, count);
								Altaf(ch, count);
								imran_khan(ch, count);
								shahbaz(ch, count);
								sheikh_rasheed(ch, count);
								break;
							}
						default: // sheikh rasheed Q7
							Bilawal(ch, count);
							Altaf(ch, count);
							imran_khan(ch, count);
							shahbaz(ch, count);
							sheikh_rasheed(ch, count);
							break;
						}
					default: // sheikh rasheed Q6
						Bilawal(ch, count);
						Altaf(ch, count);
						imran_khan(ch, count);
						shahbaz(ch, count);
						sheikh_rasheed(ch, count);
						break;
					}
				default: // sheikh rasheed Q5
					imran_khan(ch, count);
					Bilawal(ch, count);
					Altaf(ch, count);
					shahbaz(ch, count);
					sheikh_rasheed(ch, count);
					break;
				}
			default: // sheikh rasheed Q4
				shahbaz(ch, count);
				Bilawal(ch, count);
				Altaf(ch, count);
				imran_khan(ch, count);
				sheikh_rasheed(ch, count);
				break;
			}
		default: // sheikh rasheed Q3
			shahbaz(ch, count);
			imran_khan(ch, count);
			Bilawal(ch, count);
			Altaf(ch, count);
			sheikh_rasheed(ch, count);
			imran_khan(ch, count);
			break;
		}
	default: // sheikh rasheed Q2
		imran_khan(ch, count);
		shahbaz(ch, count);
		Bilawal(ch, count);
		Altaf(ch, count);
		sheikh_rasheed(ch, count);
		break;
	}
} // shiekh rasheed End
