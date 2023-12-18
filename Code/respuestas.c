#include <stdio.h>

/*
AUTOR: JESUS MENDOZA
CURSO: CDDEIA-ELMA-1-1
*/
int main()
{
    printf("JESUS MENDOZA\n");
    printf("CDDEIA-ELMA-1-1\n");

    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;
    int respuestasSinResponder = 0;
    int puntajeFinal = 0;

    printf("Ingrese las respuestas correctas: ");
    scanf("%d", &respuestasCorrectas);
    printf("Ingrese las respuestas incorrectas: ");
    scanf("%d", &respuestasIncorrectas);
    printf("Ingrese las respuestas en blanco: ");
    scanf("%d", &respuestasSinResponder);
    puntajeFinal = respuestasCorrectas * 2 - respuestasIncorrectas;
    printf("Puntaje: %d", puntajeFinal);
    return 0;
}