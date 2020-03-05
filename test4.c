#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int x = 0;
int main(void){
  printf("%p/n", (void *)&x);

  int *px, not_a_pointer;
  px = &x;
  printf("%p/n", (void *)px);
  printf("%zu, %zu\n", sizeof(px), sizeof(not_a_pointer));
return 0;
}


