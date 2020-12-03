#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void f1(){
  int i;
for(i=0; i<3; i++) { 
	if(fork() == 0) {} 
}
printf("Here\n");
 }

int main() {
	f1();
	return 0;
}
