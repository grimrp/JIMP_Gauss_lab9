#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){

	double main_elem=mat->data[0][0];
	int main_elem_index=0;
	for(int i=1;i<mat->r;i++){
	    	if(mat->data[i][0]>main_elem){
	    		main_elem=mat->data[i][0];
	    		main_elem_index=i;
	    	}
	}
	
	double temp;
	for(int i=0;i<mat->c;i++){
		temp=mat->data[0][i];
		mat->data[0][i]=mat->data[main_elem_index][i];
		mat->data[main_elem_index][i]=temp;
	}
	temp=b->data[0][0];
	b->data[0][0]=b->data[main_elem_index][0];
	b->data[main_elem_index][0]=temp;
	
	double n;
	for(int i=0;i<mat->r-1;i++){
		for(int j=i+1;j<mat->r;j++){
			if(mat->data[i][i]==0){
				return 1;
			}
			n = (mat->data[j][i] / mat->data[i][i]);
			for(int k=0;k<mat->c+1;k++){
				mat->data[j][k]= mat->data[j][k] - (mat->data[i][k] * n);
			}
			b->data[j][0] = b->data[j][0] - (b->data[i][0] * n);
		}
	}


	
	

		return 0;
}

