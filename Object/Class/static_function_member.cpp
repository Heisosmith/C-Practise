//static function member also belongs to class,not object.
//when it access object data member,it must specify which object.
//static function member hasn't this pointer due to only one class.

#include <iostream>

class Order
 {	
 	int m_number;
 	static int counter;	
 public:
 	Order():m_number(1){
 		std::cout<< "construtor have been used\n";
 		counter++;

 	}
 	~Order(){
 		std::cout<< "destructor have been used\n";
 	}
 	static void ShowNumber(Order& b){
 		std::cout<< b.m_number <<'\n';
 	}

 }; 

int Order::counter = 0;	//initlize static data member out of class

 int main(int argc, char const *argv[])
 {
 	Order a;
 	//if counter is private,it only access by function member.Else if public, it also directly access by Order::counter.
 	Order::ShowNumber(a);
 	return 0;
 }