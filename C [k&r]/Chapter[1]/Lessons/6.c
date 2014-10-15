#include <stdio.h>

int main(){

	int c, i, space, other;
	int numbers[10];

	space = other = 0;

	for(i = 0; i < 10; i++)
		numbers[i] = 0;

	while((c = getchar()) != EOF)
		if(c >= '0' && c <= '9')
			numbers[c - '0']++;
		else if(c == ' ' || c == '\t' || c == '\n')
			space++;
		else
			other++;
	printf("digits: ");
	for(i = 0; i < 10; i++)
		printf("%d ", numbers[i]);
	printf("\nspace: %d, other: %d", space, other);

	puts("");

	return 0;
}
