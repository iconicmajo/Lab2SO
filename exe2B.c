#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

int main(){
	pid_t var1;
	pid_t var2;
	pid_t var3;
	
	clock_t time_inicial = clock();
	
	var1 = fork();
	if (var1 == 0){
		// Proceso hijo
		var2 = fork();
		if (var2 == 0){
			// Proceso nieto
			var3 = fork();
			
			for (int i=0; i<1000000; i+=1){
				printf("%d\n", i);
			}
			
		}
		else {
			// Esperar al bisnieto
			wait(NULL);
			for (int i=0; i<1000000; i+=1){
				printf("%d\n", i);
			}
		}
		// Esperar al bisnieto
		wait(NULL);
		for (int i=0; i<1000000; i+=1){
			printf("%d\n", i);
		}
	}
	else {
		// Padre espera al hijo
		wait(NULL);
		clock_t time_final = clock();
		double time_total = (double) time_final - time_inicial;
		printf("%f\n", time_total);
	}
	
	return (0);
}
