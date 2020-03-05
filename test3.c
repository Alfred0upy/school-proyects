#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int add_two_nums(int n1, int n2);
int main(int argc, char** argv){
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int result = add_two_nums(n1, n2);
		printf("the sum of %d + %d is %d\n", n1, n2, result);
	return 0;
	}
	int add_two_nums(int n1, int n2){
	return n1 + n2;
}
