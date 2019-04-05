#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int aPrimerOperando;
    int bSegundoOperando;
    int flagA=0;
    int flagB=0;


    while(seguir=='s')
    {

        if (flagA==0)
        {
            printf("1- Ingresar 1er operando (A=X)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A= %d)\n", aPrimerOperando);

        }

        if(flagB==0)
        {
            printf("2- Ingresar 2do operando (B=Y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%d)\n", bSegundoOperando);
        }

        printf("3- Calcular todas las operaciones\n");
        printf("4- Informar resultados\n");
        printf("5- Salir\n");
        printf("Elija una opcion del menu para operar\n\n");


        scanf("%d",&opcion);

        printf("\n");

        switch(opcion)
        {

        case 1:
            aPrimerOperando = pedirNumero();
            flagA=1;
            break;
        case 2:
            bSegundoOperando = pedirNumero();
            flagB=1;
            break;
        case 3:
            system("pause");
            system("cls");
            calcularOperaciones(aPrimerOperando, bSegundoOperando);
            break;
        case 4:
            system("pause");
            system("cls");
            informarResultados(aPrimerOperando,bSegundoOperando);
            break;
        case 5:
            seguir = 'n';
            break;
        default:
            break;
        }
        printf("\n\n");
    }
    return 0;
}
