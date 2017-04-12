#include <iostream>
using namespace std;

int sstrcmp( char *s,char *t){
    while( *s++ !='\0' && *t++ !='\0'){
        return *s - *t;
    }
}

char* sstrcpy( char *d,const char *s){
    char* address = d;
    while( *d++ !='\0' && *s++ !='\0'){
        *d = *s;
    }
    return address;
}

char* sstrcat( char *d,const char *s){
    char* address = d;
    while( *d !='\0') d++;
    //合法情况下，s比d短,把封闭也处理了
    while( (*d++ = *s++) !='\0');
    return address;
}

int sstrlen( char *s){
    int count = 0;
    while( *s++ !='\0'){
        count++;
    }
    return count;
}

int main(){
    char a[]="123",b[]="456789";
    cout<< sstrlen(a)<<" "<< sstrlen(b) <<endl;
    cout<< sstrcmp(a,b) <<endl;
    cout<< sstrcat(a,b) <<endl;
    
    return 0;
}

        
        
    
