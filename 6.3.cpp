#include <iostream>
class tablica {
	public:
		
		tablica(int j)
		:rozmiar(j), tab(new int[j]){}
		//tablica(int j, int w)
		//:rozmiar(j), tab(new)
		
		int getRozmiar(){return rozmiar;}
		
		~tablica(){delete [] tab;} // destruktor
		int& operator[](long k){return tab[k];}
	private:
		int* tab;
		int rozmiar;
};

int main() {
	
	tablica t(10);
	for(int j=0; j<10; ++j)t[j]=j*j;
	
	std::cout << "t[3]=" << t[20] ; 
	

	return 0;
}
