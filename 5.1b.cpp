#include <iostream>

class Czas {
	
	public:
		Czas(int g, int m): godzina(g), minuta(m){}
	
		int godz() const {return godzina;}
		int min() const {return minuta;}
		
		virtual std::ostream& pisz(std::ostream& wy) const {
			wy << godzina << ":" << minuta;
			return wy;
		}
	
	virtual ~Czas(){};
	
	private:
	
		int godzina, minuta;
};


class CzasDokladny: public Czas{
	
	public:
		CzasDokladny(int g, int m, int s): Czas(g, m), sekunda(s){}
		int sek() const {return sekunda;}
		
		virtual std::ostream& pisz(std::ostream& wy) const {
			wy << godz() << ":" << min() << ":" << sekunda;
			return wy;
		}
	
	private:
		int sekunda;
};

std::ostream& operator<<(std::ostream &wy, Czas &m) { 
   
   return m.pisz(wy);
}

int main() {

	Czas *p1 = new Czas(8, 30);
	Czas *p2 = new CzasDokladny(10, 20, 7);
	
	std::cout << *p1 << "\n" << *p2 << std::endl;
	delete p1;
	delete p2;
	return 0;
}
