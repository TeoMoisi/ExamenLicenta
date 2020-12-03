#include <stdio.h>
#include <unistd.h>

int main() { 
	int n = 1;
	if(fork() == 0) { 
		n = n + 1;
		exit(0);
	}
	n = n + 2;
	printf("%d", getpid());
	printf(": %d\n", n);
	wait(0);
	return 0;
}
