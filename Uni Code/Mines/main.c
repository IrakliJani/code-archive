#include <stdio.h>
#include <stdlib.h>

int main(void){

	const int I = 10, J = 15;
	int field[I][J];
	int bombs, count1, count2, rand1, rand2, bombcount = 0;

	bombs = (I*J*30)/100;

	srand(time(NULL));

	printf("\n\n%d bombs\n\n",bombs);

	while(bombs > 0){
			rand1 = rand()%I+0;
			rand2 = rand()%J+0;
			if(field[rand1][rand2] != 1){
				field[rand1][rand2] = 1;
				bombs--;
			}
	}
	for(count1 = 0; count1 < I; count1++){
		for(count2 = 0; count2 < J; count2++){
			if(field[count1][count2] != 1){
				field[count1][count2] = 0;
			}
			if(field[count1][count2] == 1){
				bombcount++;
			}
			printf("%d ",field[count1][count2]);
			if(count2 == J-1) puts("");
		}
	}
	printf("\n\n%d bombs",bombcount);

	puts("");
	return 0;
}
