
#include "stack.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	Stack<int> s;
	s.InitStack();
	s.Push(3);
	int e;
	s.GetTop(e);
	std::cout<< e <<std::endl;
	return 0;
}