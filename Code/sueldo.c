#include <stdio.h>

/*
AUTOR: JESUS MENDOZA
CURSO: CDDEIA-ELMA-1-1
*/
int main()
{
    printf("JESUS MENDOZA\n");
    printf("CDDEIA-ELMA-1-1\n");

    int horasTrabajadas = 0, tarifa = 0, sueldo = 0;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horasTrabajadas);

    printf("Ingrese la tarifa por hora: ");
    scanf("%d", &tarifa);

    sueldo = horasTrabajadas * tarifa;

    printf("El sueldo es: %d", sueldo);
    
    return 0;
}