#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
   int numero, x;


   printf("Digite um numero positivo: ");
   scanf("%d", &numero);


   printf("Os divisores do numero %d sao: ", numero);
   for (x = 1; x <= numero; x++) {
      if (numero % x == 0) {
         printf("%d ", x);
      }
   }

   return 0;
}

