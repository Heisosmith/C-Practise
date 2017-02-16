#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
using namespace std;

int main(){
/*
    int count[26] ={0};
    char str[100];
    //Debug：直接cin>>str; 当读到输入字符流的空格时，则会终止输入.
    //显式指定终止输入字符，可以解决这个问题。
    cin>>str[0];
    int i =0;
    while(str[i] !='.')
        cin>>str[++i];
    //输入效果显示
    //自动忽略空格
    cout<<str<<endl;
    for(i=0;i<strlen(str);i++){
        //防数组越界
        if(!(str[i]>='a'&&str[i]<='z')) continue;
            count[ str[i]-'a']++;
    }
    for(i=0;i<26;i++){
        //(char)(i +'a';) 用ascii码顺序输出字母
        cout<< setw(3)<<(char)(i +'a')<<"\t\t" << count[i] <<endl;
    }
*/
/*
    //单变量处理字符流

    int n[26] ={0},k;
    char ch;
    cin>>ch;
    while( ch!='.'){
        if( ch>='a'&& ch<='z')
            n[ch -'a']++;
        cin>>ch;
    }
    for(k=0;k<26;k++){
        cout<< setw(3)<< (char)('a'+ k)<< "\t\t" 
            << n[k]<<endl;
    }
*/
    //统计10名学生每个月份生日的学生人数
    int month[13]={0},i,
        stu[10] ={1,2,3,4,5,6,7,8,9,10};
        
    for(i=0;i<10;i++){
        //利用数组下标作统计
        month[ stu[i] ]++;
    }
    cout<<"month"<<"\t"<<"count"<<endl;
    for(i=1;i<13;i++){
        cout<< setw(2)<< i<<"\t"<< month[i]<<endl;
    }
    
    /*将序号为1、2、3...100的100盏灯从左到右排成一横行且每盏灯各由一个拉线开关控制，最初呈关闭状态。
    有100个小朋友，第1位小朋友把序号为1的倍数的电灯开关拉一下，第2位第3位小朋友都是这么做，直到第100个小朋友。
    问此过程后，哪些序号的电灯是亮着的
    */
    int lamp[101]={0},
        child;
    for(child=1;child<=100;child++)
        for(i=child;i<=100;i+=child){
            lamp[i]++;
        }
    for(i=1;i<=100;i++){
        if( lamp[i] %2==0) continue;
        else cout<< i <<"\t";
        if(i%5==0) cout<<endl;
    }

    return 0;
}

