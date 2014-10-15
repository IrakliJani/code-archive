/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 9 ნოემბერი, 2010
/* პროგრამა: მინიმალური და მაქსიმალური მნიშვნელობები
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> /* http://en.wikipedia.org/wiki/Limits.h */

int main(){

	printf("INT_MIN = %d\n",INT_MIN);
	printf("INT_MAX = %d\n",INT_MAX);
	printf("UINT_MAX = %u\n",UINT_MAX);
	printf("----------\n");
	printf("CHAR_MIN = %d\n",CHAR_MIN);
	printf("CHAR_MAX = %d\n",CHAR_MAX);
	printf("UCHAR_MAX = %u\n",UCHAR_MAX);

	puts("");
	system("pause");
	return (0);
}
