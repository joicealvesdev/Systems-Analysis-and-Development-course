
/* Laço for aninhado
A utilização do laço for é muito popular e ampla. E uma das formas mais comuns e importantes de utilizá-lo é por meio de laços aninhados. Para entendermos melhor, considere a seguinte situação em que queremos calcular e imprimir a tabuada de 1 até 5, uma por linha, da seguinte maneira: */


/*Calculo de tabuada de 1 a 5 */


#include <stdio.h>
int main(){
int multi, num;
for(num = 1; num <= 5; num++){
for(multi = 1; multi <= 10; multi++){
printf("%d ", num*multi);
}
printf("\n");
}
return 0;
}



/*Codigo de estrutural condicional composta*/



#include <stdlib.h>
int main() {
    int n;
    unsigned long long fatorial = 1; // Usamos "unsigned long long" para armazenar números grandes
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    // Verificação para números negativos
    if (n < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %llu\n", n, fatorial);
    }
    return 0;
}