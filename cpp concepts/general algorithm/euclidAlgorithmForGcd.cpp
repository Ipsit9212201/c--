#include<bits/stdc++.h>

using namespace std;
int rec_gcd(int a,int b){
    if(b==0){
        return a;
    }
    return rec_gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<rec_gcd(max(a,b),min(a,b));
    return 0;
}