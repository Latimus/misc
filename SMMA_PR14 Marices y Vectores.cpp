//Manuel Alejadnro Sahagun Mendoza   349857
//Programa con 9 funciones VECTORES Y MATRICES
//27 nov 2016
//SMMA_PR14
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
#define T 3
//****************************************************************
/// variables globales
//**********************************************************************


//****************************************************************************
// PROTOTIPOS DE FUNCIONES
//****************************************************************************
void menu (void);

void llvect(int vect1[], int ri, int rf);
void llvect2(int vect2[], int ri, int rf);
void llvect3(int vect1[], int vect2[],int vect3[]);
void llmat(int mat1[][T], int ri, int rf);	
void llmat2(int mat2[][T], int vect3[]);
void llmat3(int mat1[][T], int mat2[][T],int mat3[][T]);
void matras(int mat3[][T], int matrp[][T]);
void imvec(int vect1[], int vect2[],int vect3[]);
void imat(int mat1[][T], int mat2[][T],int mat3[][T],int matrp[][T]);
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
   int op,ri,rf;
   int vect1[N],vect2[N],vect3[N];
   int mat1[T][T],mat2[T][T],mat3[T][T],matrp[T][T];
   
   do{
      system ("cls");
      printf("\n M  E   N   U");
	  printf("\n1.- Vector 1 con 10 numeros aleatorios entre 15-40");
	  printf("\n2.- Vector 2 con 10 numeros aleatorios entre 30-50");
	  printf("\n3.- Suma de los 2 primero vectores");
	  printf("\n4.- Matriz 1 3x3 con 10 numeros aleatorios entre 10-30");
	  printf("\n5.- Matriz 2 3x3 llena con numeros del vector 3");
	  printf("\n6.- Matriz 3 llena con la suma de la matriz 1 y 2");
	  printf("\n7.- Matriz Traspuesta (Matriz 3)");
	  printf("\n8.- Imprimir todos los vectores");
	  printf("\n9.- Imprimir todas las matrices");
	  printf("\n0.- Salir");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: llvect(vect1, ri, rf);  break;
		  case 2: llvect2(vect2,ri,rf);  break;
		  case 3: llvect3(vect1,vect2,vect3);  break;
		  case 4: llmat(mat1,ri,rf);  break;
		  case 5: llmat2(mat2,vect3); break;
		  case 6: llmat3(mat1,mat2,mat3); break;
		  case 7: matras(mat3,matrp); break;
		  case 8: invec(vect1,vect2,vect3); break;
		  case 9: imat(mat1,mat2,mat3,matrp); break;
		}
   }while(op != 0);
}

//************************************************************************
//LLENAR VECTOR 1
//************************************************************************
void llvect(int vect1[],int ri,int rf)
{
    system ("cls");
    
	int i;
	ri=15;
	rf=40;

	for(i=0 ; i < N ; i++)
	{
		vect1[i] = (rand()%(rf-ri))+ri;
		printf(" %2d\n",vect1[i]);
	}
	
	
	system("pause");
	
	
}

//************************************************************************
//LLENAR VECTOR 2
//************************************************************************
void llvect2(int vect2[],int ri,int rf)
{
	system ("cls");
	
	int i;
	ri=30;
	rf=50;
	
	for(i=0 ; i<N ; i++)
	{
		vect2[i] = (rand()%(rf-ri))+ri;
		printf(" %2d\n",vect2[i]);
	}
	
	system("pause");


}

//************************************************************************
//SUMA DE LOS VECTORES 1 Y 2
//************************************************************************
void llvect3(int vect1[],int vect2[],int vect3[])
{
	system("cls");
	
	int i;
	for(i=0 ; i<N ; i++)
	{
		vect3[i]=vect1[i] + vect2[i];
		printf(" %2d\n",vect3[i]);
	}
	

	system("pause");
	
}
//************************************************************************
//LLENAR MATRIZ 1
//************************************************************************
void llmat(int mat1[][T],int ri,int rf)
{
	system("cls");
	int i,j;
	ri = 10;
	rf = 30;
	
	for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			mat1[i][j] = (rand()%(rf-ri))+ri;
			printf("[%2d]",mat1[i][j]);
		}
	}
	printf("\n");
	system("pause");
}
//************************************************************************
//LLENAR MATRIZ 2 CON VECTOR 3
//************************************************************************
void llmat2(int mat2[][T],int vect3[])
{
	system("cls");
	
	int i,j,k;
	k=0;
	
	for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			mat2[i][j] = vect3[k];
			k++;
			printf("[%2d]",mat2[i][j]);
		}
	}
	printf("\n");
    system("pause");
 }
//************************************************************************
//LLENAR MATRIZ 3 CON LA SUMA DE LA MATRIZ 1 Y 2
//************************************************************************
void llmat3(int mat1[][T], int mat2[][T],int mat3[][T])
{
	system("cls");
	int i,j;
	
	for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			mat3[i][j]= mat1[i][j] + mat2[i][j];
			printf("[%2d]",mat3[i][j]);	
		}
	}
	printf("\n");
	system("pause");
}
//************************************************************************
//MATRIZ TRASPUESTA (MATRIZ 3)
//************************************************************************
void matras(int mat3[][T], int matrp[][T])
{
	system("cls");
	int i,j;
	
	for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			matrp[j][i] = mat3[i][j];
			printf("[%2d]",matrp[i][j]);
		}
		
	}
	
	system("pause");
}
//************************************************************************
//IMPRIMIR TODOS LOS VECTORES
//************************************************************************
void invec(int vect1[], int vect2[],int vect3[])
{
	system("cls");
	int i;
		for(i=0 ; i < N ; i++)
	{
		printf(" %2d\n",vect1[i]);
	}
	printf("\n\n");
		for(i=0 ; i < N ; i++)
	{
		printf(" %2d\n",vect2[i]);
	}
	printf("\n\n");
		for(i=0 ; i < N ; i++)
	{
		printf(" %2d\n",vect3[i]);
	}
	
	
	system("pause");
}
//************************************************************************
//IMPRIMIR TODAS LAS MATRICES
//************************************************************************
void imat(int mat1[][T], int mat2[][T],int mat3[][T], int matrp[][T])
{
	system("cls");
	int i,j;
	
	for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			printf("[%2d]",mat1[i][j]);
		}
	}
	printf("\n\n");
	for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			printf("[%2d]",mat2[i][j]);
		}
	}
	printf("\n\n");
		for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			printf("[%2d]",mat3[i][j]);
		}
	}
	printf("\n\n");
		for(i=0 ; i<T ; i++)
	{
		printf("\n");
		for(j=0 ; j<T ; j++)
		{
			printf("[%2d]",matrp[i][j]);
		}
	}
	printf("\n");
	system("pause");
}
//************************************************************************
//FIN
//************************************************************************
void delay(int tiempo)
{
  int i,j;
  for(i=0;i<tiempo*100;i++)
     {
	   for(j=0;j<tiempo*100;j++);
		

	 }
}











