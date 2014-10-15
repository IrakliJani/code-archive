#include <stdio.h>
#include <stdlib.h>

int main(){

	const int N = 100;
	int array[N];
	int i;

	for(i = 0; i < N; i++){
		array[i] = i;
	}
	printf("\n\n\n\n%d",*(array+99));

	puts("");
	system("pause");
	return 0;
}
