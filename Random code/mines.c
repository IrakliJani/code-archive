#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10

/*----------*/

int field[X][X];
int mines[X][X];

/*----------*/

void f_fill_zero(void);
void print_field(void);
void fill_bombs(void);
void TTT_cbombs(void);
void m_fill_zero(void);
void count_mines(void);
void print_mines(void);

/*----------*/

main(void){

	f_fill_zero();
	print_field();
	fill_bombs();
	print_field();
	//TTT_cbombs();
	m_fill_zero();
	count_mines();
	print_mines();

	return 0;
}

/*----------*/

void f_fill_zero(void){

	int i, j;

	for(i = 0; i < X; i++){
		for(j = 0; j < X; j++){
			field[i][j] = 0;
		}
	}

}

/*----------*/

void print_field(void){

	int i, j;

	puts("+---------------------+");

	for(i = 0; i < X; i++){
		printf("| ");
		for(j = 0; j < X; j++){
			printf("%d ", field[i][j]);
		}
		puts("|");
	}

	puts("+---------------------+");

}

/*----------*/

void fill_bombs(void){

	srand(time(NULL));

	int count = 0;
	int max = X*X/3;

	int r1, r2;

	int i, j;

	r1 = rand()%X;
	r2 = rand()%X;

	while(count < max){

		if(field[r1][r2] != 1){
			field[r1][r2] = 1;
			count++;
		}

		r1 = rand()%X;
		r2 = rand()%X;

	}

}

/*----------*/

void TTT_cbombs(void){

	int i, j, ct = 0;
	for(i = 0; i < X; i++){
		for(j = 0; j < X; j++){
			if(field[i][j] == 1){
				ct++;
			}
		}
	}

}

/*----------*/

void m_fill_zero(void){

	int i, j;

	for(i = 0; i < X; i++){
		for(j = 0; j < X; j++){
			mines[i][j] = 0;
		}
	}

}

/*----------*/

void count_mines(void){

	int i, j;

	for(i = 0; i < X; i++){
		for(j = 0; j < X; j++){
			
			if(field[i-1][j-1] == 1) mines[i][j]++;
			if(field[i-1][j] == 1) mines[i][j]++;
			if(field[i-1][j+1] == 1) mines[i][j]++;
			if(field[i][j-1] == 1) mines[i][j]++;
			if(field[i][j+1] == 1) mines[i][j]++;
			if(field[i+1][j-1] == 1) mines[i][j]++;
			if(field[i+1][j] == 1) mines[i][j]++;
			if(field[i+1][j+1] == 1) mines[i][j]++;
		}
	}

}

/*----------*/

void print_mines(void){

	int i, j;

	puts("+---------------------+");

	for(i = 0; i < X; i++){
		printf("| ");
		for(j = 0; j < X; j++){
			printf("%d ", mines[i][j]);
		}
		puts("|");
	}

	puts("+---------------------+");

}



