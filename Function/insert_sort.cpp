//直接插入排序法
//思路：将全部数分为有序和无序两部分.先从取无序部分的第一个数，
//      然后在有序部分插入，插入==数组元素插入操作.

#include <iostream>
using namespace std;

void insert_sort(int a[],int count);

int main(){
    int a[10]={3,4,6,7,2,1,8,10,9,5};
    int i;
    for(i=0;i<10;i++){
        cout<< a[i] <<" ";
    }
    cout<<endl;
    insert_sort(a,10);
    cout<<"Atrer sorting"<<endl;
    for(i=0;i<10;i++)
        cout<< a[i] <<" ";
    cout<<endl;
    return 0;
}

 
void insert_sort(int a[],int count){
    int i,j,t;
    //a[i],...,a[count-1]的比较和插入
    for(i=1;i<count;i++){
        t = a[i];
        j = i -1;
        //在有序部分中寻找元素a[i]的插入位置
        while(j>=0 && t<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
}



