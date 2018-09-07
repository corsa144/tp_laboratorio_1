    #include<stdio.h>
    #include<stdlib.h>
    #include"calculadora.h"

    int main(){
        int opcion;
        int sumar,restar,multiplicar,dividir,numeroUno=0,numeroDos=0;
        int facUno,facDos;

        do{

                system("cls");
                printf("Menu:\n1-Ingrese primer numero:%d",numeroUno);

                printf("\n2-Ingrese segundo numero:%d",numeroDos);

                printf("\n3-Hacer las operaciones:");
                printf("\n4-Mostrar resultados:");
                printf("\n5-Salir:\n");

                scanf("%d",&opcion);

                switch(opcion){
                    case 1:
                        printf("Ingrese numero: " );
                        scanf("%d",&numeroUno);
                        break;
                    case 2:
                        printf("ingrese numero 2: ");
                        scanf("%d",&numeroDos);
                        break;
                    case 3:

                        sumar=suma(numeroUno,numeroDos);

                        restar=resta(numeroUno,numeroDos);

                        multiplicar=multiplicacion(numeroUno,numeroDos);

                        dividir=division(numeroUno,numeroDos);

                        facUno=factorial(numeroUno);
                        facDos=factorialDos(numeroDos);
                        system("pause");

                        break;
                    case 4:
                        printf("El resultado de A+B es: %d\n",sumar);
                        printf("El resultado de A-B es: %d\n",restar);
                        printf("El resultado de A*B es: %d\n",multiplicar);
                        printf("El resultado de A/B es: %d\n",dividir);
                        printf("El resultado del factorial A es: %d",facUno);
                        printf("El resultado del factorial B es: %d",facDos);
                        system("pause");
                        break;
                    case 5:

                        break;

                }
        }while(opcion!=5);
        return 0;

    }


