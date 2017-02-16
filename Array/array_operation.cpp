//计算并输出每行元素之和及每列元素之和

#include <iostream>
using namespace std;

int main(){
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
    return 0;
}

