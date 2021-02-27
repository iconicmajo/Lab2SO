#include <stdio.h>
#include <unistd.h>

int main(){
	int f = fork();
	if (f==0){
		printf("%s\n", "soy el hijo");
		for (int i=0; i<4000000; i+=1){
			printf("%d\n", i);
		}
	}
	else {
		while(1){
		
		}
	}
	return (0);
}
