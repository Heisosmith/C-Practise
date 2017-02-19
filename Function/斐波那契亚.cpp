//用递归的方法输出斐波那契亚数列前20项值

#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int a[21];
    int i;
    // i=1
    for(i=1;i<=20;i++){
        cout<< fib(i) <<" ";
    }
    cout<<endl;
    return 0;
}

//递归的实现在于递归函数
int fib(int n){
    if(n==1||n==2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

