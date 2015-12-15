#include <iostream>
#include <cstring>


class napis{
	private:
		
		int dlg; 
		char *str;
	
	public:

		napis(const char *s="");
		napis(const napis& np); 
		~napis(){delete[] str;} 
//		napis& operator=(const napis& np); 
		friend std::ostream& operator<<(std::ostream& wy, const napis &np);
};


napis::napis(const char *s) {
	dlg=std::strlen(s);
	str=new char[dlg+1];
	std::strcpy(str, s);
}

napis::napis(const napis& np) {
	dlg=np.dlg;
	str=new char[dlg+1];
	std::strcpy(str, np.str);
}
/*
napis& napis::operator= (const napis& np) // do poprawienia (koniec zadania 6.1)
{

	if(&np == this) return *this;

	delete[] str;
	dlg=np.dlg;
	str=new char[dlg+1];
	std::strcpy(str, np.str);
	return *this;
}*/

std::ostream& operator<<(std::ostream& wy, const napis &np) {
	wy << np.str;
	return wy;
}


int main() {
	
//	napis n1("taki sobie napis"), n2;
//	napis n3(n1);
//	n2=n1;
//	std::cout << n2 << std::endl;
//	std::cout << n2 << " " << n3 << std::endl;
	
	napis n1("kot");
	
	napis n3("pies");
	
	n3=n1;
	
	return 0;

}

