/*Ponteiros*/


int main () {
    int *ptr;
    int valor = 10;
    
    ptr = &valor;
    printf("Endereco = %d", &valor);
    printf("Endereco = %d", ptr);
    printf("Valor = %d", * ptr);

    return 0;
}