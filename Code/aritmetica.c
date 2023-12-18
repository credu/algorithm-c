#include <stdio.h>

/*
AUTOR: JESUS MENDOZA
CURSO: CDDEIA-ELMA-1-1
*/
int main()
{
    printf("JESUS MENDOZA\n");
    printf("CDDEIA-ELMA-1-1\n");

    int n1 = 0, n2 = 0;
    int suma = 0, resta = 0, multiplicacion = 0;
    float division = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    printf("Ingrese otro numero: ");
    scanf("%d", &n2);
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = float(n1) / float(n2);

    printf("suma %d\n", suma);
    printf("resta %d\n", resta);
    printf("multiplicacion %d\n", multiplicacion);
    printf("division %f", division);
    return 0;
}