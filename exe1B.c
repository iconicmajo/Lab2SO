#include <stdio.h>
#include <unistd.h>

int main(){
	for (int i=0; i<4; i+=1){
		fork();
	}
	printf("%d\n", (int)getpid());
	return (0);
}
