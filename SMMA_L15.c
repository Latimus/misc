//Manuel Alejandro Sahagun Mendoza  349857
//Programa para jugar a chinchampu entre 2 jugadores
//28 sept 2016 - 29 sept 2016
//SMMA_L15
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2;
  
  printf("Elija uno de los 3 numeros asignados: ");
  printf("\n 1. Piedra ");
  printf("\n 2. Papel ");
  printf("\n 3. Tijera ");
  printf("\n Primero el jugador 1: ");
  scanf("%d",&num1);
  printf(" Ahora el jugador 2: ");
  scanf("%d",&num2);
  if (num1 == num2)
  {
  	printf("Empate");
  }
  else
  {
  	if (num1 == 1)
  	{
  		if (num2 == 2)
  		{
  			printf("Jugador 2 gana");
  		}
  		else
  		{
  			printf("Jugador 1 gana");
  		}
  	}
  	else
  	{
  		if (num1 == 2)
  		{
  			if (num2 == 1)
  			{
  				printf("Jugador 1 gana");
  			}
  			else
  			{
  				printf("Jugador 2 gana");
  			}
  		}
  		else
  		{
  			if (num2 == 1)
  			{
  				printf("Jugador 2 gana");
  			}
  			else
  			{
  				printf("Jugador 1 gana");
  			}
  		}
  	}
  }
  
  printf("\n");
  system("PAUSE");	
  return 0;
}
