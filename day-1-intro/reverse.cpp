#include <iostream>
using namespace std;
int main(){
    int num = 23456;
    while(num>0){
        int ld = num%10;
        cout<<ld<<endl;
        num = num/10;
    }
    return 0;
}