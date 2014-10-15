#include <stdio.h>

int main(){

	puts("");

	int row, col;

	printf("matrix1 rows: ");
		scanf("%d", &row);
	printf("matrix1 cols: ");
		scanf("%d", &col);

	puts("");

	printf("matrix2 rows: %d", row);
	puts("");
	printf("matrix2 cols: %d", col);

	puts("\n");

	int matrix1[row][col];
	int matrix2[row][col];
	int matrix3[row][col];

	int i, j;

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("matrix1 (%d, %d): ", i+1, j+1);
				scanf("%d", &matrix1[i][j]);
		}
		puts("");
	}

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d\t", matrix1[i][j]);
		}
		puts("");
	}

	puts("");

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("matrix2 (%d, %d): ", i+1, j+1);
				scanf("%d", &matrix2[i][j]);
		}
		puts("");
	}

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d\t", matrix2[i][j]);
		}
		puts("");
	}

	puts ("\nmatrix1 + matrix2:\n");

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d\t", matrix3[i][j]);
		}
		puts("");
	}


	puts("\n");

	return 0;
}
