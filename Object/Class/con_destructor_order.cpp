//OS use stack space to allocate memory space for object,so the order is first in last out.

#include <iostream>

class Order
 {
 public:
 	Order(){
 		std::cout<< "construtor have been used\n";
 	}
 	~Order(){
 		std::cout<< "destructor have been used\n";
 	}
 }; 

 int main(int argc, char const *argv[])
 {
 	Order a;
 	Order *p;	//creater a pointer willn't call constructor function.
 	Order *pp = new Order;	//new Order will call constructor,in a word ,constructor is new;deconstructor is delete;
 	delete pp;
 	return 0;
 }