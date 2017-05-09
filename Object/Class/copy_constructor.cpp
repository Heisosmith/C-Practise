//copy constructor take place when use a object to initlize other object,not assign.
//Generally,when function parameter and function return is object,it also will take place.

#include <iostream>

class Time
{
	int m_hour;
	int m_minute;
	int m_second;
public:
	Time(int hour=0,int m_minute=0,int m_second=0);
	Time(Time& a);	//copy_structor function
	~Time(){}
	void SetHour(int hour);
	void SetMinute(int minute);
	void SetSecond(int second);
	void Print();
};


int main(int argc, char const *argv[]){
	Time a(12,0,0);
	a.Print();
	Time b = a;
	b.Print();
	return 0;

}


Time::Time(int hour,int minute,int second){
	m_hour = hour;
	m_minute = minute;
	m_second = second;
}

Time::Time(Time& a){
	m_hour = a.m_hour;
	m_minute = a.m_minute;
	m_second = a.m_second;
}

void	Time::SetHour(int hour){
	m_hour = hour;
}

void	Time::SetMinute(int minute){
	m_minute = minute;
}

void	Time::SetSecond(int second){
	m_second = second;
}

void	Time::Print(){
	std::cout<< m_hour<<':'<< m_minute<<':'<< m_second<<'\n';
}
