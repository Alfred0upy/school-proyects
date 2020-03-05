#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void){
int i;
	for (i=1; i<=100; i++){
		if (i%3 == 0 && i%5 == 0){
		printf ("FizzBuzz\n");
		}
		else{
		if (i%5 == 0){
		printf ("buzz\n");
		}
			else{
			if (i%3 == 0){
			printf ("fizz\n");
			}
				else printf("i");
			}
		}
	}
return 0;
}

