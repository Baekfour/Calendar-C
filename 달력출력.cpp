#include <stdio.h>

int main() {
    while (true) {
        int inputYear = 0;
        int inputMonth = 0;
        printf("�⵵ �Է�: ");
        scanf("%d", & inputYear);
        printf("\n�� �Է�: ");
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
       
	    //�ų� 1�� 1���� ������������ Ȯ�� 
        for (int index1 = 1900; index1 < inputYear; index1++) {
            if ((index1 % 4 == 0 && index1 % 100 != 0) || index1 % 400 == 0) {
                day += 2;
            } else {
                day += 1;
            }
        }
        int Yearfirstday = day % 7;      
        if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0) {
            int monthfirst2 = (Yearfirstday + 31) % 7; //2��
            int monthfirst3 = (monthfirst2 + 29) % 7; // 3�� 
            int monthfirst4 = (monthfirst3 + 31) % 7; // 4��
            int monthfirst5 = (monthfirst4 + 30) % 7; // 5��
            int monthfirst6 = (monthfirst5 + 31) % 7; // 6��
            int monthfirst7 = (monthfirst6 + 30) % 7; // 7��
            int monthfirst8 = (monthfirst7 + 31) % 7; // 8��
            int monthfirst9 = (monthfirst8 + 31) % 7; // 9��
            int monthfirst10 = (monthfirst9 + 30) % 7; // 10��
            int monthfirst11 = (monthfirst10 + 31) % 7; // 11��
            int monthfirst12 = (monthfirst11 + 30) % 7; // 12��
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
            int monthfirst2 = (Yearfirstday + 31) % 7; //2��
            int monthfirst3 = (monthfirst2 + 28) % 7; // 3�� 
            int monthfirst4 = (monthfirst3 + 31) % 7; // 4��
            int monthfirst5 = (monthfirst4 + 30) % 7; // 5��
            int monthfirst6 = (monthfirst5 + 31) % 7; // 6��
            int monthfirst7 = (monthfirst6 + 30) % 7; // 7��
            int monthfirst8 = (monthfirst7 + 31) % 7; // 8��
            int monthfirst9 = (monthfirst8 + 31) % 7; // 9��
            int monthfirst10 = (monthfirst9 + 30) % 7; // 10��
            int monthfirst11 = (monthfirst10 + 31) % 7; // 11��
            int monthfirst12 = (monthfirst11 + 30) % 7; // 12��
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
                monthfirstday = monthfirst12; // �ش� �⿡�� �ش� ���� ���� Ȯ��  
            }
        }
        const int WIDTH = 7;
        const int MAX = 31;
        printf("---------------------------------------------------\n");
        printf("��\t��\tȭ\t��\t��\t��\t��\n");
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
