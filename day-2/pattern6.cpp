#include <iostream>
using namespace std;
int main(){
    int n=10;
    int nsp=n-1;
    int nst=1;
    for(int row=1; row<=n; row++){
        for(int sp=1;sp<=nsp;sp++){
            cout<<" ";
        }
        for(int st=1; st<=nst; st++){
            cout<<"*";
            break;
        }
        cout<<"\n";
        nsp-=1;
        nst+=1;
    }
    return 0;
}