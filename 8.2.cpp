#include <iostream> 

template <class typ>
typ find(typ first, typ last) {
   
   typ max=first;
   typ next=first;
   
   while(next != last-1) {
     
	 if(*max<*next) {
	 	*max=*next;
	 } else {
	 	next++;	
	 }
       
   }
  return max;
}
int main() {

	int
	a[10]={4, 3, 1, 2, 1, 23, 7, 3, 1, 6},
	b[15]={6, 7, 5, 8, 9, 7, 2, 3, 7, 1, 4, 9, 5, 3, 2};
	int*p=find(a+2, a+9);
	std::cout<<*p<<std::endl;;

}
