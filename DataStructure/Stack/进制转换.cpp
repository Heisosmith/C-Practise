
#include <iostream>
#include <malloc.h>
#include "stack.h"


int main(){
	char ch[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int base;
	std::cout<<"Input the base: "<<std::endl;
	std::cin>> base;
	int num;
	std::cout<<"Input the number: "<<std::endl;
	std::cin>> num;
	Stack s;
	s.InitStack();
	int digit;
	do{
		digit = num % base;
		s.Push(digit);
		num = num / base;
	}while( num);
	std::cout<<"Convert Result is: "<<std::endl;
	int e;
	while( !s.Pop(e)){
		std::cout<< ch[e];
	}
	std::cout<<std::endl;
	return 0;
}
