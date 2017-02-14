//用switch来表达数学的分段函数

/*
 *      x ,         0<= x <2;
 *      x^2+1 ,     2<= x <6;
 *  y = sqrt(x+1) , 6<= x <10;
 *      1/(x+1) ,   x>= 10;
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x,y;
    cin>>x;
    if(x<0)
        cout<<"Input error!"<<endl;
    else
    {   
        // (int)x/2 对自变量区间的简化
        switch((int)x/2)
        {
            case 0: y = x; break;
            case 1:
            case 2: y = x*x+1; break;
            case 3:
            case 4: y = sqrt(x+1); break;
            default: y = 1/(x+1);
        }
    cout<< "x= "<<x<<",y="<<y<<endl;
    }
    return 0;
}

    
