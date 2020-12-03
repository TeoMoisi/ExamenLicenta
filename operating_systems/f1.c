#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void f1(){
	int i;
	for(i=0; i<3; i++) { 
		if(fork() == 0) {
			printf("Kid\n");
		}
		printf("%d i = \n", i); 
		wait(0);
		printf("After wait\n");
	} 
}

int main() {
	f1();
	return 0;
}
