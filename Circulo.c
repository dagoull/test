/* Circulo.c: calcula el �rea de un c�rculo. 
   Ejemplo para mostrar etapas de compilaci�n. 
*/ 
#include <stdio.h>
#define PI 3.1416 

void main() 
{ 
  float area, radio; 

  radio = 10; 
  area = PI * (radio * radio); 
  printf("Circulo.\n"); 
  printf("%s%f\n\n", "Area de circulo radio 10: ", area); 

}
