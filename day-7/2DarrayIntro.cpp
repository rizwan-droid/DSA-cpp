#include <iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;

    int* arr [][]= new int [r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c;j++){
            cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}