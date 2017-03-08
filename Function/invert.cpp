//用递归的方法逆置数组的前n个元素

#include <iostream>
using namespace std;

void invert( int a[],int k);

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    invert(a,10);
    for(i=1;i<10;i++)
        cout<< a[i] <<" ";
    cout<<endl;
    return 0;
}

void invert( int a[],int k){
    int t;
    if( k>1){
        //向右移动，对称交换
        invert(a+1,k-2);
        t = a[0];
        a[0] = a[k-1];
        a[k-1] = t;
    }
}

