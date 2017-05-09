//use static data member to implent data shared among objects.Meanwhile ,it provide a way for communication among object.
//static data member belongs to class ,not object. so it also provide a way to commuction among objects.

#include <iostream>

class Order
 {
 	static int counter;	
 public:
 	Order(){
 		std::cout<< "construtor have been used\n";
 		counter++;

 	}
 	~Order(){
 		std::cout<< "destructor have been used\n";
 	}
 	void ShowTimes(){
 		std::cout<< counter <<'\n';
 	}
 }; 

int Order::counter = 0;	//initlize static data member out of class

 int main(int argc, char const *argv[])
 {
 	Order a;
 	//if counter is private,it only access by function member.Else if public, it also directly access by Order::counter.
 	a.ShowTimes();
 	Order b;
 	a.ShowTimes();
 	return 0;
 }