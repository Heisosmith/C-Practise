#include <iostream>
using namespace std;

int main(){
    int i,j,s=0;
    //对多层嵌套循环的理解,
    //序号化次数统计
    for(i=1;i<=4;i++)
        for(j=1;j<=i;j++)
            s = s + 1;
    cout<< "s = "<< s <<endl;
    return 0;
}

