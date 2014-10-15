/*

How would you test the word count program? what kind of input are most likely to uncover bugs if there are any?

*/

#include <stdio.h>

int main(){

	char c;
	int i = 0;

	while((c = getchar()) != EOF){

		if(c != '\t' && c != ' ' && c != '\b' && c != '\n')
			i++;
		putchar(c);

	}

	printf("\n%d\n", i);

	return 0;
}
