//实现不同进制数互转

#include <iostream>
using namespace std;
inline int pow(int,int);

int main(){
    //十进制转其他进制
    char b[16] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int  c[64],base,j,i=0;
    long num;
    
    cout<<"Enter input a decimal number: "; cin>>num;
    cout<<"Enter input a base number: "; cin>>base;
    do
    {
        c[i++] = num % base;
        num = num / base;
    }while(num!=0);
    for(j=i-1;j>=0;j--){
        cout<< b[c[j]];
    }
    cout<<endl;

    //其他进制转十进制
    int digit,number,sum = 0;
    i = 0;
    cout<<"Enter a new non-decimal number: "; cin>>number;
    cout<<"Enter a new base: "; cin>>base;
    do
    {
        digit = number % 10;
        //权值为指数幂形式
        sum = sum + digit * pow(base,i++);
        number = number / 10;
    }while( number!=0);
    cout<< sum <<endl;
    return 0;
}

 inline int pow(int x,int y){
    int p = 1;
    for(int i=0;i<y;i++)
        p = p * x;
    return p;
 }


    
