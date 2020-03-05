#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int primos_por_mostrar, n, d;
	int es_primo;
		printf("cuantos primos desea mostrar");
		scanf("%d", &primos_por_mostrar);
		n = 2;
		while (primos_por_mostrar > 0) {
			es_primo = 1;
			for(d = 2; d < n; ++d) {
			if (n % d == 0){
			es_primo = 0;
			break;
			}
		}
			if (es_primo) {
			printf("%d", n);
			primos_por_mostrar--;
		}
		n++;
		}
	printf("\%d", n);
return 0;
}

