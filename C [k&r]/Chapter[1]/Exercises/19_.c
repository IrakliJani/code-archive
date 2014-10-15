/*

Write a function reverse(s) that reverses the character string s. Use it to write a program to revers its input a line at a time

*/


#include <stdio.h>
#define MAX 1000

int getline2(char s[], int lim);
void reverse(char s[], int lim);

int main(){

	char line[MAX];
	int i  = 	getline2(line, MAX);

	printf("%s %d\n", line, i);

	reverse(line, i);

	printf("%s", line);

	return 0;
}

int getline2(char s[], int lim){

	int c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	s[i] = '\0';

	return i;
}

void reverse(char s[], int lim){

	int i;

	for(i = 0; i < lim; ++i)
		s[i] = i;
	s[i] = '\0';
	
}














	
