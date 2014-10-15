/*

Write a program to count blanks, tabs, and newlines

*/

#include <stdio.h>

int main(){

	char c;
	int b, t, n;
	b = t = n = 0;

	while((c = getchar()) != EOF)
	if(c == ' ')
		b++;
	else if(c == '\t')
		t++;
	else if(c == '\n')
		n++;

	printf("blank: %d\ntab: %d\nnewline: %d\n", b, t, n);

	return 0;
}
