#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void matrix_multi(int row_lim, int col_lim, int inner_lim, int matrix[][inner_lim], int matrix2[][col_lim], int newmatrix[][col_lim]);
int main(){
	int (*matrix)[2] = malloc(sizeof(int)*4);
	int (*matrix2)[2]= malloc(sizeof(int)*4);
	int (*newmatrix)[2]=calloc(4, sizeof(int));
	matrix[0][0]=5;
	matrix[0][1]=3;
	matrix[1][0]=2;
	matrix[1][1]=1;
	matrix2[0][0]=8;
	matrix2[0][1]=1;
	matrix2[1][0]=2;
	matrix2[1][1]=1;
	

	matrix_multi(2,2,2,matrix, matrix2, newmatrix);
	return 0;

}

void matrix_multi(int row_lim, int col_lim, int inner_lim, int matrix[][inner_lim], int matrix2[][col_lim], int newmatrix[][col_lim]){
	for(int row=0;row<row_lim;row++){
		for(int col=0;col<col_lim;col++){
			for(int inner=0;inner<inner_lim;inner++){
				newmatrix[row][col] += matrix[row][inner]*matrix2[inner][col];
			}
		}
	}
	for(int row=0; row<row_lim;row++){
		for(int col=0; col<col_lim; col++){
			printf("%d ", newmatrix[row][col]);
		}
	printf("\n");
	}
}




