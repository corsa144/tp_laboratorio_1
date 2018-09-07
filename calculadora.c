/**
*\brief Solicita dos números
*\param suma los dos numeros
*\return devuelve un resultado
*
*/

    int suma(int op1,int op2)
    {
        int sumar;
        sumar=op1+op2;

        return sumar;
    }
/**
*\brief Solicita dos números
*\param resta los dos numeros
*\return devuelve un resultado
*
*/

    int resta(int op1,int op2)
    {
        int restar;
        restar=op1-op2;

        return restar;
    }
/**
*\brief solicita dos numeros
*\param multiplica esos numeros
*\return devuelve el resultado
*
*/

    int multiplicacion(int op1,int op2)
    {
        int multiplicar;
        multiplicar=op1*op2;


        return multiplicar;
    }
/**
*\brief solicita dos numeros
*\param divide esos numeros
*\return devuelve un resultado
*
*/

    int division(int op1,int op2)
    {
        int dividir=0;

        if (op2!=0)
        {
            dividir=op1/op2;

        }
        else if (op2==0)
        {
            scanf("Error %d",&dividir);

        }


        return dividir;
    }
/**
*\brief Solicita un numero
*\param Lo multiplica por el numero-1 hasta que llegue a 1
*\return Muestra el resultado
*
*/

    int factorial(int op1)
    {

        int facUno=1;

        if (op1<0)
        {
            facUno=0;
        }
        else if (op1==0)
        {
            facUno=1;
        }
        else
        {
            for (int contador=1;contador<=op1;contador++)
        {

            facUno=facUno*contador;
        }
        }

        return facUno;
    }
    int factorialDos(int op2)
    {

        int facDos=1;

        if (op2<0)
        {
            facDos=0;
        }
        else if (op2==0)
        {
            facDos=1;
        }
        else
        {
            for (int contador=1;contador<=op2;contador++)
        {
            facDos=facDos*contador;
        }
        }

        return facDos;
    }
