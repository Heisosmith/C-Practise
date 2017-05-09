// row edit program

#include <iostream>
#include "stack.h"

int main(){
	Stack cache;
	char e;
	char str[256];
	std::cin>> str;
	cache.InitStack();
	for(int i=0;str[i]!='\0';i++){
		switch( str[i] ){
			case '#' : cache.Pop(e);
						break;
			case '@' : cache.ClearStack();
						break;
			default	 : cache.Push(str[i]);
		}
	}
	//recovery data from cache to user, like ~ operater
	Stack user;
	user.InitStack();
	while(!cache.Pop(e)) user.Push(e);
	user.Print();
	return 0;
}
