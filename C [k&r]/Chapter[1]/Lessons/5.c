#include <stdio.h>

int main(){
	
	int c;
	//1
	//c = getchar();
	//while(c != EOF){
	//	putchar(c);
	//	c = getchar();
	//}
	//2
	//while((c = getchar()) != EOF)
	//	putchar(c);
	double nc;
	for(nc = 0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);
}
