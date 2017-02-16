//检测输入的字符串是不是顺读和倒读都一样

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[81];
    int i,j;
    //无法处理含空格的字符串
    cin>>str;
    //strlen(str)-1
    for(i=0,j=strlen(str)-1;i<j;i++,j--){
        if(str[i] != str[j]) break;
    }
    if(i<j) cout<< "No" <<endl;
    else    cout<< "Yes"<<endl;
    return 0;
}

