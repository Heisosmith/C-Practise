//a friend function can directly access any object private data.
//just like your friend can read your private notebook with your propromt.
//the define of private data has different meaning for different person.
//but this is not good,because it can access full pravite data.

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
	friend void SetHour(Time& a);	//shouquan to the function out of class.
	friend int  GetHour(Time a);
};

void SetHour(Time& a){
	a.m_hour = 12;
}

int  GetHour(Time a){
	return a.m_hour;
}

int main(int argc, char const *argv[])
{
	Time a;
	std::cout<< GetHour(a)<<'\n';
	SetHour(a);
	std::cout<< GetHour(a)<<'\n';
	return 0;
}