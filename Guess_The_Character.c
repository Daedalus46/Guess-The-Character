#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include "Title.c"
#include "Personalities.c"

void Start_the_Game() {
	int count = 1;
    char ch;
    printf("\n\t Lets Start The Game? \n");
    printf("\t Press 'Y' for YES \n");
    printf("\t Press 'N' for NO \n");
    printf("\t Option: ");
    
    // Read the user's input
    scanf(" %c", &ch);
    switch(ch) {
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

            switch(ch) {
                case 'Y':
                case 'y':
		            printf("\n\tQuestion no %d",count);
                    printf("\nIs your charchter male ?\n");
                    printf("\t Option: ");
                    scanf(" %c", &ch);
                    count++;
                    switch(ch) {
                    	case 'Y':
		                case 'y': 
		                	printf("\n\tQuestion no %d",count);
		                    printf("\nIs your character a politician?\n");
		                    printf("\t Option: ");
		                    scanf(" %c", &ch);
		                    count++;
		                    switch(ch) {
								case 'Y':
								case 'y': // Nawaz Sharif Q1
								case 'D':
								case 'd':
								printf("\n\tQuestion no %d",count);
								printf("\nIs your character over 50 years?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
				            	switch(ch) {
			                    	case 'Y':
					                case 'y':
									case 'D':
									case 'd': // Nawaz Sharif Q2
					                	printf("\n\tQuestion no %d",count);
					                    printf("\nDoes your character have famous a brother?\n");
					                    printf("\t Option: ");
					                    scanf(" %c", &ch);
					                    count++;
					                    switch(ch) {
					                    	case 'Y':
							                case 'y':
											case 'D':
											case 'd': // Nawaz Sharif Q3
							                	printf("\n\tQuestion no %d",count);
							                    printf("\nDoes your character have famous a Daughter?\n");
							                    printf("\t Option: ");
							                    scanf(" %c", &ch);
							                    count++;
							                    switch(ch) {
							                    	case 'Y':
									                case 'y':
													case 'D':
													case 'd': // Nawaz Sharif Q4
									                	printf("\n\tQuestion no %d",count);
									                    printf("\nDoes your character's Daughter a politician?\n");
									                    printf("\t Option: ");
									                    scanf(" %c", &ch);
									                    count++;
									                    switch(ch) {
									                    	case 'Y':
											                case 'y': // Nawaz Sharif Q5
											                case 'D':
															case 'd':
											                	printf("\n\tQuestion no %d",count);
											                    printf("\nDoes your character introduced Projects?\n");
											                    printf("\t Option: ");
											                    scanf(" %c", &ch);
											                    count++;
											                    switch(ch) {
											                    	case 'Y':
													                case 'y': // Nawaz Sharif Q6
													                case 'D':
																	case 'd':
													                	printf("\n\tQuestion no %d",count);
													                    printf("\nDid your character got hit with a shoe?\n");
													                    printf("\t Option: ");
													                    scanf(" %c", &ch);
													                    count++;
													                     switch(ch) {
													                    	case 'Y':
															                case 'y':
																			case 'D':
																			case 'd': // Nawaz Sharif Q7
															                	printf("\n\tQuestion no %d",count);
															                    printf("\nDid your character become PM more than 1 times?\n");
															                    printf("\t Option: ");
															                    scanf(" %c", &ch);
															                    count++;
															                    switch(ch) {
															                    	case 'Y':
																	                case 'y':
																					case 'D':
																					case 'd': // Nawaz Sharif Q8
																	                	printf("\n\tQuestion no %d",count);
																	                    printf("\nIs your character half bald?\n");
																	                    printf("\t Option: ");
																	                    scanf(" %c", &ch);
																	                    count++;
																	                    switch(ch) {
																	                    	case 'Y':
																			                case 'y':
																							case 'D':
																							case 'd': // Nawaz Sharif Q9
																			                	printf("\n\tQuestion no %d",count);
																			                    printf("\nDoes he have a palace??\n");
																			                    printf("\t Option: ");
																			                    scanf(" %c", &ch);
																			                    count++;
																			                    switch(ch) {
																			                    	case 'Y':
																					                case 'y': // Nawaz Sharif Q10
																					                case 'D':
																									case 'd':
																					                	printf("\n\tQuestion no %d",count);
																					                    printf("\nDoes your character look like someone?\n");
																					                    printf("\t Option: ");
																					                    scanf(" %c", &ch);
																					                    count++;
																					                    switch(ch) {
																					                    	case 'Y':
																							                case 'y': // Nawaz Sharif Q11
																							                case 'D':
																											case 'd':
																							                	printf("\n\tQuestion no %d",count);
																							                    printf("\nYour character got jailed?\n");
																							                    printf("\t Option: ");
																							                    scanf(" %c", &ch);
																							                    count++;
																							                    switch(ch) {
																							                    	case 'Y':
																									                case 'y':
																													case 'D':
																													case 'd': // Nawaz Sharif Q12
																									                	printf("\n\tQuestion no %d",count);
																									                    printf("\nDoes your character went for the medical abroad?\n");
																									                    printf("\t Option: ");
																									                    scanf(" %c", &ch);
																									                    count++;
																									                    switch(ch) {
																									                    	case 'Y':
																											                case 'y':
																															case 'D':
																															case 'd': // Nawaz Sharif Q13
																											                	printf("\n\tQuestion no %d",count);
																											                    printf("\nDid your character ran from the country?\n");
																											                    printf("\t Option: ");
																											                    scanf(" %c", &ch);
																											                    count++;
																											                    	switch(ch) {
																												                    	case 'Y':
																														                case 'y':
																																		case 'D':
																																		case 'd': // Nawaz Sharif Q14
																														                	printf("\n\tQuestion no %d",count);
																														                    printf("\nIs your character's wife alive?\n");
																														                    printf("\t Option: ");
																														                    scanf(" %c", &ch);
																														                    count++;
																																	        switch(ch) {
																																                case 'Y':
																																		        case 'y': // Nawaz Sharif Q15
																																                case 'D':
																																                case 'd':
																																				case 'N':
																																				case 'n':
																																		        	printf("\n\tQuestion no %d",count);
																																		            printf("\nIs your character from GO NAWAZ GO era?\n");
																																		            printf("\t Option: ");
																																		            scanf(" %c", &ch);
																																		            count++;
																																			        switch(ch) {
																																			            case 'Y':
																																					    case 'y':
																																					    case 'D':
																																						case 'd':
																																		                	printf("\nYour character is the one and only nawaz shariff!\n");
																																		                	printf("\n\tna sadiq hu na Ameen hu \n\tme krapshan ki masheen hu\n");
																																							PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\nawaz.wav"),NULL,SND_ASYNC);
																																							system("pause");
																																							exit(0);
																						            														break;
																																							}
																																				default: // Nawaz Sharif Q15
																																					break;  	
																															                }		  	
																														                default: // Nawaz Sharif Q14
																														                	break;
																				            										}
																											                default: // Nawaz Sharif Q13
																											                	break;
																	            										} 
																									                default: // Nawaz Sharif Q12
																									                	break;
															            										}
																							                default: // Nawaz Sharif Q11
																							                	break;
													            										} 
																					                default: // Nawaz Sharif Q10
																					                	break;
											            										} 
																			                default: // Nawaz Sharif Q9
																			                	break;
											            								} 
																	                default: // Nawaz Sharif Q8
																	                	break;
											            						} 
															                default: // Nawaz Sharif Q7
															                	break;
											            				} 
													                default: // Nawaz Sharif Q6
													                	break;
									            				}
											                default: // Nawaz Sharif Q5
											                	break;
											            }
									                default: // Nawaz Sharif Q4
									                	break;
									            }
							                default:// Nawaz Sharif Q3
							                	shahbaz (ch , count);
							                	break;
							            }
					                default:// Nawaz Sharif Q2
					                	sheikh_rasheed(ch , count);
					                	break;
								}
									 // Nawaz Sharif Q1
								default: 
									Bilawal( ch ,count );
									break;
			            }
		                default:
		                	firdous(ch , count);
		                	break;
		            }
                    // Continue with more questions for the politician scenario
                    // ...
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
	exit(0);
}

int main() {
	border();
	Title ();
	Title2 ();
	Title3 ();
	border();
	Disclaimer;
	Rules ();
	PlaySound(TEXT("C:\\c++\\Projectc\\ProjectRepository\\Guess-The-Personality\\akinator_theme (1).wav"),NULL,SND_ASYNC);
    Start_the_Game();
    return 0;
}