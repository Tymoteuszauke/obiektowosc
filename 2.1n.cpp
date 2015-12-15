#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

#define N 50

using namespace std;

void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        swap(*(str+start), *(str+end));
        start++;
        end--;
    }
}

 

void wyswietl(int num, int base = 10){
	
	char* str;
    int i = 0;
    bool isNegative = false;
 

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
    std::cout << str << "\npodstawa " << base << "\n";
    }
 

    if (num < 0 && base == 10)
    {
        isNegative = true;
        num = -num;
    }
 

    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }
 

    if (isNegative)
        str[i++] = '-';
 
    str[i] = '\0'; 
 

    reverse(str, i);
 
    std::cout << str << "\npodstawa " << base << "\n";
}
	
	
	


int main () {
	
	int x;
	
	std::cin >> x;
	
	wyswietl(x);
	wyswietl(x, 2);
	wyswietl(x, 18);
	
	
	
}
