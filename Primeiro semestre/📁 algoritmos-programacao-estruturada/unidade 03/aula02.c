/*Matrizes*/

/*crie uma mariz de identidade de dimensões 5 x 5**/


// 1 0 0
// 0 1 0
#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz [5] [5];
    for (int  i=0; i<5; i++) {
       for(int j=0; j<5; j++) /*não pode usar i porque precisa do valor travado no i */ {
         if (i == j) {
            matriz [i] [j] = 1;
         } 

         else {
            matriz[i] [j] =0;
         }
       }
    }

    printf("Matriz Identidade 5x5:\n");
    for (int i=0; i< 5; i++) {
        for (int j = 0; j < 5; j++); {
        printf("%d " , matriz[i] [j]);
    } 
    printf("\n");
} }