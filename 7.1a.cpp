#include <iostream>

class A {
	
	private:
		int x;
		static int y;

	public:
		
		A()
		:x(10){}
		void f() {x -= 4;}
		static void g() {y += 2;}
		static A *s_instance;
		//static void h() {x += 10;}
		void p() {std::cout << "x= " << x << " y= " << y << std::endl;}
		
	static A *instance() {
        if (!s_instance)
            s_instance = new A;
        return s_instance;
    }
		
};


int A::y = 5;
A *A::s_instance = 0;



int main() {

	A a, b;
	//a.h();
	//b.h();
	a.p();
	b.p();
	a.f();
	b.f();
	a.p();
	b.p();
	a.g();
	b.g();
	a.p();
	b.p();
	
	A::instance()->f();
	A::g();
	a.p();
	b.p();

	return 0;
}

