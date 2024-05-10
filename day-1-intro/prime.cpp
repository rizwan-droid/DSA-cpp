#include <iostream>
using namespace std;
int main(){
    int num = 6;
    int nof = 0;
    for(int div=2; div*div<=num; div++){
        if(num%div==0){
            nof++;
            break;
        }
    }
    if(nof==0){
        cout<<"prime"<<num<<endl;
    }else{
        cout<<"not prime"<<num<<endl;
    }
    return 0;
}