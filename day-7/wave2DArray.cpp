#include <iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<sizeof(arr[0])/sizeof(int); i++){
        if(i%2==0){
            for(int j=r-1; j<0;j--){
                cout<<arr[j][i]<<endl;
            }
        }else{
            for(int j=0; j<r; j++){
                cout<<arr[j][i]<<endl;
            }
        }
    }
    return 0;
}