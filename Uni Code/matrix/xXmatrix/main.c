#include <stdio.h>

int main(){

	int M,N,i,j,x;

	printf("shemoitanet matricis striqonebis raodenoba: ");
		scanf("%d",&M);
	printf("shemoitanet matricis svetebis raodenoba: ");
		scanf("%d",&N);

	int matrix[M][N];

	for(i = 0; i < M; i++){
		puts("");
		for(j = 0; j < N; j++){
			printf("[%d][%d] = ",i,j);
				scanf("%d",&matrix[i][j]);
		}
	}

	for(i = 0; i < M; i++){
		puts("");
		for(j = 0; j < N; j++){
			printf("%3d ",matrix[i][j]);
		}
	}

	printf("\n\nsheikvanet ricxvi razec unda gamravldes matrica: ");
		scanf("%d",&x);

	for(i = 0; i < M; i++){
		puts("");
		for(j = 0; j < N; j++){
			matrix[i][j] *= x;
			printf("%3d ",matrix[i][j]);
		}
	}

	puts("");
	return 0;
}
