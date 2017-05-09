// Stack ElemType is char.

#include <iostream>
#include "stack.h"

int main(){
	char str[256] = {0};
	std::cout<< "Input a expression with kuohao: \n";
	std::cin>> str;
	Stack s;
	char e;
	int sign=0;
	s.InitStack();
	for(int i=0;i<256;i++){
		if(str[i]=='(' || str[i] == '[' || str[i] == '{')
			s.Push(str[i]);
		if(str[i] == ')'){	// runtime error between == and =
			s.GetTop(e);
			if(e == '(') s.Pop(e);
			else {
				sign = 1;
				break;
			}
		}
		if(str[i] == ']'){
			s.GetTop(e);
			if(e == '[') s.Pop(e);
			else{ 
				sign = 1;
				break;
			}
		}
		if(str[i] == '}'){
			s.GetTop(e);
			if(e == '{') s.Pop(e);
			else{ 
				sign = 1;
				break;
			}
		}
		// because ) can match GetTop() when s.top == s.base.
		if( s.StackEmpty()){
			if(str[i+1] ==')'||str[i+1] ==']'||str[i+1] =='}'){
				sign = 1;
				break;
			}
		}
	}
	if( !s.StackEmpty() || sign) //! logic notice
		std::cout<< "Not matching" <<std::endl;
	else
		std::cout<< "matching " <<std::endl;
	return 0; 
}
