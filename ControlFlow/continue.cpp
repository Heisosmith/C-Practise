#include <iostream>
using namespace std;

int main(){
    int i =0,s =0;
    //跳过"偶数+1"的数
    //continue跳过本次循环，
    //而不只是跳过if花括号内语句
    do
    {
        if(i%2==0){
            i++;
            continue;
        }
        i++;
        s += i;
    }while(i<7);
    cout<< s <<endl;
    return 0;
}

