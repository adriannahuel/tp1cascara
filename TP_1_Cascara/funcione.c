#include "funciones.h"


/** \brief suma 2 numeros
 *
 * \param primer numero
 * \param segundo numero
 * \return la suma de ambos numeros
 *
 */

float sumarN(float n1, float n2)
{
    float suma;
    suma = n1 + n2;
    return (suma);
}


/** \brief resta el primer numero menos el segundo
 *
 * \param primer numero
 * \param segundo numero
 * \return la resta de los 2 numeros
 *
 */

float restarN(float n1, float n2)
{
    float resta;
    resta = n1 - n2;
    return (resta);
}


/** \brief divide el primer numero por el segundo
 *
 * \param primer numero
 * \param segundo numero
 * \return el primer numero dividido por el segundo
 *
 */

float dividirN(float n1, float n2)
{
    float division;
    division = n1 / n2;
    return (division);
}


/** \brief multiplica 2 numeros
 *
 * \param primer numero
 * \param segundo numero
 * \return el primer numero multiplicado por el segundo
 *
 */

float multiplicarN(float n1, float n2)
{
    float multiplicacion;
    multiplicacion = n1 * n2;
    return (multiplicacion);
}


/** \brief multiplica un numero por todos los que anteceden desde el 1 hasta el llegar al mismo numero y suma los resultados
 *
 * \param un numero
 * \return el factorial del numero
 *
 */

long long int factorialN(int n1)
{
    int i;
    long long int factorial=1;
    for(i=1; i<=n1; i++)
    {
        factorial= factorial*i;
    }
    return(factorial);

}

