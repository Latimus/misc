//Manuel Alejandro Sahagun Mendoza   349857
//Programa que realize 4 funciones, ACCSI, ACCSI Completo, Promedio de n Cantidad de numero, Promedio Grl y Num de n Alumnos
//10 Noviembre 2016
//SMMA_PR10
//***************************************************************************************
//    LIBRERIAS
//**************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//****************************************************************
/// Constantes
//**********************************************************************

#define ESC 27                                                          
//****************************************************************
/// variables globales
//**********************************************************************


//****************************************************************************
// PROTOTIPOS DE FUNCIONES
//****************************************************************************
void menu (void);
void funcion1(void);
void funcion2(void);
void funcion3(void);
void funcion4(void);
void delay(int);

//****************************************************************************
// MAIN PRINCIPAL  ...  funcion principal
//****************************************************************************

int main (void)
{
   menu();
   return 0;
}

//****************************************************************************
// desarollo de las funciones en el mismo orden de como listamos los prototipos
//****************************************************************************

//*****************   FUNCION MENU DESDE DONDE SE MANDA LLAMAR LAS DEMAS FUNCIONES
void menu(void)
{
   int op;
   
   do{
      system ("cls");
      printf("\n M  E   N   U");
	  printf("\n1.- Codigo ASSCI");
	  printf("\n2.- Codigo ASSCI 256");
	  printf("\n3.- Promedio de x cantidad de numeros");
	  printf("\n4.- Numero de Alumnos y promedio GRL");
	  printf("\n0.- Salir");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: funcion1();  break;
		  case 2: funcion2();  break;
		  case 3: funcion3();  break;
		  case 4: funcion4();  break;
		}
   }while(op != 0);
}

//**************************************************************************************

//***********CODIGO ASSCI
void funcion1(void)
{
     int tecla;
    system ("cls");
	do{
           tecla = getch();
           printf("\n%d -> %c",tecla,tecla);
           }while(tecla != ESC);
	
	system("pause");
	

}

//**************************************************************************************

//***********CODIGO ASSCI 256
void funcion2(void)
{
     int i;
   system ("cls");
	for(i=1;i<257;i++)
	{
     printf("%d -> %c\n",i,i);
     }                  
	system("pause");
}

//**************************************************************************************

//***********PROMEDIO DE X CANDITDAD DE NUMEROS
void funcion3(void)
{
     int tecla,i,suma,num;
     float prom;
     suma=0;
     i=0;
     
     do{
         system ("cls");
         printf("Dame un numero: ");
         scanf("%d",&num);
         suma = suma + num;
         i++;
         printf("\nPress ESC to exit or any key to continue\n");
         tecla = getch();
         }while(tecla != ESC);
         prom= (float)suma/i;
         printf("La suma de los %d numeros es: %d\n",i,suma);
         printf("El promedio de los %d numeros es: %.2f",i,prom);
         printf("\n");
	
	system("pause");

}

//************************************************************************

//*************************************NUMERO DE ALUMNOS Y PROMEDIO GENERAL
void funcion4(void)
{
     int c1,c2,c3,i,suma,sumapr,tecla;
     float prom,promG;
     sumapr = 0;
     i = 0;
     do{
         
         system("cls");
         printf("Dame la priemra calificacion: ");
         scanf("%d",&c1);
         printf("Dame la segunda calificacion: ");
         scanf("%d",&c2);
         printf("Dame la tercera calificacion: ");
         scanf("%d",&c3);
         prom = (float)(c1+c1+c3)/3;
         if(prom >= 60)
         {
                 printf("Aprobado");
                 }
                 else
                 {
                     printf("Reprobado");
                     }
                     sumapr = prom + sumapr;
         i++;
         printf("\nPresione la tecla ESC si ha terminado, si desea añadir otro alumno presione cualquier tecla");
         tecla = getch();
         }while (tecla != ESC);
         system("cls");
         promG = (float)sumapr/i;
         printf("\nNumero de alumnos: %d, Promedio General: %.2f",i,promG);
         printf("\n");
         system("pause");
                     
}

//************************************************************************
void delay(int tiempo)
{
  int i,j;
  for(i=0;i<tiempo*100;i++)
     {
	   for(j=0;j<tiempo*100;j++);
		

	 }
}











