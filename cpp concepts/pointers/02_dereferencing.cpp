#include<bits/stdc++.h>

using namespace std;
//dereferencing leads to printing of the value of the variable
int main(){
    int a = 10;
    int* aptr;
    aptr = &a;
    cout<<*aptr<<endl;
    return 0;
}