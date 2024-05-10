#include <iostream>
using namespace std;

int main(){
    //upper half
    int n = 3;
    int nsp = n-1;
    int nst = 1;
    for(int row = 1; row<=n; row++){
        for(int sp=1; sp<=nsp; sp++){
            cout<<" ";
        }
        for(int st = 1; st<=nst; st++){
            cout<<"*";
        }
        cout<<"\n";
        nsp-=1;
        nst+=2;
    }
    //lower half
    int n1 = 2;
    int nsp1 = n1-1;
    int nst1 = 3;
    for(int row = 1; row<=n1; row++){
        for(int sp1=1; sp1<=nsp1; sp1++){
            cout<<" ";
        }
        for(int st1=1; st1<=nst1; st1++){
            cout<<"*";
        }
        cout<<"\n";
        nst1-=2;
        nsp1+=1;
    }

    return 0;
}