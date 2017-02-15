#include <iostream>
using namespace std;

int main(){
    char ch[]="12yue25ri";
    int i,sum=0;
    
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]>='0'&&ch[i]<='9'){
            //用作差法，实现数字字符转数字
            sum += ch[i] -'0';
            cout<< ch[i] <<" ";
        }
    }
    cout<<endl;
    cout<< sum <<endl;

    //小写转大写
    char str[30] ="Chengdu-China 2017";
    cout<< str <<endl;
    int n =0;

    //str[n++] = str[n]>='a'&&str[n]<='z' ? str[n]-'a'+'A' : str[n];
    while(str[n]!='\0'){
        if(str[n]>='a'&& str[n]<='z')
            //做差法
            str[n] = str[n] -'a' +'A';
        n++;
    }
    cout<< str <<endl;
    return 0;
}

