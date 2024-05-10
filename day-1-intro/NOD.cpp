#include <iostream>
using namespace std;
int main(){
    int num = 1234;
    int nod = 0;
    while(num>0){
        num = num/10;
        nod+=1;
    }
    cout<<nod;

    return 0;
}