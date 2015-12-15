#include <iostream>

class Dowolnie {
	
	float z;
	
	public:
		Dowolnie(float rozmiar)
		:z(rozmiar) {}
		
		virtual void wyswietl() {
			std::cout << z << std::endl;
		}

};

class P: public Dowolnie {
	
	float f;
	
	public:
		P(float fl, float roz)
		:Dowolnie(fl), f(roz) {}
		
		virtual void wyswietl() {
			Dowolnie::wyswietl();
			std::cout << f << std::endl;
		}
		
	
};

int main () {
	
	P a(3,7);
	
	Dowolnie d = a, &b = a, *q = &a;
	
	d.wyswietl();
	b.wyswietl();
	q->wyswietl();
	
	
	
	return 0;
}
