#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (int argc, char** argv){
int i, min, med, max;
int n1=atoi(argv[1]);
int n2=atoi(argv[2]);
int n3=atoi(argv[3]);
	for(i=0; i<argc; i++){
		printf("argv[%d] is %s \n",i,argv[i]);
				if (n2 > n1 && n2 < n3){
				n2 == med;
				n1 == min;
				n3 == max;
				}
					if (n1 > n2 && n1 < n3){
					n1 == med;
					n2 == min;
					n3 == max;
					}
						if(n3 > n1 && n3 < n2){
						n3 == med;
						n1 == min;
						n2 == max;
						}
							if(med < min ){
							max == min;
							min == max;
							}
							else printf("%\nmin, %\nmed, %\nmax");
				}
    return(0);

}
