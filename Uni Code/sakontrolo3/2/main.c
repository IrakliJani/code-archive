#include <stdio.h>
#include <stdlib.h>

void printarray(int array[], int N);

int main(){
	
	const int N = 60;
	int array[N];
	int i;

	for(i = 0; i < N; i++){
		*(array + i) = rand();
	}

	printarray(array, N);

	puts("");
	system("pause");
	return 0;
}

void printarray(int array[], int N){
	int i;
	for(i = 0; i < N; i++){
		printf("%6d ", *(array +i));
		if(i%8 == 7){
			puts("");
		}
	}
}
