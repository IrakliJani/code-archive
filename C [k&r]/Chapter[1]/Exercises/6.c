/*

Verify that the expression getchar() != EOF is 0 or 1

*/

#include <stdio.h>

int main(){

	if(getchar() == EOF)
		puts("1");
	else if(getchar() != EOF)
		puts("0");
	else
		puts("ae");

	return 0;
}
