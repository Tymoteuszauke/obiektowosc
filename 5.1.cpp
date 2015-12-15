#include <iostream>


class zespolone {
	
	
	private:
		double im, re;

	public:

		zespolone(double x=0.0, double y=0.0){re=x; im=y;}
		double real() const {return re;}
		double imag() const {return im;}
		
};

std::ostream& operator<<(std::ostream& wy, zespolone z) /* operator wyjœcia */ {

	if(z.imag()==0.0)wy << z.real();
	else wy << '(' << z.real() << ',' << z.imag() << ')';
	return wy;
}

zespolone operator+(zespolone u, zespolone v) {

	double x=u.real()+v.real();
	double y=u.imag()+v.imag();
	return zespolone(x, y);
}

std::istream& operator>>(std::istream& we, zespolone& z) // operator wejœcia
{

	double x = 0, y = 0; // x –czêœæ rzeczywista, y –czêœæ urojona
	char c = 0;
	
	we >> c;

	if(c == '('){ // zosta³ odczytany nawias (
 		we >> x >> c; // odczytanie czêœci rzeczywistej x i jednego znaku
 		if(c == ',')we >> y >> c; // zosta³ odczytany przecinek tzn. liczba postaci(x, y)
 		if(c != ')')we.clear(std::ios::badbit); // brak nawiasu koñcz¹cego liczbê (x) lub (x, y)
	} // ustawienie bitu badbit
	else {
 		we.putback(c); // odczytany znak nie jest nawiasem (i jest zwracany
 		we >> x; // do strumienia wejœciowego)
	}

	if(we) z = zespolone(x,y);
	return we;
}

int main() {
	
	zespolone z1, z2;
	std::cout << "podaj pierwsza liczbe\n";
	std::cin >> z1;
	std::cout << "podaj druga liczbe\n";
	std::cin >> z2;
	std::cout << "suma wynosi " << z1+z2 << std::endl;


	return 0;
}

