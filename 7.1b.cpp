#include <iostream>


class Czas {
	
	private:
		int godzina;
		int minuta;
		static char separator;
	
	public:
		Czas(int godz, int min)
		:godzina(godz), minuta(min){}
		
		static void setSep(char sep) {separator = sep;}
		
		friend std::ostream &operator<< (std::ostream  &output, Czas &d){ 
			
			output << d.godzina << Czas::separator << d.minuta ;
	
	           
		}
			
	
	
};

char Czas::separator = NULL;



int main() {
	
	Czas czas(10, 21);
	Czas::setSep(':');
	
	std::cout << czas ;
	
	return 0;
}
