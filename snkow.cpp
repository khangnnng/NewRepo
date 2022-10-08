



#include <fstream>
































#include "graphics.h"







#include <iostream>


class snkow {
public:





	double*** R;
	double*** C;
	double*** L;









	snkow() {

		double* a = new double[81];
		R = new double**[9];
		C = new double**[9];
		L = new double**[9];


		for (int i = 0; i < 9; i++) {
			R[i] = new double*[9];
			for (int j = 0; j < 9; j++) {

				R[i][j] = &(a[9 * i + j]);
				C[i][j] = &(a[i +9* j]);








				//L[i][j] =R[ (i+j) / 3][j];





			}
		}





		do {

		}
	}
};
























