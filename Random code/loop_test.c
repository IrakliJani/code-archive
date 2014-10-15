#include <stdio.h>

int main(){

	const int N = 5;

	int a,b,c;
	a = b = c = 0;

	for(a; a < N; a++){
		for(b; b < N; b++){
			for(c; c < N; c++){
				printf("1 ");
			}
		}
	}

	return 0;
}
