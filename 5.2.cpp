#include <iostream>

/*
class wyjatek{};
void f(int x)
{
std::cout << x;
if(x>10)throw wyjatek();
std::cout << " koniec funkcji\n";
}
int main()
{
try{
 f(7);
 f(16);
 f(2);
}
catch(wyjatek){
 std::cout << " zostal zgloszony wyjatek\n";
}
std::cout << "koniec\n";
return 0;
}
*/


/*
class wyjatek{};

void f(int x)
{

	std::cout << x;
	if(x>10)throw wyjatek();
	std::cout << " koniec funkcji\n";
}

int main()
{

//	f(11);

	try{
 		f(7);
 		f(16);
 		f(2);
	}
	catch(wyjatek){
 	std::cout << " zostal zgloszony wyjatek\n";
	}

	std::cout << "koniec\n";
	return 0;
}
*/

/*

class wyjatek{};

class klasa{
		int a;
		public:
			klasa(int b):a(b){std::cout << "konstruktor a = " << a << std::endl;}
			~klasa(){std::cout << "destruktor a = " << a << std::endl;}
	};

void f1(int x) {

	std::cout << "poczatek f1\n";
	klasa k10(10);
	if(x<0)throw wyjatek();
	klasa k11(11);
	std::cout << "koniec f1\n";

}
void f2(int x) {
	
	std::cout << "poczatek f2\n";
	klasa k20(20);
	f1(x);
	klasa k21(21);
	std::cout << "koniec f2\n";
}

void f3(int x) {

	std::cout << "poczatek f3\n";
	klasa k30(30);
	try{
 		f2(x);
	}
	catch(wyjatek){
 	std::cout << "zostal wychwycony wyjatek\n";
	}
	
	klasa k31(31);
	std::cout << "koniec f3\n";
}

int main() {

	f3(5);
	f3(-5);
	return 0;
}

*/

#include <iostream>
struct wyjatek{
 int k;
 wyjatek(int j):k(j){}
};
void f(int x)
{
std::cout << "x= " << x << std::endl;
if(x>10)throw wyjatek(x);
}
int main()
{
try{
 f(7);
 f(16);
 f(17);
}
catch(wyjatek w){
 std::cout << "zostal zgloszony wyjatek x=" << w.k << std::endl;
}
return 0;
}

