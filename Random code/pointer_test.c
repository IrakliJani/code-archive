#include <stdio.h>

int main(){

	int i;
	int * p;

	printf("ცვლადი i-s მნიშვნელობა: %d\n", i);
	printf("პოინტერი p-ს მნიშვნელობა: %d\n", p);

	printf("ცვლადი i-ს მისამართი: %p\n", &i);
	printf("პოინტერი p-s მისამართი: %p\n", &p);

	i = 123;
	p = &i;

	return 0;
}
