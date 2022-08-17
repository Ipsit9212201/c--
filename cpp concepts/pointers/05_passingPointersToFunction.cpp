#include<bits/stdc++.h>

using namespace std;
//in functions the values get copied so the original variable value does not change
void increment(int a){//passed by value
    a++;
}
void incrementPointer(int *a){//by reference
    ++*a;
}

int main(){
    int a = 10;
    increment(a);
    cout<<a<<endl;
    incrementPointer(&a);
    cout<<a<<endl;
    return 0;
}