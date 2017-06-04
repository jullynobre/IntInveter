#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    numero = inverterNumero(numero);

    printf("\n%d", numero);
    return 0;
}
int inverterNumero(int numero)
{
    int numeroInvert = 0;

    while(numero > 0){
        numeroInvert = numeroInvert * 10;
        numeroInvert += numero%10;
        numero = (numero - (numero % 10)) / 10;
    }

    return numeroInvert;
}
