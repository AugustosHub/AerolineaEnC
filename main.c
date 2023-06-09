/*
Avi�n con diez asientos (array)
Digite 1 para primera clase: $10000 (1-5)
Digite 2 para economico: $5000 (6-10)
Cancelar una reserva si se lo pide
Obtener el total de lo recaudado
Si se llena el avi�n debe decir: "El siguiente vuelo parte en tres horas".
*/
#include <stdio.h>
#include <stdlib.h>
#include<wchar.h>
#include<locale.h>
#include<time.h>
int main()
{
    int asientos[10],op,i,aleatorio,asiento;
    float recaudacion;

    setlocale(LC_ALL, "");
    srand(time(NULL));

    /* v.Minimo+rand()%(v.Maximo-v.Minimo+1); */
    /* 1+rand()%10 aleatorio de 1 al 10 */

    op = 0;
    recaudacion = 0;

    aleatorio = 1000+rand()%(10000-1000+1);

    puts("----------------------------------");
    printf("Cargando datos...\n");
    puts("----------------------------------");
    for (i=0;i<10;i++){
        asientos[i]=0;
    }
    system("pause");

    do{
    system("cls");
    puts("********Aerolineas Tunisia********");
    puts("***************MEN�***************");
    printf("Vuelo N�%d: \n",aleatorio);
    puts("  1. Comprar pasaje primera clase");
    puts("  2. Comprar pasaje clase turista");
    puts("  3. Cancelar una reserva");
    puts("  4. Ver asientos disponibles");
    puts("  5. Ver recaudaci�n del vuelo");
    puts("  6. Salir");
    puts("-----------------------------------");
    printf("Opci�n: ");
    scanf("%d",&op);

    while (op<1 || op>6){
        puts("-----------------------------------");
        printf("Opci�n invalida, intente de nuevo...\n");
        puts("-----------------------------------");
        printf("Opci�n: ");
        scanf("%d",&op);

    }
        switch(op){
            case 1:
                system("cls");
                puts("-----------------------------------");
                puts("***************COMPRAR PASAJE***************");
                puts("-----------------------------------");
                printf("�Desea comprar pasaje para la primera clase?\n");
                printf("Valor: $10.000\n");
                printf("1. SI\n");
                printf("2. NO\n");
                puts("-----------------------------------");
                printf("Opci�n: ");
                scanf("%d",&op);

                while (op!=1 && op!=2){
                    puts("-----------------------------------");
                    printf("Opci�n invalida, intente de nuevo...\n");
                    puts("-----------------------------------");
                    printf("Opci�n: ");
                    scanf("%d",&op);
                }

                switch(op){
                    case 1:
                        for(i=0;i<5;i++){
                            if (asientos[i]==0){
                                asientos[i]=1;

                                recaudacion = (recaudacion + 10000);

                                puts("-----------------------------------");
                                printf("�Pasaje reservado con �xito!\n");
                                printf("Su asiento es el N�%d\n",i+1);
                                puts("-----------------------------------");

                                i = 11; /*Detiene el bucle cuando encuentra un asiento*/
                            }else if(asientos[4]==1){
                                system("cls");
                                printf("No hay m�s asientos en primera clase...\n");
                                printf("�Desea reservar uno de clase turista?\n");
                                printf("**El precio de la clase turista es de $5.000**\n");
                                printf("1. Si\n");
                                printf("2. No\n");
                                puts("-----------------------------------");
                                printf("Opci�n: ");
                                scanf("%d",&op);

                                while(op!=1 && op!=2){
                                    puts("-----------------------------------");
                                    printf("Opci�n invalida, intente de nuevo...\n");
                                    puts("-----------------------------------");
                                    printf("Opci�n: ");
                                    scanf("%d",&op);
                                }

                                switch(op){
                                    case 1:
                                        //////////////////////////////////////////////////////////////////
                                        for(i=5;i<10;i++){
                                            if (asientos[i]==0){
                                                asientos[i]=1;

                                                recaudacion = (recaudacion + 5000);

                                                puts("-----------------------------------");
                                                printf("�Pasaje reservado con �xito!\n");
                                                printf("Su asiento es el N�%d\n",i+1);
                                                puts("-----------------------------------");

                                                i = 11;
                                            }else if(asientos[9]==1){
                                                puts("-----------------------------------");
                                                printf("No hay m�s asientos en la clase turista...\n");
                                                printf("El pr�ximo vuelo n�%d",aleatorio+1);
                                                printf(" sale dentro de tres horas...\n");
                                                puts("-----------------------------------");

                                                i = 11;
                                                }
                                            }
                                        //////////////////////////////////////////////////////////////////
                                        break;
                                    case 2:
                                        puts("-----------------------------------");
                                        printf("El vuelo n�%d",aleatorio+1);
                                        printf(" sale dentro de tres horas...\n");
                                        puts("-----------------------------------");
                                        break;
                                }

                                i = 11;
                            }
                        }
                        break;
                    case 2:
                        puts("-----------------------------------");
                        printf("Volviendo al men�...\n");
                        puts("-----------------------------------");
                        break;
                }
                system("pause");
                break;

//////////////////////////////////////////////////////////////////////////////////
            case 2:
                system("cls");
                puts("-----------------------------------");
                puts("***************COMPRAR PASAJE***************");
                puts("-----------------------------------");
                printf("�Desea comprar pasaje para la clase turista?\n");
                printf("Valor: $5.000\n");
                printf("1. SI\n");
                printf("2. NO\n");
                puts("-----------------------------------");
                printf("Opci�n: ");
                scanf("%d",&op);

                while (op!=1 && op!=2){
                    puts("-----------------------------------");
                    printf("Opci�n invalida, intente de nuevo...\n");
                    puts("-----------------------------------");
                    printf("Opci�n: ");
                    scanf("%d",&op);
                }

                switch(op){
                    case 1:
                        for(i=5;i<10;i++){
                            if (asientos[i]==0){
                                asientos[i]=1;

                                recaudacion = (recaudacion + 5000);

                                puts("-----------------------------------");
                                printf("�Pasaje reservado con �xito!\n");
                                printf("Su asiento es el N�%d\n",i+1);
                                puts("-----------------------------------");

                                i = 11;
                            }else if(asientos[9]==1){
                                system("cls");
                                printf("No hay m�s asientos en la clase turista...\n");
                                printf("�Desea reservar uno de la primera clase?\n");
                                printf("**El precio de la primera clase es de $10.000**\n");
                                printf("1. Si\n");
                                printf("2. No\n");
                                printf("Opci�n: ");
                                scanf("%d",&op);

                                while(op!=1 && op!=2){
                                    puts("-----------------------------------");
                                    printf("Opci�n invalida, intente de nuevo...");
                                    puts("-----------------------------------");
                                    printf("Opci�n: ");
                                    scanf("%d",&op);
                                }

                                switch(op){
                                    case 1:
                                        ////////////////////////////////////////////////////////////////////
                                        for(i=0;i<5;i++){
                                            if (asientos[i]==0){
                                                asientos[i]=1;

                                                recaudacion = (recaudacion + 10000);

                                                puts("-----------------------------------");
                                                printf("�Pasaje reservado con �xito!\n");
                                                printf("Su asiento es el N�%d\n",i+1);
                                                puts("-----------------------------------");

                                                i = 11;
                                            }else if(asientos[4]==1){
                                                puts("-----------------------------------");
                                                printf("No hay m�s asientos en primera clase...\n");
                                                printf("El pr�ximo vuelo n�%d",aleatorio+1);
                                                printf(" sale dentro de tres horas...\n");
                                                puts("-----------------------------------");

                                                i = 11;
                                            }
                                        }
                                        ////////////////////////////////////////////////////////////////////
                                        break;
                                    case 2:
                                        puts("-----------------------------------");
                                        printf("El pr�ximo vuelo n�%d",aleatorio+1);
                                        printf(" sale dentro de tres horas...\n");
                                        puts("-----------------------------------");
                                        break;
                                }

                                i = 11;
                            }
                        }
                        break;
                    case 2:
                        puts("-----------------------------------");
                        printf("Volviendo al men�...\n");
                        puts("-----------------------------------");
                        break;
                }
                system("pause");
                break;

//////////////////////////////////////////////////////////////////////////////////
            case 3:
                system("cls");
                puts("-----------------------------------");
                puts("***********CANCELAR PASAJE***********");
                puts("-----------------------------------");
                printf("�Desea cancelar una reserva?\n");
                printf("1. SI\n");
                printf("2. NO\n");
                printf("Opci�n: ");
                scanf("%d",&op);

                while (op!=1 && op!=2){
                    puts("-----------------------------------");
                    printf("Opci�n invalida, intente de nuevo...\n");
                    puts("-----------------------------------");
                    printf("Opci�n: ");
                    scanf("%d",&op);
                }

                switch(op){
                    case 1:
                        system("cls");
                        printf("�De qu� clase es la reserva?\n\n");
                        printf("1. Primera Clase\n");
                        printf("2. Clase Turista\n");
                        printf("3. Volver al men�\n\n");
                        puts("-----------------------------------");
                        printf("Opci�n: ");
                        scanf("%d",&op);

                        while (op<1 || op>3){
                            puts("-----------------------------------");
                            printf("Opci�n invalida, intente de nuevo...\n");
                            printf("Opci�n: ");
                            scanf("%d",&op);
                        }

                        switch(op){
                            case 1:
                                puts("-----------------------------------");
                                printf("�Cual es el asiento a cancelar?\n");
                                printf("Asiento N�: ");
                                scanf("%d",&asiento);

                                while (asiento<1 || asiento>5){
                                    puts("-----------------------------------");
                                    printf("Ese asiento no pertenece a esta clase (Primera)\n");
                                    printf("Intente de nuevo...\n");
                                    puts("-----------------------------------");
                                    printf("Asiento N�: ");
                                    scanf("%d",&asiento);
                                }

                                system("cls");
                                puts("-----------------------------------");
                                printf("Espere un momento...\n");
                                puts("-----------------------------------");

                                for (i=0;i<5;i++){
                                    if ((i + 1 ) == asiento){
                                        if (asientos[i]==1){
                                        asientos[i]=0;

                                        recaudacion = (recaudacion - 10000);

                                        printf("�Reserva cancelada con �xito!\n");
                                        puts("-----------------------------------");
                                        printf("Voliviento al men�...\n");
                                        puts("-----------------------------------");
                                    }else if(asientos[i]==0){
                                        printf("No hay reservas para ese asiento (%d)\n",asiento);
                                        puts("-----------------------------------");
                                        printf("Volviendo al men�...\n");
                                        puts("-----------------------------------");
                                    }
                                  }
                                }
                                break;
                            case 2:
                                puts("-----------------------------------");
                                printf("�Cual es el asiento a cancelar?\n");
                                printf("Asiento N�: ");
                                scanf("%d",&asiento);

                                while (asiento<5 || asiento>10){
                                    puts("-----------------------------------");
                                    printf("Ese asiento no pertenece a esta clase (Turista)\n");
                                    printf("Intente de nuevo...\n");
                                    puts("-----------------------------------");
                                    printf("Asiento N�: ");
                                    scanf("%d",&asiento);
                                }

                                system("cls");
                                puts("-----------------------------------");
                                printf("Espere un momento...\n");
                                puts("-----------------------------------");

                                for (i=5;i<10;i++){
                                    if ((i + 1)== asiento){
                                        if (asientos[i]==1){
                                        asientos[i]=0;

                                        recaudacion = (recaudacion - 5000);

                                        printf("�Reserva cancelada con �xito!\n");
                                        puts("-----------------------------------");
                                        printf("Voliviento al men�...\n");
                                        puts("-----------------------------------");
                                    }else if(asientos[i]==0){
                                        printf("No hay reservas para ese asiento (%d)\n",asiento);
                                        puts("-----------------------------------");
                                        printf("Volviendo al men�...\n");
                                    }
                                  }
                                }
                                break;
                            case 3:
                                puts("-----------------------------------");
                                printf("Volviendo al men�...\n");
                                puts("-----------------------------------");
                                break;
                        }
                        break;
                    case 2:
                        puts("-----------------------------------");
                        printf("Volviendo al men�...\n");
                        puts("-----------------------------------");
                        break;
                }

                system("pause");
                break;

//////////////////////////////////////////////////////////////////////////////////
            case 4:
                system("cls");
                puts("-----------------------------------");
                printf("Vuelo: %d\n",aleatorio);
                puts("-----------------------------------");
                printf("***************Primera Clase***************\n");
                for(i=0;i<5;i++){
                    printf("Asiento N�%d: ",i+1);
                        if (asientos[i]==0){
                            printf("Disponible\n");
                        }else{
                            printf("Ocupado\n");
                        }
                    }
                printf("***************Clase Turista***************\n");
                for(i=5;i<10;i++){
                    printf("Asiento N�%d: ",i+1);
                        if (asientos[i]==0){
                            printf("Disponible\n");
                        }else{
                            printf("Ocupado\n");
                        }
                    }
                puts("-----------------------------------");
                system("pause");
                break;

//////////////////////////////////////////////////////////////////////////////////
            case 5:
                system("cls");
                puts("-----------------------------------------------------------------");
                printf("La recaudaci�n del vuelo n�%d hasta el momento es: %.2f\n",aleatorio,recaudacion);
                puts("-----------------------------------------------------------------");
                system("pause");
                break;

//////////////////////////////////////////////////////////////////////////////////
            case 6:
                system("cls");
                printf("�Seguro que desea salir de la aplicaci�n?\n");
                printf("1. Si\n");
                printf("2. No\n");
                printf("Opci�n: ");
                scanf("%d",&op);

                while (op!=1 && op!=2){
                    puts("-----------------------------------");
                    printf("Opci�n invalida, intente de nuevo...\n");
                    puts("-----------------------------------");
                    printf("Opci�n: ");
                    scanf("%d",&op);
                }

                switch(op){
                    case 1:
                        op = 6;
                        puts("-----------------------------------");
                        printf("Saliendo el programa...\n");
                        puts("-----------------------------------");
                        system("pause");
                        break;
                    case 2:
                        op = 0;
                        system("cls");
                        puts("-----------------------------------");
                        printf("Volviendo al menu...\n");
                        puts("-----------------------------------");
                        system("pause");
                        break;
                }
                break;
        }
    }while(op!=6);

    return 0;
}
