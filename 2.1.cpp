#include <iostream>

#include <cmath>



int f(int x)
{
	return x;
	
}
void f(int x, int y = 10)
{
	int decimal = 0, rem = 0, base = 1;
	int num = x;
	 while (x > 0)
    {
        rem = x % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        x = x / 10;
    }
	
	printf("Decimal value for %d is %d\n", num, decimal);
}


void f(double x, int y = 2)
{
	
	std::cout << "Binary value for " << (int)x << " is: ";

	int i = 0;
	for (i = 8; i >= 0; i--){
		if (((int)x & (1 << i)) != 0){
			printf("1");
		}
		else{
			printf("0");
		}
	}


	std::cout << "\nWywolano double int\n";
		
}



typedef struct ulamek {
	int licznik;
	unsigned mianownik;
} ulamek;

int max(int x, int y) {
	if (x > y) {
		return x;
	} 
	return y;
}

int max(int x, int y, int z)
{
	if (x > y && x > z) return x;

	if (y > x && y > z) return y;

	if (z > x && z > y) return z;

}

ulamek max(ulamek a, ulamek b) {

	if ((a.licznik / a.mianownik) > (b.licznik / b.mianownik)) return a;
	else return b;

}



int main()
{
	int x = 8;
	int y = 7;
	int z = 9;

	ulamek a;
	a.licznik = 27;
	a.mianownik = 38;

	ulamek b;
	b.licznik = 61;
	b.mianownik = 83;
	
	
	f(1011, x); 
	f(3.0, 2);
	f(10111, 10);

	std::cout << "";

	std::cout << max(123, 498) << "\n";
	std::cout << max(66, 25, 132) << "\n";

	ulamek c = max(a, b);

	std::cout << c.licznik << "/" << c.mianownik << "\n";



	system("pause");
	return 0;
}

