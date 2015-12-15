#include <iostream>
#include <stdexcept>



class Tablica2 {
	
	private:
		int wiersze;
		int kolumny;
		double **tablica;
	
	public:
		Tablica2(int w, int k)
		:wiersze(w), kolumny(k){
			tablica = new double*[w];
			for(int i = 0; i < w; i++) {
				tablica[i] = new double[k];
				
			}
		}
		
		~Tablica2(){
  			for(int i=0;i<wiersze;i++)
    			for(int j=0;j<kolumny;j++)
      				delete[] tablica[i];
      	}
		
		int getWiersze() {return wiersze;}
		int getKolumny() {return kolumny;}
		
		double &operator()(int a,int b) {
   			return tablica[a][b];
    	}
   
};



const int out_of_memory = 13;

void sprawdz_indeks(Tablica2 x) {

	int w, k;
	
	std::cout << "\npodaj dwie liczby\n";
	std::cin >> w >> k;
	
	if (w > x.getWiersze() || k > x.getKolumny()) {
		throw out_of_memory;
	}
	
	std::cout << x(w, k);
	
}



int main() {
	
	Tablica2 p(3, 3);
	
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
			std::cout << "podaj liczbe\n";
			std::cin >> p(i, j);
		}
	}
	
	int w, k;
	

	
	for(i = 0; i < 3; i++){
		printf("\n");
		for(j = 0; j < 3; j++) {
			std::cout << p(i,j);
		}
	}
	
	
	try {
		sprawdz_indeks(p);
	} catch (int i) {
		if (i == out_of_memory) {
			std::cerr << "Poza pamiecia tablicy";
		}
	}
			
	return 0;
}
