#include <iostream>
using namespace std;

int main(){
    int n=5;
    int nsp=n/2;
    int nst=1;
    for(int row=1; row<=n; row++){
        for(int sp=1; sp<=nsp; sp++){
            if(row=n/2 +1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int st=1; st<=nst; st++){
            cout<<"*";
        }
        cout<<"\n";
        if(row<n/2 +1){
            nst+=1;
        }else{
            nst-=1;
        }

    }
    return 0;
}