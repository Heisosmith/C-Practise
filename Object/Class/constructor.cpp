//use constructor function to initlize object because initlize variable will result in ambigous.

#include <iostream>

class Time
{
	int m_hour;
	int m_minute;
	int m_second;
public:
	Time(int hour=0,int m_minute=0,int m_second=0);	//use default value if no parameter pass to it.
	~Time(){}
	void SetHour(int hour);
	void SetMinute(int minute);
	void SetSecond(int second);
	void Print();
};

int main(int argc, char const *argv[])
{
	Time a(12,0,0);
	a.Print();
	Time b;
	b.Print();
	return 0;

}

Time::Time(int hour,int minute,int second){
	m_hour = hour;
	m_minute = minute;
	m_second = second;
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
