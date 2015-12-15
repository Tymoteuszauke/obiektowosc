#include <iostream>
#include <string>

using std::string;

class figura
{
	public:
		figura(int przes, char zn)
		:przesuniecie(przes), znak(zn){}
 
 	void przesun(int dprzes){przesuniecie += dprzes;}
 	int daj_przesuniecie() const {return przesuniecie;}
 	char daj_znak() const {return znak;}
 	virtual void rysuj() const {}
 	virtual int liczba_znakow() const {}
	virtual ~figura(){}
 	

	private:
		int przesuniecie;
 		char znak;
};


class prostokat: public figura {
	public:
		prostokat(int wys, int szer, int przes, char zn)
		:figura(przes, zn), wysokosc(wys), szerokosc(szer){}
		
		int dajWysokosc() const {return wysokosc;}
		int dajSzerokosc() const {return szerokosc;}
		
	
		
		virtual int liczba_znakow() const {
			int a = this->dajSzerokosc(); 
			int b = this->dajWysokosc();
			
			return a *= b;
		}
		
	private:
		int wysokosc;
		int szerokosc;
	//	int przesuniecie;
	//	char znak;
};

class trojkat: public figura
{
	public:
		//trojkat(int wys=5, int przes=0, char zn='*')
 		//:wysokosc(wys), przesuniecie(przes), znak(zn){}
		
		trojkat(int wys, int przes, char zn)
			:figura(przes, zn), wysokosc(wys){}
 
		//void przesun(int dprzes){przesuniecie += dprzes;}
		virtual void rysuj() const;
		//virtual ~trojkat(){}
		
		
		
		virtual int liczba_znakow() const {
			
			int liczba = this->daj_wysokosc();
			int znaki = 0;
			
			for(int i=liczba ; i>0; i--) 
				znaki = znaki + i;
			
			
			return znaki;
			
		}
		
	protected:
		int daj_wysokosc() const {return wysokosc;}

	private:
		int wysokosc;
	//	int przesuniecie;
	//	char znak;
};





void trojkat::rysuj() const
{
	int k;
	int liczba_zn = daj_przesuniecie() + 1;

	for(int w=1; w <= wysokosc; ++w){
		for(k=1; k<=daj_przesuniecie(); ++k)
			std::cout << ' ';
		for(; k <= liczba_zn; ++k)
			std::cout << daj_znak();
	
		++liczba_zn;
		std::cout << std::endl;
	}
}

class trojkat_z_podpisem: public trojkat
{
	public:
		trojkat_z_podpisem(int wys, int przes, char zn, string podp)
		:trojkat(wys, przes, zn), podpis(podp){}
		
 		void podaj_wysokosc(){
 			std::cout << "Wysokosc trojkata wynosi: " << daj_wysokosc() << std::endl;}
 			

 		
		void rysuj() const;
	
	private:
 		string podpis;
};

void trojkat_z_podpisem::rysuj() const
{
	trojkat::rysuj();
	if(!podpis.empty()) {
		std::cout << podpis << std::endl;	
	}
}

void wyswietl (figura& a){
	
	std::cout << a.liczba_znakow();

}


int main() {
	trojkat t1(4, 5, '*');
	trojkat_z_podpisem t2(5, 1, '#', "to jest trojkat");
	trojkat *p;
	
	prostokat p1(5, 5, 3, '%');
	std::cout << p1.liczba_znakow();
	
	p = &t1;
	p->rysuj();
	
	
	
/*	p = &t2;
	p->rysuj();
	
	trojkat& r1=t1;
	r1.rysuj();
	trojkat& r2=t2;
 	r2.rysuj();
 	
 	trojkat t3(3, 0, '*');
 	figura *d = &t3;
 	d->rysuj();
 */	
 	
 	
 	
 	printf("\n");
	wyswietl(p1);
	printf("\n");
 	
 	
 	return 0;
}
