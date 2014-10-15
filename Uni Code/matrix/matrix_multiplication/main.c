#include <stdio.h>
#include <stdlib.h>

int main(void){

	int M1,N1,M2,N2,i,j,k;

	printf("shemoitanet pirveli matricis striqonebis raodenoba: ");
		scanf("%d",&M1);
	printf("shemoitanet pirveli matricis svetebis raodenoba: ");
		scanf("%d",&N1);
	printf("\nmeore matricis striqonebis raodenoba avtomaturad aris: %d",N1);
		M2 = N1;
	printf("\nshemoitanet meore matricis svetebis raodenoba: ");
		scanf("%d",&N2);

	int matrix1[M1][N1];
	int matrix2[M2][N2];

	printf("\nsheikvanet pirveli matricis elementebi: \n");

	for(i = 0; i < M1; i++){
		puts("");
		for(j = 0; j < N1; j++){
			printf("[%d][%d] = ",i,j);
				scanf("%d",&matrix1[i][j]);
		}
	}

	printf("\nsheikvanet meore matricis elementebi: \n");

	for(i = 0; i < M2; i++){
		puts("");
		for(j = 0; j < N2; j++){
			printf("[%d][%d] = ",i,j);
				scanf("%d",&matrix2[i][j]);
		}
	}

	int matrix3[M1][N2];

	for(i = 0; i < M1; i++){
		for(j = 0; j < N2; j++){
			matrix3[i][j] = 0;
		}
	}

////////////////////////////////////

	for(i = 0; i < M1; i++){
		puts("");
		for(j = 0; j < N1; j++){
			printf("%2d ",matrix1[i][j]);
		}
	}
	puts("");
	for(i = 0; i < M2; i++){
		puts("");
		for(j = 0; j < N2; j++){
			printf("%2d ",matrix2[i][j]);
		}
	}

////////////////////////////////////

	for(i = 0; i < M1; i++){
		for(j = 0; j < N2; j++){
			for(k = 0; k < M2; k++){
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	puts("");
	for(i = 0; i < M1; i++){
		puts("");
		for(j = 0; j < N2; j++){
			printf("%2d ",matrix3[i][j]);
		}
	}

////////////////////////////////////

	return 0;
}
