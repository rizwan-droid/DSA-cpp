#include <iostream>
using namespace std;

int anybasetodecimal(int num, int b){
    int ans = 0;
    int power = 1;
    while(num>0){
        int rem = num%10;
        ans=ans+(rem*power);
        power = power * b;
        num = num/10;

    }
    return ans;
}
int decimaltoanybase(int num, int b){
    int ans = 0;
    int power = 1;
    while(num>0){
        int rem = num%b;
        num=num/b;
        ans = ans + (rem*power);
        power=power*10;
    }
    return ans;
}
int anybasetoanybase(int num, int base1, int base2){
    int decimal = anybasetodecimal(num, base1);
    int ans = decimaltoanybase(decimal, base2);
    return ans;
}
int main(){
   int answer = anybasetoanybase(234,8,2);
    cout<<answer<<endl;
    
    return 0;
}