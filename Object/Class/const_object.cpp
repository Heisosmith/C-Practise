//use const keyword to object or function for solve security problem by friend rule.
//const object: it only call const function member.
//const function: it can only const function member within class,not friend function.
//const function patameter: it's good. 

#include <iostream>

class Time
{
	int m_hour;
	int m_minute;
	int m_second;
public:
	Time(int hour=0,int minute=0,int second=0){
		m_hour = hour;
		m_minute = minute;
		m_second = second;
	}
	~Time(){}
	void GetHour()const{
		//m_hour = 12;		cancel comment,you will have a error.
		//Sethour(this)		no matching function for call to 'SetHour'
		std::cout<< m_hour<<'\n';	//if const function member call nont const function member ,the value may be changed??
	}
};

int main(int argc, char const *argv[])
{
	Time const a;
	a.GetHour();
	//a.SetHour(10);	//error message:'this' argument has type 'const Time', but function is not marked const
	return 0;
}