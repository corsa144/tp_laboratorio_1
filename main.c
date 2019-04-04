    #include<stdio.h>
    #include<stdlib.h>
    #include"calculadora.h"

    int main(){
        int opcion;
        float sumar,restar,multiplicar,dividir,numeroUno=0,numeroDos=0;
        long int facUno;

        do{

                system("cls");
                printf("Menu:\n1-Ingrese primer numero:%g",numeroUno);

                printf("\n2-Ingrese segundo numero:%g",numeroDos);

                printf("\n3-Hacer las operaciones:");
                printf("\n4-Mostrar resultados:");
                printf("\n5-Salir:\n");

                scanf("%d",&opcion);

                switch(opcion){
                    case 1:
                        printf("Ingrese numero: " );
                        scanf("%g",&numeroUno);
                        break;
                    case 2:
                        printf("ingrese numero 2: ");
                        scanf("%g",&numeroDos);
                        break;
                    case 3:

                        sumar=suma(numeroUno,numeroDos);

                        restar=resta(numeroUno,numeroDos);

                        multiplicar=multiplicacion(numeroUno,numeroDos);

                        if(numeroDos==0){
                            printf("No se puede dividir por cero\n");
                        }else{
                            dividir=division(numeroUno,numeroDos);
                        }

                        if(numeroUno<0){
                            printf("No se puede hacer factorial de un numero negativo\n");
                        }else{
                            facUno=factorial(numeroUno);
                        }

                        system("pause");

                        break;
                    case 4:
                        printf("El resultado de A+B es: %g\n",sumar);
                        printf("El resultado de A-B es: %g\n",restar);
                        printf("El resultado de A*B es: %g\n",multiplicar);
                        if(numeroDos==0){
                            printf("El resultado de A/B es: Error\n");
                        }else{
                            printf("El resultado de A/B es: %g\n",dividir);
                        }
                        if(numeroUno<0){
                            printf("El resultado del factorial de A es: Error\n");
                        }else{
                            printf("El resultado del factorial A es: %ld\n",facUno);
                        }
                        system("pause");
                        break;
                    case 5:

                        break;

                }
        }while(opcion!=5);
        return 0;

    }
