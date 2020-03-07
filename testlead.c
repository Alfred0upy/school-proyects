#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main (int argc, char** argv){ //argument count & argument vector
int i;
int c;
int iniy=atoi(argv[1]);
int finy=atoi(argv[2]);
	for(i=0; i<argc; i++){
		printf("argv[%d] is %s \n",i,argv[i]);
		while (finy > iniy){
		iniy == iniy + 1;
			if (iniy%100 != 0 && iniy%400 == 0 && iniy%4 == 0){
			c == c + 1;
			}
		}

		printf("lead years is\n", c);
	}
return(0);
}

