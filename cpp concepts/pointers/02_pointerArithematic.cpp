#include<bits/stdc++.h>

using namespace std;

int main(){
    // incrementing operation
    int a=10;
    int* aptr = &a;
    cout<<aptr<<endl;//0x61ff08
    cout<<++aptr<<endl;//0x61ff0c = 0x61ff08 + 4 (12 in hex is c)
    return 0;
}