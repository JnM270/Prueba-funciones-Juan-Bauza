#include <iostream>
#include <math.h>

float a, b, c, x1, x2; //Datos del Caso 1
float r, pi=3.14; //Datos del Caso 2
float Xo, Vot, t, ac;//Datos del Caso 3
int opcion;

//Caso 1

void Valor_abc()
{
  printf("Inserte a:");
  scanf("%f", &a);
  printf("Inserte b:");
  scanf("%f", &b);
  printf("Inserte c:");
  scanf("%f", &c);
}

float proc_x1(float a, float b, float c)
{
  float x1 = 0;

  x1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  return x1;
}
float proc_x2(float a, float b, float c)
{
  float x2 = 0;

  x2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  return x2;
}

//Caso 2

void Valor_Esfera ()
{
  printf("Inserte el radio r: ");
  scanf("%f", &r);
}

float procEsfera (float r)
{
  float Volumen = 0;

  if(r > 0)
  {
    Volumen = 1.3333333333*pi*pow(r,3); //1.3333333333 es 4/3
  }
  else
  {
    printf("El numero no es valido, inserte un numero mayor a 0");
  }
  return Volumen;
}

//Caso 3

void Valor_MRUV ()
{
  printf("Inserte Xo: ");
  scanf("%f", &Xo);

  printf("Inserte Vot: ");
  scanf("%f", &Vot);

  printf("Inserte t: ");
  scanf("%f", &t);

  printf("Inserte ac: ");
  scanf("%f", &ac);
}
float procMRUV(float Xo, float Vot, float t, float ac)
{
  float Xf = 0;

Xf = Xo + Vot +ac*pow(t,2)/2;

  return Xf;
}

int main()
{
  printf("Opciones disponibles");
  printf("\n1. Calcular las Raices de Polinomio de 2do Grado");
  printf("\n2. Calcular el Volumen de una Esfera");
  printf("\n3. Calcular el desplazamiento de un cuerpo MRUV");
  printf("\n Inserte un numero diferente de 3 para detener el programa");
  scanf("%i", &opcion);
  switch(opcion)
    {
      case 1:
        
		system("CLS");
        Valor_abc();

        printf("El resultado de x1 es: %.2f", proc_x1 (a,b,c));
        printf("El resultado de x2 es: %.2f", proc_x2 (a,b,c));
        break;

      case 2:
        
		system("CLS");
        Valor_Esfera();
        printf("EL volumen de la Esfera es: %.2f", procEsfera(r));
        break;

      case 3:
        
		system("CLS");
        Valor_MRUV();
        printf("El desplazamiento del cuerpo es: %.2f", procMRUV(Xo, Vot, t, ac));
        break;
    }
  return 0;
}
