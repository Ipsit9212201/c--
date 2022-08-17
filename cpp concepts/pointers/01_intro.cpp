#include<bits/stdc++.h>

using namespace std;
//pointers store the address of a variable
int main(){
    int a = 10;
    int* aptr;
    aptr = &a;
    cout<<aptr<<endl;
    cout<<&a<<endl;
    return 0;
}