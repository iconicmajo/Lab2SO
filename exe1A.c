#include <stdio.h>
#include <unistd.h>

int main(){
	fork();
	fork();
	fork();
	fork();
	printf("%d\n", (int)getpid());
	return (0);
}
