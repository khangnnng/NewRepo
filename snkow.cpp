



#include <fstream>














#include "CMakeProject_snkow.h"

















#include "graphics.h"







#include <iostream>
















typedef double* T;












int mid(int n) {
	return n / 2 + n%2;
}





template<typename TT, int m,int n>


class snkow {
public:
	typedef TT* T;
	typedef Array<T> can;

	Array<can> R, C;

	
	T a = new double[m * n];




	snkow() {



		
		do {

		}
	
		ar();

	}




	void ar() {
		for (int i = 0; i < m; i++) {
			R.append(new can);
			int ls = R.size() - 1;
			for (int j = 0; j < n; j++) {
				R[ls].append(&(a[m * i + j]));
			}
		}









		for (int i = 0; i < m; i++) {
			C.append(new can);
			int ls = C.size() - 1;
			for (int j = 0; j < n; j++) {
				C[ls].append(&(a[i + n * j]));
			}
		}

		
	}

		
};



template<typename TT, int m, int n, int p>


class snkow1 :public snkow {

	snkow1() { snkow(); }

	typedef TT* T;
	typedef Array<T> can;

	Array<can> L;

	void ar() override {
		if (p == 1) return;
		else

			if !(m % p == 0 && n % p == 0) {
				cout << " not valid \n "; return;
			}
			else
			{

				for (int i = 0; i < m; i++) {
					C.append(new can);
					int ls = C.size() - 1;
					for (int j = 0; j < n; j++)


				for (int i = 0; i < m; i++) {
					L.append(new can);
					snkow<TT, m / p, m, 1> lsm;

					delete[] lsm.a; lsm.a = this-> & (a[i*m]);






					int ls = C.size() - 1;
					for (int j = 0; j < n; j++) {
						C[ls].append(&(a[i + n * j]));
					}
				}




			}
	}
};



















