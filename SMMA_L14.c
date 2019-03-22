//Manuel Alejandro Sahagun Mendoza  349857
//Programa que lea 3 numeros, desplegar los 3 numeros n orden descendente
//28 sept 2016
//SMMA_L14
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2,num3;
  printf("Dame el primer numero: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero: ");
  scanf("%d",&num2);
  printf("Dame el tercer numero: ");
  scanf("%d",&num3);
  if (num1 < num2 )
  {
	if (num3 > num2)
	{
		printf("\n %d, %d, %d",num3,num2,num1);
	}
	else
	{
		if (num1 < num3)
		{
			printf("\n %d, %d, %d",num2,num3,num1);
		}
		else
		{
			printf("\n %d, %d, %d",num2,num1,num3);
		}
	}
  }
  else
  {
  	if (num1 > num3)
  	{
  		if (num3 > num2)
  		{
  			printf("\n %d, %d, %d",num1,num3,num2);
  		}
  		else
  		{
  			printf("\n %d, %d, %d",num1,num2,num3);
  		}
  	}
  	else
  	{
  		printf("\n %d, %d, %d",num3,num1,num2);
  	}
  }

  printf("\n");
  system("PAUSE");	
  return 0;
}

