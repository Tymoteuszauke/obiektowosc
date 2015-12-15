#include <iostream>


class zespolone(

	private:
		double re;
		double im;
	
	public:
		zespolone(double x, double y)
		:re(x),im(y){}

		double real() const {return re;}
		double imag() const {return im;}
};

zespolone operator-(zespolone u)
{
return zespolone(-u.real(), -u.imag());
}

zespolone operator+(zespolone u, zespolone v)
{
	
double x=u.real()+v.real();
double y=u.imag()+v.imag();
return zepolone(x, y);

}


int main()
{
	zespolone z1(2.0, 4.0), z2(-3.0, 1.0), z3(0.0, 0.0), z4(0.0, 0.0);
	z3= -z1;
	std::cout<<"liczba przeciwna jest rowna: "<<z3.real()<<"+i"<<z3.imag();
	z4=z1+z2;
	std::cout<<"suma wynosi: "<<z4.real()<<"+i"<<z3.imag();
	return 0;
}
