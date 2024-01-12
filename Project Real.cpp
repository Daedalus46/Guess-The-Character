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
		                case 'y': // Nawaz Sharif
		                	printf("\n\tQuestion no %d",count);
		                    printf("\nIs your character a politician?\n");
		                    printf("\t Option: ");
		                    scanf(" %c", &ch);
		                    count++;
		                    switch(ch) {
								case 'Y':
								case 'y': // Nawaz Sharif
								printf("\n\tQuestion no %d",count);
								printf("\nIs your character over 50 years?\n");
								printf("\t Option: ");
								scanf(" %c", &ch);
								count++;
				            	switch(ch) {
			                    	case 'Y':
					                case 'y': // Nawaz Sharif
					                	printf("\n\tQuestion no %d",count);
					                    printf("\nDoes your character have famous a brother?\n");
					                    printf("\t Option: ");
					                    scanf(" %c", &ch);
					                    count++;
					                    switch(ch) {
					                    	case 'Y':
							                case 'y': // Nawaz Sharif
							                	printf("\n\tQuestion no %d",count);
							                    printf("\nDoes your character have famous a Daughter?\n");
							                    printf("\t Option: ");
							                    scanf(" %c", &ch);
							                    count++;
							                    switch(ch) {
							                    	case 'Y':
									                case 'y': // Nawaz Sharif
									                	printf("\n\tQuestion no %d",count);
									                    printf("\nDoes your character's Daughter a politician?\n");
									                    printf("\t Option: ");
									                    scanf(" %c", &ch);
									                    count++;
									                    switch(ch) {
									                    	case 'Y':
											                case 'y': // Nawaz Sharif
											                	printf("\n\tQuestion no %d",count);
											                    printf("\nDoes your character introduced Green Line Project?\n");
											                    printf("\t Option: ");
											                    scanf(" %c", &ch);
											                    count++;
											                    switch(ch) {
											                    	case 'Y':
													                case 'y': // Nawaz Sharif
													                	printf("\n\tQuestion no %d",count);
													                    printf("\nDid your character got hit with a shoe?\n");
													                    printf("\t Option: ");
													                    scanf(" %c", &ch);
													                    count++;
													                     switch(ch) {
													                    	case 'Y':
															                case 'y': // Nawaz Sharif
															                	printf("\n\tQuestion no %d",count);
															                    printf("\nDid your character become PM more than 1 times?\n");
															                    printf("\t Option: ");
															                    scanf(" %c", &ch);
															                    count++;
															                    switch(ch) {
															                    	case 'Y':
																	                case 'y': // Nawaz Sharif
																	                	printf("\n\tQuestion no %d",count);
																	                    printf("\nIs your character half bald?\n");
																	                    printf("\t Option: ");
																	                    scanf(" %c", &ch);
																	                    count++;
																	                    switch(ch) {
																	                    	case 'Y':
																			                case 'y': // Nawaz Sharif
																			                	printf("\n\tQuestion no %d",count);
																			                    printf("\nDoes he have a palace??\n");
																			                    printf("\t Option: ");
																			                    scanf(" %c", &ch);
																			                    count++;
																			                    switch(ch) {
																			                    	case 'Y':
																					                case 'y': // Nawaz Sharif
																					                	printf("\n\tQuestion no %d",count);
																					                    printf("\nDoes your character look like a bhalu?\n");
																					                    printf("\t Option: ");
																					                    scanf(" %c", &ch);
																					                    count++;
																					                    switch(ch) {
																					                    	case 'Y':
																							                case 'y': // Nawaz Sharif
																							                	printf("\n\tQuestion no %d",count);
																							                    printf("\nYour character got jailed?\n");
																							                    printf("\t Option: ");
																							                    scanf(" %c", &ch);
																							                    count++;
																							                    switch(ch) {
																							                    	case 'Y':
																									                case 'y': // Nawaz Sharif
																									                	printf("\n\tQuestion no %d",count);
																									                    printf("\nDoes your character went for the medical abroad?\n");
																									                    printf("\t Option: ");
																									                    scanf(" %c", &ch);
																									                    count++;
																									                    switch(ch) {
																									                    	case 'Y':
																											                case 'y': // Nawaz Sharif
																											                	printf("\n\tQuestion no %d",count);
																											                    printf("\nDid your character ran from the country?\n");
																											                    printf("\t Option: ");
																											                    scanf(" %c", &ch);
																											                    count++;
																											                    	switch(ch) {
																												                    	case 'Y':
																														                case 'y': // Nawaz Sharif
																														                	printf("\n\tQuestion no %d",count);
																														                    printf("\nIs your character's wife alive?\n");
																														                    printf("\t Option: ");
																														                    scanf(" %c", &ch);
																														                    count++;
																																	        switch(ch) {
																																                case 'Y':
																																		        case 'y': // Nawaz Sharif
																																		        	printf("\n\tQuestion no %d",count);
																																		            printf("\nIs your character from GO NAWAZ GO era?\n");
																																		            printf("\t Option: ");
																																		            scanf(" %c", &ch);
																																		            count++;
																																			        switch(ch) {
																																			            case 'Y':
																																					    case 'y': // Nawaz Sharif
																																		                	printf("\nYour character is the one and only nawaz shariff!\n");
																																		                	printf("\n\tna sadiq hu na Ameen hu \n\tme krapshan ki masheen hu");
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