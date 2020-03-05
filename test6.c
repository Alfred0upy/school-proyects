#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int thing_var;
	int *thing_ptr;
	thing_var = 2;	
	printf("Thing %d\n", thing_var);
	thing_ptr = &thing_var;
	*thing_ptr = 3;
	printf("thing %d\n", thing_var);
	printf("Thing %d\n", *thing_ptr);
	return (0);
}
