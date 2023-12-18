#include <stdio.h>

int main()
{
    int x;
    char t;
    float k;

    printf("Ingrese un numero");
    scanf("%d", &x);
    printf("Ingrese una letra");
    scanf(" %c", &t);
    printf("Ingrese un decimal");
    scanf("%f", &k);

    printf("x=%d", x);
    printf("\nt=%c", t);
    printf("\nk=%.2f", k);
    return 0;
}