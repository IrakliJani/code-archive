#include <stdio.h>

int main(){

	int a = 1;
	int b = 321;
	int c = 654;

	printf("%#x\n%#x\n", &a,&b);

	int* p = (int*)0x28ff44;

	printf("%d\n", *(p-2));

	*p = 123;

	printf("%d\n", a);

	getchar();
	return 0;
}
