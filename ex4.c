#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
   float n1, n2;


   printf("Digite as coordenadas (x,y) do ponto: ");
   scanf("%f %f", &n1, &n2);


   if (n1 == 0 && n2 == 0) {
      printf("Origem\n");
   }
   else if (n1 == 0) {
      printf("Eixo Y\n");
   }
   else if (n2 == 0) {
      printf("Eixo X\n");
   }
   else if (n1 > 0 && n2 > 0) {
      printf("Quadrante 1\n");
   }
   else if (n1 < 0 && n2 > 0) {
      printf("Quadrante 2\n");
   }
   else if (n1 < 0 && n2 < 0) {
      printf("Quadrante 3\n");
   }
   else if (n1 > 0 && n2 < 0) {
      printf("Quadrante 4\n");
   }

   return 0;
}

