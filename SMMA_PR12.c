//Manuel Alejadnro Sahagun Mendoza   349857
//Programa con 4 funciones de cadenas
//19 nov 2016
//SMMA_PR12

//***************************************************************************************
//    LIBRERIAS
//**************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//****************************************************************
/// Constantes
//**********************************************************************

#define N 10
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
	  printf("\n1.- Nombre en filas y una letra menos al inicio");
	  printf("\n2.- Nombre en filas y una letra menos al final (reversa)");
	  printf("\n3.- Nombre en filas y una letra menos al inicio (reversa)");
	  printf("\n4.- Palindromo si / no");
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

//***********Nombre en filas y una letra menos al inicio
void funcion1(void)
{
    system ("cls");
	char nom[30];
	int tam,i,j;
	
	printf("Dame tu nombre: ");
	fflush(stdin);
	gets(nom);
	tam = strlen(nom);
	
	
	for (i=0 ; i<tam ; i++)
	{
		
		for (j=i ; j<tam ; j++)
		{
			
			printf("%c",nom[j]);
			
		}
		printf("\n");
	}


	system("pause");
	

}

//**************************************************************************************

//***********Nombre en filas y una letra menos al final (reversa)
void funcion2(void)
{
   system ("cls");
   	char nom[30];
	int tam,i,j;
	
	printf("Dame tu nombre: ");
	fflush(stdin);
	gets(nom);
	tam = strlen(nom);
	strrev(nom);
	
	for (i=0 ; i<tam ; i++)
	{
		for (j=0 ; j<(tam-i) ; j++)
		{
			printf("%c",nom[j]);
		}
		printf("\n");
	}

	system("pause");


}

//**************************************************************************************

//***********Nombre en filas y una letra menos al inicio (reversa)
void funcion3(void)
{
    system ("cls");
	char nom[30];
	int tam,i,j;
	
	printf("Dame tu nombre: ");
	fflush(stdin);
	gets(nom);
	tam = strlen(nom);
	strrev(nom);
	
	for (i=0 ; i<tam ; i++)
	{
		
		for (j=i ; j<tam ; j++)
		{
			
			printf("%c",nom[j]);
			
		}
		printf("\n");
	}
    
    printf("\n");
	system("pause");

}
//************************************************************************
//**********************************Palindromo
void funcion4(void)
{
    system("cls");
    char nom[50],cad2[50],cop[50];
    int tam,i,j,x;
	j = 0;
	
	printf("Escribe una frase:\n");
	fflush(stdin);
	gets(nom);
	tam = strlen(nom);
	
	for (i=0 ; i<tam ; i++)
	{
		if (nom[i] != ' ')
		{
			printf("%c",nom[i]);
			cad2[j] = nom[i];
			j++;
		}
	}
	cad2[j] = '\0';
	strcpy(cop,cad2);
	strrev(cop);
	x = strcmpi(cop,cad2);
	
	printf("\n");
	
	if (x == 0)
	{
		printf("Si es palindromo");
	}
	else
	{
		printf("No es palindromo");
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











