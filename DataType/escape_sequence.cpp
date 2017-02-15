#include <iostream>
using namespace std;

int main(){
    char ch;
    //三位八进制
    //0 = '\060'
    //A = '\101' 
    //a = '\141'
    ch = '\104';
    cout<<ch<<endl;
    //两位十六进制
    ch = '\x43';
    cout<<ch<<endl;
    //有歧义字符输出
    ch = '\\';
    cout<<ch<<endl;
    ch = '\?';
    cout<<ch<<endl;
    ch = '\'';
    cout<<ch<<endl;
    ch = '\"';
    cout<<ch<<endl;
    return 0;
}

