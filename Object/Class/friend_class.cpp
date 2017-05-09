//friend function shouquan to a function, friend class shouquan to a class,meaning shouquan to all function of friend class.

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
	friend class Show;
};

class Show{
public:
	void ShowTime(Time& a){
		std::cout<< a.m_hour<<':'<< a.m_minute<<':'<< a.m_second<<'\n';	//directly access Time object private data.
	}
};


int main(int argc, char const *argv[])
{
	Time a;
	Show s;
	s.ShowTime(a);
	return 0;
}