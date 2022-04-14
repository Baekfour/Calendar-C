#include <stdio.h>

int main() {
    while (true) {
        int inputYear = 0;
        int inputMonth = 0;
        printf("년도 입력: ");
        scanf("%d", & inputYear);
        printf("\n월 입력: ");
        scanf("%d", & inputMonth);
        int day = 1;
        int monthfirstday = 0;
        int monthfirst2 = 0;
        int monthfirst3 = 0;
        int monthfirst4 = 0;
        int monthfirst5 = 0;
        int monthfirst6 = 0;
        int monthfirst7 = 0;
        int monthfirst8 = 0;
        int monthfirst9 = 0;
        int monthfirst10 = 0;
        int monthfirst11 = 0;
        int monthfirst12 = 0;
       
	    //매년 1월 1일이 무슨요일인지 확인 
        for (int index1 = 1900; index1 < inputYear; index1++) {
            if ((index1 % 4 == 0 && index1 % 100 != 0) || index1 % 400 == 0) {
                day += 2;
            } else {
                day += 1;
            }
        }
        int Yearfirstday = day % 7;      
        if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0) {
            int monthfirst2 = (Yearfirstday + 31) % 7; //2월
            int monthfirst3 = (monthfirst2 + 29) % 7; // 3월 
            int monthfirst4 = (monthfirst3 + 31) % 7; // 4월
            int monthfirst5 = (monthfirst4 + 30) % 7; // 5월
            int monthfirst6 = (monthfirst5 + 31) % 7; // 6월
            int monthfirst7 = (monthfirst6 + 30) % 7; // 7월
            int monthfirst8 = (monthfirst7 + 31) % 7; // 8월
            int monthfirst9 = (monthfirst8 + 31) % 7; // 9월
            int monthfirst10 = (monthfirst9 + 30) % 7; // 10월
            int monthfirst11 = (monthfirst10 + 31) % 7; // 11월
            int monthfirst12 = (monthfirst11 + 30) % 7; // 12월
            if (inputMonth == 1) {
                monthfirstday = Yearfirstday;
            } else if (inputMonth == 2) {
                monthfirstday = monthfirst2;
            } else if (inputMonth == 3) {
                monthfirstday = monthfirst3;
            } else if (inputMonth == 4) {
                monthfirstday = monthfirst4;
            } else if (inputMonth == 5) {
                monthfirstday = monthfirst5;
            } else if (inputMonth == 6) {
                monthfirstday = monthfirst6;
            } else if (inputMonth == 7) {
                monthfirstday = monthfirst7;
            } else if (inputMonth == 8) {
                monthfirstday = monthfirst8;
            } else if (inputMonth == 9) {
                monthfirstday = monthfirst9;
            } else if (inputMonth == 10) {
                monthfirstday = monthfirst10;
            } else if (inputMonth == 11) {
                monthfirstday = monthfirst11;
            } else if (inputMonth == 12) {
                monthfirstday = monthfirst12;
            }
        } else {
            int monthfirst2 = (Yearfirstday + 31) % 7; //2월
            int monthfirst3 = (monthfirst2 + 28) % 7; // 3월 
            int monthfirst4 = (monthfirst3 + 31) % 7; // 4월
            int monthfirst5 = (monthfirst4 + 30) % 7; // 5월
            int monthfirst6 = (monthfirst5 + 31) % 7; // 6월
            int monthfirst7 = (monthfirst6 + 30) % 7; // 7월
            int monthfirst8 = (monthfirst7 + 31) % 7; // 8월
            int monthfirst9 = (monthfirst8 + 31) % 7; // 9월
            int monthfirst10 = (monthfirst9 + 30) % 7; // 10월
            int monthfirst11 = (monthfirst10 + 31) % 7; // 11월
            int monthfirst12 = (monthfirst11 + 30) % 7; // 12월
            if (inputMonth == 1) {
                monthfirstday = Yearfirstday;
            } else if (inputMonth == 2) {
                monthfirstday = monthfirst2;
            } else if (inputMonth == 3) {
                monthfirstday = monthfirst3;
            } else if (inputMonth == 4) {
                monthfirstday = monthfirst4;
            } else if (inputMonth == 5) {
                monthfirstday = monthfirst5;
            } else if (inputMonth == 6) {
                monthfirstday = monthfirst6;
            } else if (inputMonth == 7) {
                monthfirstday = monthfirst7;
            } else if (inputMonth == 8) {
                monthfirstday = monthfirst8;
            } else if (inputMonth == 9) {
                monthfirstday = monthfirst9;
            } else if (inputMonth == 10) {
                monthfirstday = monthfirst10;
            } else if (inputMonth == 11) {
                monthfirstday = monthfirst11;
            } else if (inputMonth == 12) {
                monthfirstday = monthfirst12; // 해당 년에서 해당 월의 요일 확인  
            }
        }
        const int WIDTH = 7;
        const int MAX = 31;
        printf("---------------------------------------------------\n");
        printf("일\t월\t화\t수\t목\t금\t토\n");
        printf("---------------------------------------------------\n");
            if (monthfirstday == 0) {
            	
                for (int indexA = 1; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                        if ((indexA + indexB) > MAX) {
                        	break;
                        } 
                       if(indexA + indexB > 0){
					    printf("%d\t", (indexA + indexB));
					}
                    }
                    printf("\n");
                }
            } else if (monthfirstday == 1) {
            	printf("\t%d\t%d\t%d\t%d\t%d\t%d\n", 1, 2, 3, 4, 5,6);
                for (int indexA = 7; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                    	if ((indexA + indexB) > MAX) {
                    		break;
                        } 
                        if(indexA + indexB> 0){
					    printf("%d\t", (indexA + indexB));
					}
                    }
                    printf("\n");
                }
            } else if (monthfirstday == 2) {
            	printf("\t\t%d\t%d\t%d\t%d\t%d\n", 1, 2, 3,4,5);
                for (int indexA = 6; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                        if ((indexA + indexB) > MAX) {
                        	break;
                        } 
                        if(indexA + indexB > 0){
					    printf("%d\t", (indexA + indexB));
					}
                    }
                    printf("\n");
                }
            } else if (monthfirstday == 3) {
            	printf("\t\t\t%d\t%d\t%d\t%d\n", 1, 2, 3,4);
                for (int indexA = 5; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                        if ((indexA + indexB) > MAX) {
                        	break;
                        } 
                       if(indexA + indexB > 0){
					    printf("%d\t", (indexA + indexB));
					}
                    }
                    printf("\n");
                }
            } else if (monthfirstday == 4) {
            	printf("\t\t\t\t%d\t%d\t%d\n", 1, 2,3);
                for (int indexA = 4; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                        if ((indexA + indexB) > MAX) {
                        	break;
                        } 
                       if(indexA + indexB > 0){
					    printf("%d\t", (indexA + indexB));
					}
                    }
                    printf("\n");
                }
            } else if (monthfirstday == 5) {
            	printf("\t\t\t\t\t%d\t%d\n", 1,2);
                for (int indexA = 3; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                        if ((indexA + indexB) > MAX) {
                        	break;
                        } 
                        if(indexA + indexB > 0){
					    printf("%d\t", (indexA + indexB));
					}
                    }
                    printf("\n");
                }
            } else if (monthfirstday == 6) {
            	printf("\t\t\t\t\t\t%d\n", 1);
                for (int indexA = 2; indexA < 31; indexA += WIDTH) {
                    for (int indexB = 0; indexB < WIDTH; indexB++) {
                        if ((indexA + indexB) > MAX) {
                        	break;
                        } 
                        if(indexA + indexB < 1){
					    printf("\t");
					} 
                        if(indexA + indexB > 0){
					    printf("%d\t", (indexA + indexB));
					} 
                    }
                    printf("\n");
                }              
            }
         printf("\n\n");
    } 
}
