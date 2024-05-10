#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int row = 1; row<=n; row++){
        for(int st=1; st<=n-row+1; st++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}