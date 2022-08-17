#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //check the notes for logic
    //spiral order print
    int rst=0;
    int ren = n-1;
    int cst = 0;
    int cen = m-1;
    while(rst<=ren && cst<=cen){
        //for starting row
        for(int col=cst;col<cen;col++){
            cout<<a[rst][col]<<" ";
        }
        rst++;
        //for colum end
        for(int row=rst;row<=ren;row++){
            cout<<a[row][cen]<<" ";
        }
        cen--;
        //for row end
        for(int col = cen;col>=cst;col--){
            cout<<a[ren][col]<<" ";
        }
        ren--;
        //for column start
        for(int row=ren;row>=rst;row--){
            cout<<a[row][cst]<<" ";
        }
        cst++;
    }

    return 0;
}