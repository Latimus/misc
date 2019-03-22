//Manuel Alejandro Sahagun Mendoza	349857
//Esqueleto Completo, Programa que realize 5 funciones diferentes
//12 octubre 2016 - - 13 octubre 2016
//SMM_PR_07
//***************************************************************************************
//    LIBRERIAS
//***************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//**********************************************************************
/// Constantes
//**********************************************************************

#define N 10
//**********************************************************************
/// variables globales
//**********************************************************************


//*****************************************************************************
// PROTOTIPOS DE FUNCIONES
//*****************************************************************************
void menu (void);
void programa1(void);
void programa2(void);
void programa3(void);
void programa4(void);
void programa5(void);
void delay(int);

//*****************************************************************************
// MAIN PRINCIPAL  ...  funcion principal
//*****************************************************************************

int main (void)
{
   menu();
   return 0;
}

//*****************************************************************************
// desarollo de las funciones en el mismo orden de como listamos los prototipos
//*****************************************************************************

//*****************FUNCION MENU DESDE DONDE SE MANDA LLAMAR LAS DEMAS FUNCIONES
void menu(void)
{
   int op;
   
   do{
      system ("cls");
      printf("\n M   E   N   U");
	  printf("\n1.- Lee 2 numeros mayor o menor");
	  printf("\n2.- Lee 3 numeros y desplegar el del medio");
	  printf("\n3.- Lee 3 calificaciones, calcular promedio y desplegar leyendas");
	  printf("\n4.- Recibo de agua");
	  printf("\n5.- Calcular Salario");
	  printf("\n0.- Salir");
	  printf("\nESCOGE UNA OPCION: ");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: programa1();  break;
		  case 2: programa2();  break;
		  case 3: programa3();  break;
		  case 4: programa4();  break;
		  case 5: programa5();  break;
		}
   }while(op != 0);
}

//**************************************************************************************

//****************************************Programa que lea 2 numero y desplegar el mayor 
void programa1(void)
{
     int n1,n2;
    system ("cls");
	printf("Dame un numero: \n");
	scanf("%d",&n1);
	printf("Dame otro numero: \n");
	scanf("%d",&n2);
	if ( n1 > n2 )
	{
         printf("\n El primer numero es mayor: %d",n1);
     }
     else
     {
         printf("\n El segundo numero es mayor: %d",n2);
     }
     printf("\n");
	system("pause");
	

}

//**************************************************************************************

//****************************Programa que lea 3 numeros y desplegar el numero del medio
void programa2(void)
{
     int n1,n2,n3;
    system ("cls");
	printf("Dame el primer numero: ");
	scanf("%d",&n1);
	printf("Dame el segundo nuemro: ");
	scanf("%d",&n2);
	printf("Dame el tercer numero: ");
	scanf("%d",&n3);
	if (((n3 > n2) && (n2 > n1)) || ((n3 < n2) && (n2 < n1)))
    {
       printf("El nuemro medio es: %d",n2);
     }
    else
    {
       if (((n1 > n3) && (n3 > n2)) || ((n1 < n3) && (n3 < n2)))
       {
                printf("El nuemro medio es: %d",n3);
                }
                else
                {
                    printf("El nuemro medio es: %d",n1);
                }
     } 
     printf("\n");
     system("pause");


}

//**************************************************************************************

//*********************Programa que lea 3 calificaciones y desplegar promedio y leyendas
void programa3(void)
{
     float cal1,cal2,cal3,prom;
    system ("cls");
	printf("Dame la primera calificacion: ");
	scanf("%f",&cal1);
	printf("Dame la segunda caificacion: ");
	scanf("%f",&cal2);
	printf("Dame la tercera calificacion: ");
	scanf("%f",&cal3);
	prom = ( cal1 + cal2 + cal3 ) / 3;
	if ( prom < 80 )
	{
                if ( prom < 60 )
                {
                     if ( prom <= 30 )
                     {
                          printf("Repetir: %.2f",prom);
                      }
                      else
                      {
                          printf("Extraordinario: %.2f",prom);
                      }
                 }
                 else
                 {
                     if ( prom < 70)
                     {
                          printf("Suficiente: %.2f",prom);
                      }
                      else
                      {
                          printf("Regular: %.2f",prom);
                      }
                 }
     }
     else
     {
         if ( prom < 96)
         {
              if ( prom < 90 )
              {
                   printf("Bien: %.2f",prom);
               }
               else
               {
                   printf("Muy Bien: %.2f",prom);
               }
          }
          else
          {
              if (prom <= 100)
              {
                      printf("Excelente: %.2f",prom); 
              }
              else
              {
                      printf("Error: %.2f",prom);
              }
                       
          }
     }
     printf("\n");
     system("pause");
}

//************************************************************************

//**********************************************************Recibo de Agua
void programa4(void)
{
	float con,subt,iva,tot;
	system("cls");
	
    printf("Dame la cantidad de metros cubicos de agua que se consumieron: ");
    scanf("%f",&con);
    if (con <= 4)
    {
            subt = 50;
            iva = subt * 0.16;
            tot = subt + iva;
            }
            else
            {
                if (con <= 15)
                {
                        subt = ((con * 8) + 50);
                        iva = subt * 0.16;
                        tot= subt + iva;
                        }
                        else
                        {
                            if(con <= 50)
                            {
                                   subt = ((con * 10) + 50 + 88);
                                   iva = subt * 0.16;
                                   tot = subt + iva;
                                   }
                                   else
                                   {
                                       subt = ((con * 11) + 50 + 88 + 350);
                                   iva = subt * 0.16;
                                   tot = subt + iva;
                                   }
                        }
            }
            printf("\n Subtotal:             %.2f",subt);
            printf("\n IVA 16%:               %.2f",iva);
         	printf("\n El total a pagar es:  %.2f pesos.",tot);
         	
  printf("\n");
  system("pause");
}
//************************************************************************

//********************************************************Calcular Salario
void programa5(void)

#define SN 40
{
	float hse,sxh,sln,sxt,tot;
	
	system("cls");
    printf("Cantidad de horas trabajadas en la semana: ");
    scanf("%f",&hse);
    printf("Escriba el salario por hora: ");
    scanf("%f",&sxh);
    if (hse <= SN)
    {
           tot = hse * sxh;
           }
           else
           {
               if (hse <= (SN+9))
               {
                       sln = hse * sxh;
                       sxt = ((hse - SN) * (2 * sxh));
                       tot = sln + sxt;
                       }
                       else
                       {
                           sln = hse * sxh;
                           sxt = ((hse - (SN+9)) * (3 * sxh) + (9 * (2 * sxh)));
                           tot = sln + sxt;
                       }
           }
                        printf("\n Salario por hora: %.2f",sxh);
                        printf("\n Horas trabajadas: %.2f",hse);
                        printf("\n Salario normal:   %.2f",sln);
                        printf("\n Salario extra:    %.2f",sxt);
                        printf("\n==========================");
                        printf("\n Salario Total:    %.2f",tot);
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











