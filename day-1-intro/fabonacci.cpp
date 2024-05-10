//first 10 fabonacci number
// 0 1 1 2 3 5 8 13 21 34 55
#include <iostream>
using namespace std;
int main(){
    int fn = 0;
    int sn = 1;
    int nn;
    int i = 1;
    while(i<=10){
        nn = fn+sn;
        cout<<fn<<endl;
        fn = sn;
        sn = nn;

        i++;
    }

    return 0;
}