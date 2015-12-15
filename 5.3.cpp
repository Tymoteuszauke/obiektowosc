#include <iostream>
#include <cstdlib>
#include <new> 

void no_memory () {
  std::cout << "Failed to allocate memory!\n";
  std::exit (1);

}


int main() {
	
	std::set_new_handler(no_memory);
	
	int i, j, k=1;
	bool s;
	char *p;
	
	while(true) {
		
		try {
			
			p = new char[k];
			 
		} catch(std::bad_alloc) {
			std::cerr << "brak pamieci\n";
			s = true;
			break;
			
		}
		
		if (s != true) {
			j = k;
		}
		
		std::cout << k << " ";
		delete[] p;
	
		k *= 2;
	}
	
	char *z = new char[j];

	std::cout << "j = " << j;
	
	return 0;
}
