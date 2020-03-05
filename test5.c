#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void){
int x_array[20];
int xx;
for (xx = 0; xx < 20; xx++) {
	x_array[xx] = 20 - xx;
}
int* x_ptr = x_array;
printf("%d\n", *(x_ptr + 5));
printf("%d\n", x_array[2]);
return 0;
}




