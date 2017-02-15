//求任意一个数的 n!结果 末尾0的个数
//思路：求每个n的5的因子个数，再把个数累加即可.

#include <iostream>
using namespace std;

int main(){
    int num,i,j,count=0;
    cin>>num;
    for(i=5;i<=num;i+=5){
        //j的引入，不破坏外层生成数
        j = i;
        while( j%5==0 ){
            count++;
            j /= 5;
        }
    }
    cout<< count <<endl;
    long p=1;
    for(i=1;i<=num;i++)
        p=p*i;
    cout<< p <<endl;
    return 0;
}

