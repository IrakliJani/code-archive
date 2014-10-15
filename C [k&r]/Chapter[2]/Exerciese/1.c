#include <stdio.h>

int main(){

	signed char schar;
	unsigned char uchar;
	signed short sshort;
	unsigned short ushort;
	signed int sint;
	unsigned int uint;
	signed long slong;
	unsigned long ulong;

	printf("signed char: %d\n", sizeof(schar));
	printf("unsigned char: %d\n\n", sizeof(uchar));

	printf("signed short: %d\n", sizeof(sshort));
	printf("unsigned short: %d\n\n", sizeof(ushort));

	printf("signed int: %d\n", sizeof(sint));
	printf("unsigned int: %d\n\n", sizeof(uint));

	printf("signed long: %d\n", sizeof(slong));
	printf("unsigned long: %d\n\n", sizeof(ulong));

	return 0;
}
