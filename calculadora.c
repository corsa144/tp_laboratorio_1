    #include<stdio.h>
    #include<stdlib.h>

/**
*\brief Suma dos numeros ingresados
*\param Recibe dos variables del tipo flotantes
*\return Retorna una variable del tipo flotante
*
*/

    float suma(float op1,float op2)
    {
        float sumar;
        sumar=op1+op2;

        return sumar;
    }
/**
*\brief Resta dos numeros ingresados
*\param Recibe dos variables del tipo flotantes
*\return Retorna una variable del tipo flotante
*
*/

    float resta(float op1,float op2)
    {
        float restar;
        restar=op1-op2;

        return restar;
    }
/**
*\brief Multiplica dos numeros ingresados
*\param Recibe dos variables del tipo flotantes
*\return Retorna una variable del tipo flotante
*
*/

    float multiplicacion(float op1,float op2)
    {
        float multiplicar;
        multiplicar=op1*op2;


        return multiplicar;
    }
/**
*\brief Divide dos numeros ingresados
*\param Recibe dos variables del tipo flotantes
*\return Retorna una variable del tipo flotante
*
*/

    float division(float op1,float op2)
    {
        float dividir;

        dividir=op1/op2;

        return dividir;
    }
/**
*\brief Calcula el factorial de un número
*\param Recibe una variable entera como parámetro
*\return Retorna una variable entera
*
*/

    long int factorial(long int op1)
    {

        long int resp=op1,i;
        for(i=1;i<op1;i++){
            resp=resp*i;
        }
        return resp;
    }

/**
*\brief muestra un menu de opciones
*\param operando A
*\param operando B
*\return retorna la opcion elegida
*
*/

    int menu( float numeroUno, float numeroDos)
    {
        int opcion;
        system("cls");
        printf("Menu:\n1-Ingrese primer numero:%g",numeroUno);

        printf("\n2-Ingrese segundo numero:%g",numeroDos);

        printf("\n3-Hacer las operaciones:");
        printf("\n4-Mostrar resultados:");
        printf("\n5-Salir:\n");

        scanf("%d",&opcion);
        return opcion;
    }
