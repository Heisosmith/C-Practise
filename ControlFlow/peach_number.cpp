/*山洞里有一堆桃子，5只猴子来分。第一只猴子把这堆桃子平均分为5份，多了一份，这只猴子把多的一个扔到洞外，拿走一份。
 * 第二只猴子把剩下的桃子平均分成5份，又多了一个，它同样你把多的一个扔到洞外，拿走了一份。
 * 第三只，第四只，第五只猴子都是这么做的，问山洞里原来最少有多少个桃子？
 */

#include <iostream>
using namespace std;

int main(){
    int residual,present,peachNum,count;
    for(residual=4;residual<10000;residual+=4){
        count = 0;
        present = residual;
        //count<4; 则count永远不会到5,程序没有任何输出就结束
        while( count<=4){
            peachNum = present/4*5+1;
            count++;
            present = peachNum;
            if( present%4 !=0) break;
        }
        if( count ==5){
            cout<< peachNum <<endl;
            break;
        }
    }
    return 0;
}

