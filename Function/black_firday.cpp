//计算并输出给定年份有几个黑色星期五
//条件：已知1990年1月1日是星期一

#include <iostream>
using namespace std;

int count_5_13( int year);
bool isLeapYear( int year);

int main(){
    int year;
    cin>> year;
    cout<< count_5_13( year) <<endl;
    return 0;
}

int count_5_13( int year){
    int date;
    long days = 0;
    int m,y,c = 0;
    if( year < 1900)
        return -1;
    days = 12;
    for(y=1900;y<year;y++){
        days += 365;
        if(isLeapYear(y) == 1)
            days++;
    }
    date = ((days % 7) +1) % 7;
    c = ( date == 5) ? 1 : 0;
    for(m=1;m<12;m++){
        switch(m){
            case 1: case 3: case 5: case 7: case 8: case 12:
                days = 31; break;
            case 4: case 6: case 9: case 11:
                days = 30; break;
            case 2:
                days = 28;
                if( isLeapYear(year) == 1) days = 29;
                break;
        }
        date = ((days % 7) + date) % 7;
        if( date == 5) c++;
    }
    return c;
}

bool isLeapYear( int year){
    if( year%4==0&&year%100!=0||year%400==0)
        return true;
    else
        return false;
}

