//利用多层for来解决穷举所有可能问题

#include <iostream>
using namespace std;

int main(){
    int a,b,c,num;
    
    //水仙花数问题
    for(a=1;a<=9;a++)
        for(b=0;b<=9;b++)
            for(c=0;c<=9;c++){
                num = a*100+b*10+c;
                if(a*a*a +b*b*b +c*c*c == num)
                    cout<< num <<endl;
            }
    
    //从中取出8个球，求有白球的可能方案
    int red,white,black;
    //red=0,white=1,减少运算量
    for(white=1;white<=5;white++)
        for(red=0;red<=3;red++)
            for(black=0;black<=6;black++)
                if(red +white +black == 8){
                    cout<< "white = "<< white <<"\t"
                        << "red = "  << red   <<"\t\t"
                        << "black = "<< black <<endl;
                }
    return 0;
}
