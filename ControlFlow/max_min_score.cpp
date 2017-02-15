//输入10个选手的成绩，输出最高分、最低分和平均分（去掉一个最高分和一个最低分）

#include <iostream>
using namespace std;

int main(){
    double score[10],
           max = 0,
           min = 0,
           aveg= 0,
           sum = 0;
    int i;
    for(i=0;i<10;i++){
        cin>>score[i];
    }
    //假设的方法
    max = min = score[0];
    for(i=1;i<10;i++){
        if( score[i]>max)
            max = score[i];
        if( score[i]<min)
            min = score[i];
        sum += score[i];
    }
    aveg = (sum -max -min)/10.0;
    cout<<"max= "<< max <<endl
        <<"min= "<< min <<endl
        <<"aveg="<< aveg<<endl;
    return 0;
}

