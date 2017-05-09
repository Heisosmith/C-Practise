
#include <iostream>

class int
{
	int k;
public:
	D(int x=1):k(x){}
	~D(){std::cout<<k;}
};

int main(int argc, char const *argv[])
{
	D d[] = {D(3),D(3),D(3)};
	D *p = new D<[2];	//use default value
	delete []p;
	return 0;
}

output: 11333