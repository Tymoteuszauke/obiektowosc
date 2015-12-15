#include <iostream>

int f1(int x){return 2*x;}

double f1(double x){return 2.5*x;}

int f1(int x, int y){return x+y;}

double f1(double x, int y){return 1.5*x+y;}

void f(char x){std::cout << x << std::endl;}
void f(long x){std::cout << x << std::endl;}
void f(int x, int y){std::cout << x << " " << y << std::endl;}
void f(double x, double y = 0.0){std::cout << x <<" "<< y << std::endl;}

double f3(int x){return 5.0*x*x;}
double f3(double x){return 5.0*x*x;}
int f3(int x){return 5*x*x;}

int main() {
std::cout << f1(2.0) <<" "<< f1(2, 1.0) <<" "<< f1('a') << std::endl;

f(1);
f(2.0);
f(1, 2.0);

std::cout << f3('a') << " "<< f3(1) << " " << f3(2.0) << std::endl;

return 0;

}
