#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;i<n;i++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    for(int i=0;i<m;i++){
        for(int j=0;i<n;i++){
            if(a[i][j]==x){
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;
}