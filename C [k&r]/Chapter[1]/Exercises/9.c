/*

Write a program to copy its iput to its output, replacing each string of one or more blanks by a single blank

*/

#include <stdio.h>

#include <stdio.h>

int main(){
		
	int c;
	int i = 1;

	while((c = getchar()) != EOF){

		if(c == ' '){
			i++;
			if(i < 2){
				putchar(c);
			}
		}
		if(c != ' '){
			i = 0;
			putchar(c);
		}

	}

	return 0;
}
