/*---------------------------------------------------------*\
| Author: Irakli Janiashvili                                |
| Date: 11:57 PM Friday, November 05, 2010                  |
| About: or wertils shoris mandzili gerdzze                 |
\*---------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	float a,b,z;
	printf("sheikvanet A wertilis koortinati: ");
	scanf("%f",&a);
	printf("sheikvanet B wertilis koortinati: ");
	scanf("%f",&b);
	z = fabs(a - b);
	printf("A da B wertilebs shoris mandzili aris: %.2f", z);

puts("");
system("pause");
return (0);
}
