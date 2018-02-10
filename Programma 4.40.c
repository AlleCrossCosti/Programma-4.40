#include <stdio.h>

int main() {
 
 int log[2][3];
 int i;
 
 printf("DIARIO METEOROLOGICO\n");
 printf("--------------------\n\n");
 
 for(i=0; i<=1; i++)
 {
 printf("LETTURA %d\n", i+1);
 printf("------------------------------------\n");
 printf("Inserisci la lettura TEMP (C): \t");
 scanf("%d", &log[i][0]);
 printf("Inserisci la lettura HR(\%%):\t");
 scanf("%d", &log[1][1]);
 printf("Inserisci la lettura PRES9hpa):\t");
 scanf("%d", &log[i][2]);
 printf("\n");
 }
 
 printf("\nVALORI RILEVATI\n");
 printf("----------------------------\n");
 printf("T(C)\t HR(\%%)\t PRES(hpa)\t\n");
 printf("------------------------\n");
 
 for(i=0; i<=1; i++)
 {
 printf("%d\t %d\t %d\t \n", log[i][0],log[i][1],log[i][2]);
 }
 return 0;
 }
