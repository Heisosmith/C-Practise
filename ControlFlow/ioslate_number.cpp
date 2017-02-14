#include <iostream>
using namespace std;

int main(){
    int number =729,
        digit  =0;
    do
    {
        digit = number %10;
        number= number /10;
        cout<< digit;
    }while(number !=0);
    cout<<endl;
    return 0;
}

