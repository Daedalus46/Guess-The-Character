#include <stdio.h>

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
            printf("\nOption: ");
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
																																		                	printf("\n\tna sadiq hu na Ameen hu \n\tme krapshan ki masheen hu");
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
							                	break;
							            }
					                default:// Nawaz Sharif Q2
					                	break;
								}
									 // Nawaz Sharif Q1
								default: 
									printf("\n\tQuestion no %d\n",count);  // bilawal bhutto Q1
									printf("Is your character alive?\n");
									printf("\t Option: ");   
									scanf(" %c", &ch);
									count++;
									switch(ch) {
										case 'Y':// bilawal bhutto Q2
									  	case 'y':
										case 'D':
										case 'd':
											printf("\n\tQuestion no %d\n",count);
											printf("Is his father or mother famous politician?\n");
											printf("\t Option: ");    
											scanf(" %c", &ch);
											count++;
										switch(ch) {
											case 'Y':// bilawal bhutto Q3
										  	case 'y':
											case 'D':
											case 'd':
												printf("\n\tQuestion no %d\n",count);
												printf("Is your character clean-shaved?\n");
												printf("\t Option: ");    
												scanf(" %c", &ch);
												count++;
												switch(ch) {
													case 'Y':// bilawal bhutto Q4
												  	case 'y':
													case 'D':
													case 'd':
														printf("\n\tQuestion no %d\n",count);
														printf("Is your character un-married?\n");
														printf("\t Option: ");    
														scanf(" %c", &ch);
														count++;
													switch(ch) {
														case 'Y':// bilawal bhutto Q5
														case 'y':
														case 'D':
														case 'd':
															printf("\n\tQuestion no %d\n",count);
															printf("Your character studied abroad?\n");
															printf("\t Option: ");    
															scanf(" %c", &ch);
															count++;
															switch(ch) {
																case 'Y':// bilawal bhutto Q6
																case 'y':
																case 'D':
																case 'd':
																	printf("\n\tQuestion no %d\n",count);
																	printf("Did your character made visa free for all Irani people?\n");
																	printf("\t Option: ");    
																	scanf(" %c", &ch);
																	count++;
																	switch(ch) {
																		case 'Y':// bilawal bhutto Q7
																		case 'y':
																		case 'D':
																		case 'd':
																			printf("\n\tQuestion no %d\n",count);
																			printf("Does your politician holds higher position in party?\n");
																			printf("\t Option: ");    
																			scanf(" %c", &ch);
																			count++;
																			switch(ch) {
																				case 'Y':// bilawal bhutto Q8
																				case 'y':
																				case 'D':
																				case 'd':
																					printf("\n\tQuestion no %d\n",count);
																					printf("Was your politician a former prime minister/chief minister?\n");
																					printf("\t Option: ");    
																					scanf(" %c", &ch);
																					count++;
																					switch(ch) {
																						case 'Y':// bilawal bhutto Q9
																						case 'y':
																						case 'D':
																						case 'd':
																							printf("\n\tQuestion no %d\n",count);
																							printf("Does his speech not make any sense right?\n");
																							printf("\t Option: ");    
																							scanf(" %c", &ch);
																							count++;
																							switch(ch) {
																								case 'Y':// bilawal bhutto Q10
																								case 'y':
																								case 'D':
																								case 'd':
																									printf("\n\tQuestion no %d\n",count);
																									printf("Is he fluent in english??\n");
																									printf("\t Option: ");    
																									scanf(" %c", &ch);
																									count++;
																									switch(ch) {
																										case 'Y':// bilawal bhutto Q11
																										case 'y':
																										case 'D':
																										case 'd':
																											printf("\n\tQuestion no %d\n",count);
																											printf("Does he have issue in gender pronounciation?\n");
																											printf("\t Option: ");    
																											scanf(" %c", &ch);
																											count++;
																											switch(ch) {
																												case 'Y':// bilawal bhutto Q12
																												case 'y':
																												case 'D':
																												case 'd':
																													printf("\n\tQuestion no %d\n",count);
																													printf("Is he favorite of any other politician?\n");
																													printf("\t Option: ");    
																													scanf(" %c", &ch);
																													count++;
																													switch(ch) {
																														case 'Y':// bilawal bhutto Q13
																														case 'y':
																														case 'D':
																														case 'd':
																															printf("\n\tQuestion no %d\n",count);
																															printf("Did he recently said a province KFC?\n");
																															printf("\t Option: ");    
																															scanf(" %c", &ch);
																															count++;
																															switch(ch) {
																																case 'Y':// bilawal bhutto Q14
																																case 'y':
																																case 'D':
																																case 'd':
																																	printf("\n\tQuestion no %d\n",count);
																																	printf("Kya aap k politician ka bolne ka andaaz thora kasual he?\t\tkiya apki kanpe tang rahi hai\n");
																																	printf("\t Option: ");    
																																	scanf(" %c", &ch);
																																	count++;
																																	switch(ch) {
																																		case 'Y':// bilawal bhutto Q15
																																		case 'y':
																																		case 'D':
																																		case 'd':
																																			printf("\n\tQuestion no %d\n",count);
																																			printf("Is your politician likely to become Prime minister in future?\n");
																																			printf("\t Option: ");    
																																			scanf(" %c", &ch);
																																			count++;
																																			switch(ch) {
																																				case 'Y':// bilawal bhutto Q16
																																				case 'y':
																																				case 'D':
																																				case 'd':
																																					printf("\n\tQuestion no %d\n",count);
																																					printf("You know him because of (Barish huti hai tw pani ata hai)?\n");
																																					printf("\t Option: ");    
																																					scanf(" %c", &ch);
																																					count++;
																																					switch(ch) {
																																						case 'Y':// bilawal bhutto end
																																						case 'y':
																																						case 'D':
																																						case 'd':
																																							printf("\nYour character is Bilawal Bhutto!\n");
																																							printf("\ntum to aik kanputli (statue) ho\ntumhari doren to PF hilaa raha hai");
																																					}
																																				default:
																																					break;
																																			}
																																		default:
																																			break;
																																	}
																																default:
																																	break;
																															}
																														default:
																															break;
																													}
																												default:
																													break;
																											}
																										default:
																											break;
																									}
																								default:
																									break;
																							}
																						default:
																							break;
																					}
																				default:
																					break;
																			}
																		default:
																			break;
																	}
																default:
																	break;
															}
														default:
															break;
													}
													default:
														break;
												}
											default:
												break;
										}
										default:
											break;
									}		
									break;
			            }
		                default:
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
}

int main() {
    Start_the_Game();
    return 0;
}