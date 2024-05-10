#include <iostream>
using namespace std;
int main(){

    for(int i=1; i<=10; i++){
        if(i==1){
            continue;
        }
        int nof = 0;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                nof++;
                break;
            }
        }
        if(nof==0){
            cout<<"num is prime"<<i<<endl;
        }else{
            cout<<"num is not prime"<<i<<endl;
        }
    }
    return 0;
}