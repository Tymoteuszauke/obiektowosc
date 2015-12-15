#include <iostream>

namespace xxx {
void f(int x) {
	std::cout << x;}
}

void f(double x) {
	std::cout<< 2*x;
}



int main () {
	using xxx::f;	
	f(2.0);
}
