/*

Write a program to copy it's input to it's output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visable in an unambiguous way.

*/

#include <stdio.h>

int main(){

	char c;

	while((c = getchar()) != EOF){

		if(c == 8)
			printf("\\b");
		else if(c == 9)
			printf("\\t");
		else if(c == 92)
			printf("\\");
		else
			putchar(c);
	}

	return 0;
}
