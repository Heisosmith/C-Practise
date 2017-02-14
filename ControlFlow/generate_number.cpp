
//输出1000以内能被3整除且个位数为6的整数
//
//因为是与运算，所以取最小集合--个位数为6

#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=0;i<100;i++){
        j = i *10 +6;
        if(j %3 !=0) continue;
        cout<< j <<" ";
    }
    cout<<endl;
    return 0;
}












