#include <stdio.h>
int operadores() {
    int x, y; 
    x = 10;
    y= x++;
    printf("y = x++ : valor de y=>%d\n", y);
    printf("y = x++ : valor de x=>%d\n", x);
}