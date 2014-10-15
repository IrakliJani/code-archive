/*

Write a program that prints its input one word per line

*/

#include <stdio.h>

int main(){

	char c;

	while((c = getchar()) != EOF){

		putchar(c);
		puts("");

	}

	return 0;
}
