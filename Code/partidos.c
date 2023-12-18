#include <stdio.h>

/*
AUTOR: JESUS MENDOZA
CURSO: CDDEIA-ELMA-1-1
*/
int main()
{
    printf("JESUS MENDOZA");
    printf("CDDEIA-ELMA-1-1");

    int partidosGanados = 0;
    int partidosPerdidos = 0;
    int partidosEmpatados = 0;
    int puntaje = 0;
    printf("Ingrese los partidos ganados: ");
    scanf("%d", &partidosGanados);
    printf("Ingrese los partidos perdidos: ");
    scanf("%d", &partidosPerdidos);
    printf("Ingrese los partidos empatados: ");
    scanf("%d", &partidosEmpatados);
    puntaje = partidosGanados * 3 - partidosEmpatados;
    printf("Puntaje: %d", puntaje);
    return 0;
}