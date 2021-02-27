#include <stdio.h>
#include <time.h>

int main(){
	clock_t time_inicial = clock();
	for (int i=0; i<1000000; i+=1){
		printf("%d\n", i);
	}
	for (int i=0; i<1000000; i+=1){
		printf("%d\n", i);
	}
	for (int i=0; i<1000000; i+=1){
		printf("%d\n", i);
	}
	clock_t time_final = clock();
	
	double time_total = (double) time_final - time_inicial;
	printf("%f\n", time_total);
	return (0);
}
