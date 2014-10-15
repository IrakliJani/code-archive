/*

Write a program to print a histogram of the frequencies of different characters in its input

*/

#include <stdio.h>

int main(){

	const int N = 25;

	char c;
	int arr[N]; //97 - 122
	int i;

	for(i = 0; i < N; i++){
		arr[i] = 0;
	}
	while((c = getchar()) != EOF){
		arr[c-97]++;
	}
	for(i = 97; i <= 122; i++){
		printf(" %c | %i\n", i, arr[i-97]);
	}

	return 0;
}
