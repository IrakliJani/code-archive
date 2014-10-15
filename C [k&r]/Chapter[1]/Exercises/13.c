/*

Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with bars horizontall a vertical orientation is more challenging.

*/

#include <stdio.h>

int main(){

	char c;
	int i = 0;

	while((c = getchar()) != EOF){

		if(c != ' ' && c != '\t' && c != '\b' && c != '\n'){
			putchar(c);
			i++;
		}
		else{
			printf("\t%i\n", i);
			i = 0;
		}

	}

	return 0;
}
