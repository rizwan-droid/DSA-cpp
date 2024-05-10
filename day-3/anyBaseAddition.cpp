#include <iostream>
using namespace std;
int anybaseaddition(int num1, int num2, int base){
    int ans = 0;
    int carry = 0;
    int power = 1;
while(num1>0 || num2>0 || carry!=0){
    int ldn1 = num1%10;
    int ldn2 = num2%10;
     int sum = ldn1 + ldn2 +carry;
     carry = sum/base;
     int rem = sum%base;
     ans = ans+(rem*power);
    
    
    power = power*10;
    
   
    num1 = num1/10;
    num2 = num2/10;
   
    return ans;
}
}
int main(){
    int finalans = anybaseaddition(236,127,8);
    cout<<finalans<<endl;
    return 0;
}