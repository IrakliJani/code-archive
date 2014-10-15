/*---------------------------------------------------------*\
| Author: Irakli Janiashvili                                |
| Date: 11:57 PM Friday, November 05, 2010                  |
| About: *romel meotxedshia wertili                         |
\*---------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,k;
	printf("shemoitanet A-s koordinati x: ");
	scanf("%d",&x);
	printf("shemoitanet A-s koordinati y: ");
	scanf("%d",&y);
	
	if(x*y != 0){
		if (x > 0 && y > 0){
			k = 1;
		}	else if (x < 0 && y > 0){
			k = 2;
		} else if (x < 0 && y < 0){
			k = 3;
		} else if (x > 0 && y < 0){
			k = 4;
		}
		printf("A(%d,%d) mdebareobs meotxedshi romlis nomeria: %d", x,y,k);
	} else {
		printf("x da y unda ikos 0-sgan gansxvavebuli");
	}

puts("");
system("pause");
return (0);
}
