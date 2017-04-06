#include "funciones.h"


/** \brief recibe caracteres donde se pide un numero, lo muestra, lee la respuesa( que debe ser un numero).
 *
 * \param caracteres
 * \return un numero
 *
 */

float pedirNumero(char texto[])
{
    float numero;
    printf("%s", texto);
    scanf("%f", &numero);
    return numero;
}
