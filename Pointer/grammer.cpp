//指针的语法习题

#include <iostream>
using namespace std;

int fun(int a){
    return a;
}

int *f(int &z){
    return &z;
}

void fun1(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 5;
    int *b,**c;
    c = &b;
    b = &a;
    //二级指针取两次等价于 *b
    cout<< **c <<endl;
    
    //字符数组，故'\0'不会截断数组
    char ch[]={'a','b','c','\0','d','e','f'};
    char *p = ch;
    cout<< *(p+4) <<endl;

    //指向具有4个整型元素的一维数组的指针
    //分配一段无名内存，由指针指向
    int (*pt)[4];
    //error: incompatible types in assignment of ‘int’ to ‘int [4]’
  //  pt[0] = 1;
 
    //定义有3个整型元素空间的pr数组，里边存放整型指针--指针数组
    int *pa[3];
    //error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
 //   pa[0] = 1;
    
    //定义一个含有形参a，返回值为整型的无名函数，由指针指向函数的首地址
    int (*pf)(int a);
    //函数名表示首地址
    pf = fun;
    //pf充当函数名
    cout<< (*pf)(3) <<endl;
    
    //返回值为整型指针的函数f
    int *f(int &z);
    cout<< f(a) <<endl;

    //Summary:
    //  指针加括号，  (*p) 则表示指向无名的地方的指针p.
    //    没加括号,  *p[4] 则表示数组存放的元素为指针
    //               *p( )   表示函数的返回值为指针
    
    /*引用和指针的差别
     * 引用是直接操作变量的值，指针是通过地址间接操作变量的值。
     * 引用是变量别名，需要初始化，且不能改变引用关系; (& 在定义时才表示引用含义)
     * 指针不需要初始化，可以改变指向关系。
    */
    
    int x =11,y = 22;
    fun1(x,y);
    cout<< x<<"\t"<< y <<endl;

    return 0;
}



