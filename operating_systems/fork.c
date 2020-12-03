#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	if(fork() == 0) { 
		fork();
		printf("Copil 1\n");
		fork();
		printf("Copil 2\n");
		fork();
		printf("Copil 3\n");
	}
	printf("I am kid\n");
	fork();
	printf("END\n");
	return 0;
}
