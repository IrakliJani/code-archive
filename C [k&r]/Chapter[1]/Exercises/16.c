/*

Rewise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text.

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
			printf("\t\t%i\n", i);
			i = 0;
		}
	}

	return 0;
}
