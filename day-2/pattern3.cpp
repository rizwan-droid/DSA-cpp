#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int nst = 1;
    int nsp = n-1;
    for(int row = 1; row<=n; row++){
        for(int sp=1; sp<=nsp; sp++){
            cout<<" ";
        }
        for(int st=1; st<=nst; st++){
            cout<<"*";
        }
        cout<<"\n";
        nst+=1;
        nsp-=1;
    }
    return 0;
}