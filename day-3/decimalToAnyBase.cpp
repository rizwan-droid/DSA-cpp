#include <iostream>
using namespace std;
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
int main(){
   int finalans = decimaltoanybase(238,8);
   cout<<finalans<<endl;
    
    return 0;
}