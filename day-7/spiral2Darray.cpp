#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int minc = 0;
    int maxc = m-1;
    int minr = 0;
    int maxr = n-1;

    while(true){
        //left
        for(int i=minr,j=minc;i<maxr;i++){
            cout<<arr[i][j]<<endl;
        }
        //bottom
        for(int i=minc,j=maxr;i<maxc;i++){
            cout<<arr[i][j]<<endl;
        }
        //right
        for(int i=maxr,j=maxc;i<minr;i--){
            cout<<arr[i][j]<<endl;
        }
        //top
        for(int i=maxc,j=minr;i<minc;i--){
            cout<<arr[i][j]<<endl;
        }
    }

   
    return 0;
}