//when class data member is object,the class named complex class.
//dajimu
//how to compresion class concept: hour,minute,second the same as int, a variable have many values. one map more.
//a special class : only have a data type,structure have one, <=> basic data type.

#include <iostream>

class Hour
{
	int sub_hour;
public:
	Hour(int hour){
		sub_hour = hour;
	}
	~Hour(){}
	int GetHour(){
		return sub_hour;
	}
};

class Minute
{
	int sub_minute;
public:
	Minute(int minute){
		sub_minute = minute;
	}
	~Minute(){}
	int GetMinute(){
		return sub_minute;
	}
	
};

class Second
{
	int sub_second;
public:
	Second(int second){
		sub_second = second;
	}
	~Second(){}
	int GetSecond(){
		return	sub_second;
	}
	
};

class Time
{
	Hour m_hour;
	Minute m_minute;
	Second m_second;
public:
	Time(Hour hour,Minute minute,Second second):m_hour(hour),m_minute(minute),m_second(second){}//object assign to object  
	~Time(){}
	void ShowTime(){
		std::cout<< m_hour.GetHour()<<':'<< m_minute.GetMinute()<<':'<< m_second.GetSecond()<<'\n';
	}
};


int main(int argc, char const *argv[])
{

	Hour h(12);	//first initlize sub class object,or else will result in type convert problem.
	Minute m(0);
	Second s(0);
	Time a(h,m,s);
	a.ShowTime();
	return 0;
}


