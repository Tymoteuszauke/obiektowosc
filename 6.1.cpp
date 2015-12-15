#include <iostream>

class A {
	public:
		virtual void f(){std::cout << "funkcja f, klasa A\n";}
		void g(){std::cout << "funkcja g, klasa A\n";}
};

class B: public A {
	public:
		void f(){std::cout << "funkcja f, klasa B\n";}
		void g(){std::cout << "funkcja g, klasa B\n";}
};

class C: public A {
	public:
		void f(){std::cout << "funkcja f, klasa C\n";}
		void g(int x){std::cout << x << "funkcja g, klasa C\n";}
		int g(){std::cout << "funkcja g, klasa C\n";}
};

class D: public A{
	public:
		void f(int x){std::cout << x << "funkcja f, klasa D\n";}
		//int f(){std::cout << "funkcja f, klasa D\n";}
		void g(){std::cout << "funkcja g, klasa D\n";}
};

void u(A x) {
x.f();
x.g();
}

void w(A& y) {
y.f();
y.g();
}


int main() {
A a;
B b;
C c;
D d;
u(a); std::cout << "\n" ;
w(a); std::cout << "\n" ;
u(b); std::cout << "\n" ;
w(b); std::cout << "\n" ;
w(c); std::cout << "\n" ;
w(d); std::cout << "\n" ;


A x1 = a, x2 = b, x3 = d;
A &r1 = a, &r2 = b, &r3 = d;
r3.f();
r3.g();


return 0;
}
