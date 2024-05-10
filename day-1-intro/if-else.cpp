#include <iostream>
using namespace std;

int main(){
    int age = 23;
    if(age<18){
        cout<<"you are not elible to vote"<<endl;
    }
    else if(age>=18 && age<40){
        cout<<"you can vote"<<endl;
    }else{
        cout<<"you are old";
    }
    return 0;
}