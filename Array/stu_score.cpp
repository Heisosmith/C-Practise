#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i =0,
        sum =0,
        stu[100] ={0};
    //涉及乘除为double
    double avg = 0;

    cin>>stu[0];
    while(stu[i] >=0){
        sum += stu[i];
        cin>>stu[++i];
    }
    //除法考虑 除0错误 和 类型转换  
    if(i==0) avg =0;
    else     avg = (int)sum / i;

    //j的引入，不输出未使用数组空间数值
    int j;
    for(j=0;j<i;j++){
        if( stu[j] < avg)
            cout<<setw(3)<< j+1 << "\t\t"
                << stu[j] <<endl;
    }
    return 0;
}

