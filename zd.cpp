#include <iostream>

class Dupa {
	
	private:
		double a;
		double b;
		
	public:
		Dupa(double acz, double bcz)
			:a(acz), b(bcz) {}
			virtual ~Dupa(){}
			
		virtual double getSuma() {return a + b;}
		 
};

class Pipa: public Dupa {
	
	private:
		double c;
		
	public:
		Pipa(double ad, double bd, double cd)
		:Dupa(ad, bd), c(cd){}
		
		virtual double getSuma() {return c + Dupa::getSuma();}
		
	
};

int main () {
	
	Dupa *tab[3];
	
	tab[0] = new Dupa(1.2,1.5);
	tab[1] = new Pipa(1.4, 1.8, 2.0);
	tab[2] = new Pipa(1.6, 1.1, 3.0);
	
	double suma = tab[0]->getSuma() + tab[1]->getSuma() + tab[2]->getSuma();
	
	std::cout << suma;
	
	return 0;
	
	
	
	
	
}
