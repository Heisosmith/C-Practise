//指针与字符数组
#include <iostream>
using namespace std;

int main(){
    //char *weekend[] = ... 报错，指针没法指向常量的地址。
    char weekend[][20] = {"Monday","Tuesday","Wednesday",
        "Thrusday","Friday","Saturday","Sunday"};
    while(1){
        cin>> week;
        if( week<1 || week>7) break;
        cout<< weekend[ week-1] <<endl;
    }
    
    //整体输出是cout<< p; 输出第N个是 cout<< *p+n;
    char a[] = "1234";
    char *p = a;
    cout<< p;
    
    return 0;
}


