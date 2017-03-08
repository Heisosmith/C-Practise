//根据选手成绩从高到低排序
//若有k位选手名词相同，则下一个名次增加k

#include <iostream>
#include <iomanip>
using namespace std;

void ranking(int a[],int b[]);

int main(){
    int a[101],b[101],i,n;
    cout<< "请输入参赛选手的人数：";
    cin>> n;
    a[0] = b[0] = n;
    cout<< "请输入"<< n<< "个选手的成绩:" <<endl;
    for(i=1;i<=n;i++){
        cin>> a[i];
        b[i] = 0;
    }
    ranking(a,b);
    cout<< n<<"个选手的成绩和名次依次为:" <<endl;
    for(i=1;i <=n;i++)
        cout<< setw(3)<< a[i]<<"\t"<< b[i] <<endl;
    return 0;
}

void ranking(int a[],int b[]){
    int t[101];
    int i,j,k,n,max,rank;
    n = a[0];
    for(i=1;i<=n;i++)
        b[i] = 0;
    rank = 1;
    i = 1;
    while(i<=n){
        if( b[i] == 0){
            max = a[i];
            k = 1;
            t[k] = i;
            for(j=i+1;j<=n;j++){
                if( b[j]==0 && a[j]>=max){
                    if( a[j]>max){
                        max = a[j];
                        k = 0;
                    }
                    k = k + 1;
                    t[k] = j;
                }
            }
            for(j=1;j<=k;j++)
                b[t[j]] = rank;
            rank = rank + k;
            continue;
        }
        i++;
    }
}

