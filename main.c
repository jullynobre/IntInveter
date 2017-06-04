#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    int i;
    for(i = 0; i < 4; i++)
    {
        printf("%d", numero%10); ;
        numero = (numero - (numero%10))/10;
    }

    return 0;
}
