/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 16 ნოემბერი, 2010
/* პროგრამა: Binary to Decimal
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int dec, nashti, i = 0;

	printf("shemoitanet atobiti ricxvi: ");
		scanf("%d",&dec);

	for(i; ;i++){
		nashti = dec%2;
		dec = dec / 2;
		printf("%d",nashti);
		if (dec < 1) break;
	}

	puts("");
	system("pause");
	return (0);
}
