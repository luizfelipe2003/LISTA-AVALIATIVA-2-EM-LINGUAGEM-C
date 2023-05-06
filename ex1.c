#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
   int n1, n2, n3, n4;
   int diferenca;


   printf("Digite o valor de A: ");
   scanf("%d", &n1);
   printf("Digite o valor de B: ");
   scanf("%d", &n2);
   printf("Digite o valor de C: ");
   scanf("%d", &n3);
   printf("Digite o valor de D: ");
   scanf("%d", &n4);


   diferenca = (n1 * n2 - n3 * n4);


   printf("DIFERENCA = (%d * %d - %d * %d)\n", n1, n2, n3, n4);
   printf("DIFERENCA = %d\n", diferenca);

   return 0;
}


