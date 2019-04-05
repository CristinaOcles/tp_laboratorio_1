#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include <ctype.h>


int pedirNumero()
{
    int numero;
    printf("Ingrese un operando:\n");
    scanf("%d", &numero);

    return numero;

}

int sumar(int primerNum, int segundoNum)
{


    return primerNum  + segundoNum;


}

int restar(int primerNum, int segundoNum)
{


    return   primerNum - segundoNum;



}

float dividir(int primerNum, int segundoNum)
{
    float resultado;


    resultado = (float) primerNum / segundoNum;



    return resultado;
}


int multiplicar(int primerNum, int segundoNum)
{



    return   primerNum * segundoNum;


}


unsigned long long int factorial (unsigned long long int operando)
{

    if (operando == 1)
    {

        return 1;

    }
    else
    {

        return operando * factorial(operando - 1);

    }

}



void mensajeError()
{

    printf("Error para calcular el factorial \n");
    printf("el numero es menor a 1 o mayor a 12\n");

}






void calcularOperaciones(int primerNum, int segundoNum)
{
    int factorialA= -1;
    float divide = -1;
    char opcionLetra;
    int suma;
    int resta;


    suma = sumar(primerNum, segundoNum);
    resta = restar(primerNum, segundoNum);


    if (segundoNum>0)
    {
        divide = dividir(primerNum, segundoNum);
    }

    if (primerNum>0 && primerNum<12)
    {
        factorialA=factorial(primerNum);
    }


    printf("a- Calcular la suma (%d+%d)\n", primerNum, segundoNum);
    printf("b- Calcular la resta (%d-%d)\n", primerNum, segundoNum);
    printf("c- Calcular la division (%d/%d)\n", primerNum, segundoNum);
    printf("d- Calcular la multiplicacion (%d*%d)\n", primerNum, segundoNum);
    printf("e- Calcular el factorial (%d!)\n", primerNum);
    printf("f- Salir\n");
    printf("Elija una opcion del menu para operar (a/b/c/d/e/f)\n\n");

    fflush(stdin);
    gets(&opcionLetra);

    opcionLetra = toupper(opcionLetra);

    switch(opcionLetra)
    {


    case 'A':

        printf("Elegiste opcion 'a', la suma de los operandos es= %d\n", suma);
        break;
    case 'B':

        printf("Elegiste opcion 'b', la resta de los operandos es= %d\n",  resta);
        break;
    case 'C':

        if(divide == -1)
        {
            printf("no se puede dividir por 0 o menos\n");
        }
        else
        {
            printf("Elegiste la opcion 'c', la division es= %.2f\n", divide);
        }
        break;
    case 'D':

        printf("Elegiste opcion 'd', la multiplicacion de los operandos es= %i\n", multiplicar(primerNum,segundoNum));

        break;

    case 'E':
        if(factorialA == -1)
        {
            mensajeError();
        }
        else
        {
            printf("Elegiste la opcion 'e', factorial de A: %d\n", factorialA);
        }
        break;
    default:
        break;
    }

    system("pause");
    system("cls");


}






void informarResultados (int primerNum, int segundoNum)
{
    int factorialA= -1;
    int factorialB= -1;
    float divide = -1;

    if (segundoNum>0)
    {
        divide = dividir(primerNum, segundoNum);
    }

    if (primerNum>0 && primerNum<12)
    {
        factorialA=factorial(primerNum);
    }

    if(segundoNum>0 && segundoNum<12)
    {
        factorialB=factorial(segundoNum);
    }

    printf("suma: %d\n", sumar(primerNum, segundoNum));
    printf("resta: %d\n", restar(primerNum, segundoNum));
    printf("multiplica: %d\n", multiplicar(primerNum, segundoNum));

    if(divide == -1)
    {
        printf("no se puede dividir por 0 o menos\n");
    }
    else
    {
        printf("divide: %.2f\n", divide);
    }

    if(factorialA == -1)
    {
        mensajeError();
    }
    else
    {
        printf("factorial de A: %d\n", factorialA);
    }

    if(factorialB == -1)
    {
        mensajeError();
    }
    else
    {
        printf("factorial de B: %d\n", factorialB);
    }

    system("pause");
    system("cls");
}
