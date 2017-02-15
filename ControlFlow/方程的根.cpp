//求 ax^2+bx+c=0 的根

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Enter a,b,c :" 
        <<endl;
    cin>>a>>b>>c;
    double x1,x2,dlt,real,imag;
    
    if( a!=0){
        dlt = b*b -4*a*c;
        //注意分母运算部分加括号
        if( dlt>0){
            x1 = (-b -sqrt(dlt))/(2.0*a);
            x2 = (-b +sqrt(dlt))/(2.0*a);
            cout<<"x1= "<< x1 <<endl
                <<"x1= "<< x2 <<endl;
        }
        if( dlt==0){
           x1 = x2 = (-b)/(2.0*a);
           cout<<"x1=x2= "<< x1 <<endl;
        }
        //real实根，imag虚根
        if (dlt<0){
            real = (-b)/(2.0*a);
            imag = sqrt(-dlt)/(2.0*a);
            cout<< "x1= "<< real<<" +"<< imag<<"i" <<endl
                << "x1= "<< real<<" -"<< imag<<"i" <<endl;
        }
    }

    else {
        if(b!=0)
            cout<<"x= "<< -c / b <<endl;
        if(b==0)
            cout<< "无解" <<endl;
    }
    return 0;
}



           

