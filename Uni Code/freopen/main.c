/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 14 ნოემბერი, 2010
/* პროგრამა: freopen მაგალითი
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[30];
	char lastname[30];
	freopen("saxeli.txt","r",stdin);
		scanf("%s",name);
	freopen("gvari.txt","r",stdin);
		scanf("%s",lastname);
	freopen("out.txt","w",stdout);
		printf("%s %s",name, lastname);
	return 0;
}
