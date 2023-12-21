#include "backsubst.h"
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *mat, Matrix *b) {
				/**
				 * Tutaj należy umieścić właściwą implemntację.
				 */
	x->data[c]=b->data[c]/mat->data[r][c];
	double temp;
	for(int j=c-1;i>0;i--){
	        for(int i=c;i>j;i--)
        	temp+=x->data[i] * mat->data[i-1][i-1];
	x->data[j]=(temp+b->data[j])/mat->data[j][j];
	}




				/* To ponizej jest przepisaniem b do x. Nalezy to poprawic! */

				int i;
				for (i =0; i < x->r; i++) {
								x->data[i][0] = b->data[i][0];
				}

				return 0;
}


