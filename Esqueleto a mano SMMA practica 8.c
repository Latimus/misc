//Manuel Alejandro Sahagun Mendoza   349857
//Programa con funciones,
//19 octubre 2016 - 20 octubre 2016
//SMMA_Practica_08
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

void menu(void);
void funcion1(void);
void funcion2(void);
void funcion3(void);
void funcion4(void);
float artrian(float b, float h);

int main(void)
{
	srand(time(NULL));
    menu();
    return 0;
}

void menu(void)
{
     int op;
     
     do{
         system ("cls");
         printf("\n M   E   N   U");
         printf("\n1.-Calcula el area de un triangulo.");
         printf("\n2.-Leer 3 calificaciones, promedio de 15 alumnos y promedio grupal.");
         printf("\n3.-Genera 20 numero aleatoreos entre 0 y 100, par o impar.");
         printf("\n4.-Genera serie Fibonacci hasta cierto numero.");
         printf("\n0.-Salir.");
         printf("\n Escoge una opcion: ");
         scanf("%d",&op);
         switch (op)
                {
                case 1: funcion1();
                break;
                case 2: funcion2();
                break;
                case 3: funcion3();
                break;
                case 4: funcion4();
                break;
              
                }
         }while(op !=0); 
 }
//*********************************Area Triangulo
  void funcion1(void)
  {
       float a,b,h;
       system("cls");
       printf("Dame la base del triangulo: ");
       scanf("%f",&b);
       printf("Dame la altura del triangulo: ");
       scanf("%f",&h);
       a = artrian(b,h);
       printf("\n El area es: %.2f",a);
       printf("\n");
       system("pause");    
   }
                                     
    float artrian(float b, float h)
        {
        float a;
        a = (b * h) / 2;
        return a;
        }
//***********************************Promedios Calificaciones

void funcion2(void)       
{
     int c1,c2,c3,i;
     float prom,suma=0,promG;
     
     for ( i=0 ; i < N ; i++)
     {
     system("cls");
     printf("Alumno: %d", i+1);
     printf("\nDame la primera calificacion: ");
     scanf("%d",&c1);
     printf("Dame la segunda calificacion: ");
     scanf("%d",&c2);
     printf("Dame la tercera calificacion: ");
     scanf("%d",&c3);
     prom = (float) (c1 + c2 + c3) / 3;
     suma = suma + prom;
     if (prom < 60) 
     {
     	printf("Reprobado: %.2f",prom);
     }
     else
     {
     	printf("Aprobado: %.2f",prom);
     }  
     system("cls");
     printf("\n");
	 system("pause");  
	 
 	}
 	
     promG = suma / N ;
     printf("El Promedio Grupal es: %.2f",promG);
     printf("\n");
     system("pause");
     
 }
//*************************************20 numeros aleatorios

void funcion3(void)
{
	int i,x,resid;
	
	system("cls");
	for ( i=0 ; i<20 ; i++)
	{
		x = rand() % 100 ;
		printf("\n%d",x);
		resid = x %2 ;
		if (resid == 0)
		{
			printf(" Par");
		}
		else
		{
			printf(" Impar");
		}
	}
	system("pause");
}
//*****************************************Serie Fibonacci    

void funcion4(void)
{
	int i,n,a,s,r=0;
	
	system("cls");
	printf("Inserta el numero de veces que quieres repetir la secuencia: ");
	scanf("%d",&n);
	a = -1 ;
	s = 1;
	for ( i=0 ; i<n ; i++)
	{
		r = a + s;
		printf("\n%d",r);
		a = s;
		s = r;
	}
	printf("\n");
	system("pause");
}
