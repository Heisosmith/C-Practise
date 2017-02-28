//重载函数，编写三个同名的计算圆、矩形和三角形面积的函数

#include <iostream>
#include <cmath>
#define Error 1
using namespace std;

double Area(double);
double Area(double,double);
double Area(double,double,double);

const double pi = 3.14;

int main(){
    cout<< "请选择要进行的运算:" <<endl
        << "1   圆" <<endl
        << "2   矩形" <<endl
        << "3   三角形" <<endl;
    int length,width;
    double r,a,b,c;
    char choose;
    cin>> choose;
    switch(choose){
        case '1':
            cout<< "请输入圆的半径:";
            cin >> r;
            if( r<0) return Error;
            cout<< Area(r) <<endl;
            break;
        case '2':
            cout<< "请输入矩形的长和宽:";
            cin >> length >> width;
            if( length <0 || width <0) return Error;
            cout<< Area(length,width) <<endl;
            break;
        case '3':
            cout<< "请输入三角形的三边:";
            cin>> a >> b >> c;
            if( a<0 || b<0 || c<0) return Error;
            cout<< Area(a,b,c) <<endl;
            break;
        default:
            cout<< "输入错误"<<endl;
    }
    return 0;
}

double Area(double r){
    return pi *r *r;
}

double Area(double length,double width){
    return length * width;

}

double Area(double a,double b,double c){
    double t;
    t = ( a +b +c) /2.0;
    return sqrt(t *(t-a) *(t-b) *(t-c));
}

