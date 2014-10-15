#include <stdio.h>

int xarisxi(int ricxvi, int xarisxi);

int main(){

	int i;

	for(i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, xarisxi(2, i), xarisxi(-3, i));

	return 0;
}

int xarisxi(int ricxvi, int xarisxi){

	int i, result;

	result = 1;

	for(i = 1; i <= xarisxi; ++i)
		result *= ricxvi;

	return result;
}
