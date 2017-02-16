#include <iostream>
using namespace std;

int main(){
    
    //计算并输出每行元素之和及每列元素之和
    int a[5][5],
        i,j,
        cnt  =1,
        rsum =0,
        csum =0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            a[i][j] = cnt++;
            cout<< a[i][j] <<"\t";
        }
        //矩阵输出
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"rows"<<"\t"<<"col"<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            rsum += a[j][i];
            csum += a[i][j];
        }
            cout<< rsum<<"\t"<< csum<<endl;
    }

    cout<<endl;

    //输出一个二维数组中的鞍点（某元素在该行最大，该列最小）
    int max,
        sub,
        flag = 1;
    for(i=0;i<5;i++){
        max = a[i][0];
        for(j=0;j<5;j++){
            if( a[i][j] >max)
                max = a[i][j];
                sub = j;
        }
        for(j=0;j<5;j++){
            //Debug:if-else错误，会输出全列
            //使用举反例的方法，需要结合标志位一起使用
            if( a[j][sub] <max){
                flag = 0; 
                break;
            }
        }
        if(flag)
            cout<< a[i][sub] <<endl;
            
    }

    return 0;
}

