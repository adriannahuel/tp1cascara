#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"




int main()
{
    char seguir='s';
    int opcion=0, numero3, flag1=0, flag2=0;
    long long int factorial=0;
    float numero1=0, numero2=0, i, suma= 0, resta=0, division=0, multiplicacion=0;

    do
    {
        if(flag1==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando A= %f\n", numero1);
        };
        if(flag2==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando B= %f\n", numero2);
        };

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            numero1= pedirNumero("Ingrese primer numero: ");
            flag1++;

            break;
        case 2:
            numero2= pedirNumero("Ingrese segundo numero: ");
            flag2++;

            break;
        case 3:
            if(flag1==0||flag2==0)
            {
                printf("Error, debe ingresar 1er y 2do termino para realizar la suma\n");
            }
            else
            {
                suma= sumarN(numero1, numero2);
                printf("Suma (A+B)= %f\n",suma);
            };

            break;
        case 4:
            if(flag1==0||flag2==0)
            {
                printf("Error, debe ingresar 1er y 2do termino para realizar la resta\n");
            }
            else
            {
                resta= restarN(numero1, numero2);
                printf("Resta (A-B)= %f\n",resta);
            }

            break;
        case 5:
            if(flag1==0||flag2==0)
            {
                printf("Error, debe ingresar 1er y 2do termino para realizar la division\n");
            }
            else
            {
                if(numero2==0)
                {
                    printf("Error, no se puede dividir por 0");
                }
                else
                {
                    division = dividirN(numero1, numero2);
                    printf("Division (A/B)= %f\n",division);
                };
            };

            break;
        case 6:
            if(flag1==0||flag2==0)
            {
                printf("Error, debe ingresar 1er y 2do termino para realizar la multiplicacion\n");
            }
            else
            {
                multiplicacion = multiplicarN(numero1, numero2);
                printf("Multiplicacion (A*B)= %f\n",multiplicacion);
            }

            break;
        case 7:

            numero3= numero1;
            if(flag1==0||(numero1- numero3)!=0)
            {
                printf("Error, debe ingresar un numero entero para calcular factorial\n");
            }
            else
            {
                factorial= factorialN(numero1);
                printf("Factorial (A!)= %lli\n", factorial);
            };


            break;
        case 8:
            if(flag1==0||flag2==0)
            {
                printf("Error, debe ingresar 1er y 2do termino para realizar las operaciones\n");
            }
            else
            {
                suma= sumarN(numero1, numero2);
                printf("Suma (A+B)= %f\n",suma);
                resta= restarN(numero1, numero2);
                printf("Resta (A-B)= %f\n",resta);
                if(numero2==0)
                {
                    printf("Error, no se puede dividir por 0\n");
                }
                else
                {
                    division = dividirN(numero1, numero2);
                    printf("Division (A/B)= %f\n",division);
                }
                multiplicacion = multiplicarN(numero1, numero2);
                printf("Multiplicacion (A*B)= %f\n",multiplicacion);
                numero3= numero1;
                if(flag1==0||(numero1- numero3)!=0)
                {
                    printf("Error, debe ser un numero entero para calcular factorial\n");
                }
                else
                {
                    factorial= factorialN(numero1);
                    printf("Factorial (A!)= %lli\n", factorial);
                };
            };

            break;
        case 9:
            seguir = 'n';

            break;
        };

        system("pause");
        system("cls");

    }
    while(seguir=='s');

    return 0;
}


