#include<bits/stdc++.h>

using namespace std;
void dec(int n){
    if(n==0){
        return;
    }
    dec(n-1);
    cout<<n<<" ";
    

}
int main(){
    dec(5);
    return 0;
}