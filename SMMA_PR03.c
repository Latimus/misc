//Manuel Alejandro Sahagun Mendoza   349857	
//Programa que realice 3 funciones, Num, Chinchampu y 3 Errores
//13 Nov 2016
//SMMA_PR03

//***************************************************************************************
//    LIBRERIAS
//**************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//****************************************************************
/// Constantes
//**********************************************************************


//****************************************************************
/// variables globales
//**********************************************************************


//****************************************************************************
// PROTOTIPOS DE FUNCIONES
//****************************************************************************
void menu (void);
void programa2(void);
void programa3(void);
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
	  printf("\n1.- Leer un numero");
	  printf("\n2.- Chinchampu 3 de 5");
	  printf("\n3.- Salir despues de 3 errores");
	  printf("\n0.- Salir");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&op);
	  switch(op)
	    {

		  case 2: programa2();  break;
		  case 3: programa3();  break;
		}
   }while(op != 0);
}

//**************************************************************************************






//**************************************************************************************

//********************************************************************Chinchampu 3 de 5
void programa2(void)
{
	int j1,j2,gj1,gj2;
	gj1=0;
	gj2=0;
   
   system("cls");
   	do{
   		
   j1 = (rand()%3)+1;
   printf("\n1.-Piedra: \n2.-Papel: \n3.-Tijera: \nEscoje una opcion: ");
   scanf("%d",&j2);
   if (j1 != j2)
   {
	   	switch(j1)
	   	{
	   		case 1: 
	   		if (j2 == 2)
	   		{
	   			printf("\nGano jugador 2 Papel gana a Piedra");
	   			gj2++;
	   		}
	   		else
	   		{
	   			printf("\nGano jugador 1 Tijeras gana a Papel");
	   			gj1++;
	   		}
	   		break;
	   		
	   		case 2:
	   			if(j2 == 1)
	   			{
	   				printf("\nGana jugador 2 Piedra gana a Tijeras");
	   				gj2++;
	   			}
	   			else
	   			{
	   				printf("\nGana jugador 1 Papel gana a Piedra");
	   				gj1++;
	   			}
	   			break;
	   			
	   		case 3:
	   		if(j2 == 3)
	   		{
	   			printf("\nGana jugador 2 Tijeras gana a Papel");
	   			gj2++;
	   		}
	   		else
	   		{
	   			printf("\nGana jugador 1 Piedra gana a Tijeras");
	   			gj1++;
	   		}
	   		break;
   		}
   			}
    	   	else
			{
		printf("\nEmpate");
		
	}
	   			}while((gj1 < 3) && (gj2 < 3));

			   	if(gj1 == 3)
			   	{
			   		printf("\nGana el jugador 1");
			   	}
			   	else
				{
					printf("\nGana el jugador 2");
			   	}  		
	printf("\n");
	system("pause");


}

//**************************************************************************************

//***********PROGRAMA QUE IMPRIME LA TABLA DE MULTIPLICAR DE UN NUMERO DADO
void programa3(void)
{
    system ("cls");
    int i,e,sum,num;
    float prom;
    e=0;
    i=0;
    sum=0;
    do{
    	printf("Dame un numero entre el 10 y el 20: ");
    	scanf("%d",&num);
    	if((num < 10) || (num > 20))
    	{
    		e++;
    	}
    	else
    	{
    		i++;
			sum = sum + num;
    	}
   
    }while((e != 3) && (i != 15));
    if(e == 3)
    {
    	printf("\nHa escogido 3 numeros fuera del rango");
    }
    else
    {
    	prom = (float)sum / 15;
    	printf("\nEl promedio de los numeros es: %.2f",prom);
    }
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











