    #include<stdio.h>
    #include<stdlib.h>

    int menu();
    float pedir_numero();

    int main(){
        int opcion;
        float op1,op2;
        int fact=1;


        do{

                system("cls");
                opcion=menu();

                switch(opcion){
                    case 1:
                        op1= pedir_numero();
                        op2= pedir_numero();

                        printf("Resultado: %.2f\n",op1+op2);
                        system("pause");
                        break;
                    case 2:
                        op1= pedir_numero();
                        op2= pedir_numero();

                        printf("Resultado: %.2f\n",op1-op2);
                        system("pause");

                        break;
                    case 3:
                        op1= pedir_numero();
                        op2= pedir_numero();

                        printf("Resultado: %.2f\n",op1*op2);
                        system("pause");
                        break;
                    case 4:
                        op1= pedir_numero();
                        op2= pedir_numero();

                        if (op2==0)
                        {
                            printf("Error");
                        }
                        else
                        {
                            printf("Resultado: %.2f\n",op1/op2);
                        }
                        system("pause");
                        break;
                    case 5:
                        fact=1;
                        op1=(int) pedir_numero();

                        if (op1<0)
                        {
                            fact=0;
                        }
                        else if (op1==0)
                        {
                            fact=1;
                        }
                        else
                        {
                            for (int contador=1;contador<=op1;contador++)
                            {
                                fact=fact*contador;
                            }
                        }
                        printf("Resultado: %d\n",fact);
                        system("pause");
                        break;

                    case 6:
                        break;


                }
        }while(opcion!=6);
        return 0;







    }
    int menu()
    {//3 menu
        int opcion;
        printf("Menu:\n1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n5-Factorial\n6-Salir\nSeleccione una operacion:\n");
        scanf("%d",&opcion);

        return opcion;

    }
    float pedir_numero()
    {
        float numero;
        printf("Ingrese numero: " );

        scanf("%f",&numero);
        return numero;
    }
