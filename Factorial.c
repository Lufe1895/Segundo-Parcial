#include <stdio.h>
#include <stdlib.h>

int factorial(long int num){
	if(num>1){
		return (num)*factorial(num-1);
	}
}

int main(int argc, char *argv[]) {
	long int num,f;
	printf("Ingrese un número para saber su factorial:\n");
	scanf("%ld",&num);
	f=factorial(num);
	printf("%ld",f);
	return 0;
}

