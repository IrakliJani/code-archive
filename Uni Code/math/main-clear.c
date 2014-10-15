#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate();

int g[4];

int main(){

	int in, count, mcount = 0, exist = 0, inplace = 0;
	int i[4];

	generate();

	while(1){
		if(i[0] == g[0] && i[1] == g[1] && i[2] == g[2] && i[3] == g[3]){
			printf("\ngilocavt! tqven gamoicanit ricxvi %d%d%d%d %d cdashi\n", g[0], g[1], g[2], g[3], mcount);
			break;
		}
		printf("\n-> ");
			scanf("%d", &in);
		
		if(in >= 1000 && in <= 9999){
			i[0] = in/1000;
			i[1] = (in%1000)/100;
			i[2] = (in%100)/10;
			i[3] = in%10;

			if(i[0] != i[1] && i[0] != i[2] && i[0] != i[3] && i[1] != i[2] && i[1] != i[3] && i[2] != i[3]){

				mcount++;

				for(count = 0; count <= 3; count++){
					if(i[0] == g[count]){
						exist++;
					}
					if(i[1] == g[count]){
						exist++;
					}
					if(i[2] == g[count]){
						exist++;
					}
					if(i[3] == g[count]){
						exist++;
					}
					if(i[count] == g[count]) inplace++;
				}

				printf("\n(%d)--", mcount);
				printf("\n%d : %d\n", exist, inplace);
				puts("-----");

				exist = 0;
				inplace = 0;

			}
			else{
				puts("shekvanili ricxvis shemadgeneli ciprebi unda ikos gansxvavebuli");
			}
		}
		else{
			puts("shekvanili ricxvi unda ikos otxnishna");
		}
	}

	getch("pause");
	return 0;
}
void generate(){

	srand(time(0));

	g[0] = rand()%9+1;
	while(1){
		g[1] = rand()%9+0;
		if(g[0] != g[1]) break;
	}
	while(1){
		g[2] = rand()%9+0;
		if(g[2] != g[0] && g[2] != g[1]) break;
	}
	while(1){
		g[3] = rand()%9+0;
		if(g[3] != g[0] && g[3] != g[1] && g[3] != g[2]) break;
	}
}
