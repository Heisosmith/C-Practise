//Actuallu,object is a structure with access limit.
//Class data member save to object itself,but class function member not save to object.
//Class function member shared by all object.
//when object call call function member ,object will pass its address to class function member by this pointer.


#include <iostream>

class Time
{
	int m_hour;
	int m_minute;
	int m_second;
public:
	Time(int hour,int minute,int second):m_hour(hour),m_minute(minute),m_second(second){}
	~Time(){}
	//void ShowTime(Time* const this)
	void ShowTime(){
		//std::cout<< this->m_hour<<':'<< this->m_minute<<':'<< this->second<<'\n';
		std::cout<< m_hour<<':'<< m_minute<<':'<< m_second<<'\n';
	}
};

int main(int argc, char const *argv[])
{
	Time a(12,0,0);
	//a.ShowTime(&a)
	a.ShowTime();
	return 0;
}
