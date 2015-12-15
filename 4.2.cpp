#include <iostream>

class ulamek {
	
	private:
		int licznik;
		unsigned int mianownik;
	
	public:
		ulamek(int licz = 0, unsigned int mian = 1)
		//:licznik(licz), mianownik(mian) {}
		{licznik = licz; mianownik = mian;}
		
		int gcd(int, int);
		int getLicz() const {return licznik;}
		int getMian() const {return mianownik;}
		
		ulamek& operator*= (ulamek a) {
			
			this->licznik = a.licznik*this->licznik;
			this->mianownik = a.mianownik*this->mianownik;
			return *this;
		}
		
		ulamek& operator*(ulamek a){
 			//return ulamek(licznik, mianownik)*= a;
 			
 			ulamek b = *this;
 			return b*=a;
		
		}

		
		ulamek& operator-() {
			this->licznik = -this->licznik;	
			return *this;
		}
		
		ulamek operator+(ulamek a) {
			
			int n = licznik*a.mianownik+a.licznik*mianownik;
        	int d = mianownik*a.mianownik;
        
			return ulamek(n/gcd(n,d),d/gcd(n,d));
		}
		
		bool operator<(ulamek a) {
			
			
			if (((float)licznik)/((float)mianownik) < ((float)a.licznik)/((float)a.mianownik))
			return true;
			return false;
		}
	
};

int ulamek::gcd(int n, int d){
	
	int remainder;
	
	while (d != 0){
		
		remainder = n % d;
		n = d;
    	d = remainder;
    }
    return n;
}

std::ostream& operator<<(std::ostream& wy, ulamek z) {
	
	wy << '(' << z.getLicz() << '/' << z.getMian() << ')';
	return wy;
}

std::istream& operator>>(std::istream& we, ulamek& z) {
	
	int x = 0;
	int y = 1;
	
	char c = 0;
	
	we >> c;
	
	if (c == '(') {
	
		we >> x >> c;
		if (c == '/') {
			we >> y >> c;
		}
		if (c != ')') {
			we.clear(std::ios::badbit);
		}	
	} else {
		we.putback(c);
		we >> x;
	}
	
	if(we) {
		z = ulamek(x,y);
	}
	
	return we;
}


int main () {
	
//	ulamek p(2, 3);
//	ulamek d(5, 7);
	
/*	p = p*d;
	
	std::cout << p.getLicz() << " " << p.getMian();
	
	ulamek s1(2, 5);
	ulamek s2(5, 7);
	
	

	printf("\n");
		
	std::cout << s1.getLicz() << " " << s1.getMian();
	
	ulamek k1(3,5);
	ulamek k2(4,7);
	
	ulamek abc(k2);
	printf("\n");
	//std::cout <<"abc: " <<abc.getLicz() << " " << abc.getMian();
	printf("\n");
	
	ulamek k3(s1+s2);
	ulamek k4(k1+k2);
	
	printf("\n");
	
	std::cout << k3.getLicz() << "/" << k3.getMian()<< "\n" << k4.getLicz() << "/" << k4.getMian();
	  
	
	bool t = k3<k4;
	
	printf("\n");
	
	std::cout << t;
	
	*/
	
	ulamek z, g;
	

	
	std::cout << "Podaj pierwszy ulamek\n";
	std::cin >> z ;
	std::cout << z <<"\n";
	std::cout << "Podaj drugi ulamek\n";
	std::cin >> g;
	std::cout << "iloczyn wynosi " << z * g << std::endl;
	
	bool t = z < g;
	
	std::cout << t;
	
	
	
	
	return 0;
}
