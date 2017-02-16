//实现数组元素的循环移动

#include <iostream>
using namespace std;

int main(){
    int a[10] ={1,2,3,4,5,6,7,8,9,10},
        temp  = 0,
        step  = 0,
        direct= 0;
   cout<< "Choose move direction: " <<endl
        << "1:forward" <<endl
        << "2: backward"<<endl;
    cin>>direct;
    cout<< "Enter input move step: ";
    cin>>step;
    int i,j;
    for(i=0;i<step;i++){
            if( direct == 1){
                //元素前移
                temp = a[0];
                for(j=1;j<10;j++)
                    a[j-1] = a[j];
                a[9]= temp;
            }
            if( direct == 2){
                //元素后移
                temp = a[9];
                for(j=9;j>0;j--)
                    a[j] = a[j-1];
                a[0] = temp;
            }
    }
    for(j=0;j<10;j++)
        cout<< a[j] <<" ";
    cout<<endl;
    return 0;
}

            
        
