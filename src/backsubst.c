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
for(int i=0 ; i < mat->r ; i++){
		if( mat->data[i][0]==0)
			return 1;
	}
	
	if(mat->r != mat->c)
		return 2;

	x->data[mat->c]=b->data[mat->c]/mat->data[mat->r][mat->c];
	double temp;
	for(int j=(mat->c)-1;i>0;i--){
	        for(int i=mat->c;i>j;i--)
        	temp+=x->data[i][0] * mat->data[i-1][i-1];
	x->data[j][0]=(temp+b->data[j][0])/mat->data[j][j];
	}





				/* To ponizej jest przepisaniem b do x. Nalezy to poprawic! */

				int i;
				for (i =0; i < x->r; i++) {
								x->data[i][0] = b->data[i][0];
				}

				return 0;
}


