#include <iostream>
#include <cassert>
#include <cmath>

void f(double x) {

	//assert(x>=0);
	std::cout << "pierwiastek kwadratowy z " << x << " wynosi " << sqrt(x) << std::endl;
}


class tablica10 {
	
	private:
		int rozmiar;
		long *tab;
	
	public:
		tablica10(int roz)
		:rozmiar(roz), tab(new long[rozmiar]) {}
		
		long& operator[](long k) const {
			
			//assert(k<10 && k>0);
			return tab[k];
		}
		
		tablica10& przypisz(int indeks, long wartosc) {
			tab[indeks] = wartosc;
			return *this;
		}
		

	
		
};

int main() {

	const tablica10 t(11);
	//t.przypisz(11, 6);
	//t.przypisz(11, 5);
	t[11] = 5;
	
	
	//	std::cout << "t[3]" << t[3] ;
	
	f(25.0);
	f(2.0);
	f(-4.0);

	
	std::cout << "t[11]=" << t[11] << std::endl;
	
	return 0;
}
