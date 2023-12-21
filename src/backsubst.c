#include "backsubst.h"
#include<stdio.h>
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *mat, Matrix *b) {

	if(mat->r != mat->c || mat->r != b->r)
	return 2;

	for(int i=0;i<mat->r-1;i++){
		if(mat->data[i][i]==0)
			return 1;
	}

	x->data[x->r-1][0]=b->data[b->r-1][0]/mat->data[mat->r-1][mat->c-1];

	for(int i=(mat->r)-2 ; i>=0; i--){
	double temp=0.0;
	for(int j=i+1; j<=(mat->r)-1;j++)
	{
		temp += (mat->data[i][j] * x->data[j][0]);

	}
	x->data[i][0]=(b->data[i][0] - temp)/(mat->data[i][i]);
	}	

	return 0;

}
