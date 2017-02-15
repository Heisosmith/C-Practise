#include <iostream>
using namespace std;

int main(){
    char c1[]  ={'x','y','z'};
    char c2[]  ={'x','y','z','\0'};
    char str[] ="xyz";
    //字符数组直接使用数组名输出整体
    cout<< c1<<"\t\t"<<sizeof(c1)<<endl
        << c2<<"\t\t"<<sizeof(c2)<<endl
        << str<<"\t\t"<<sizeof(str)<<endl;

    //对二维字符数组理解
    char c3[][10] ={"Windows","Linux","Mac"};
    cout<< c3[0] <<endl;
    cout<< c3[1][2] <<endl;
    int i,j;
    //数组界内给0值，越界访问随机值可能为0
    for(i=0;i<20;i++)
        cout<< (int)c3[2][i] <<" ";
    cout<<endl;
    
    //数组越界写读值
    for(i=10;i<20;i++)
        c3[2][i] = i;
    for(i=0;i<20;i++)
        cout<< (int)c3[2][i] <<" ";
    cout<<endl;

    //指针越界写读值
    char *p = c3[2];
    for(i=20;i<30;i++)
        *(p+i) = i;
    for(i=0;i<30;i++)
        cout<< (int)c3[2][i] <<" ";
    cout<<endl;

    //对二维整数数组理解
    int a[3][3] ={{1,2},{3,4},{5,6}};
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            cout<< a[i][j] <<" ";
            if(j==2) cout<<endl;
        }
    return 0;
}

