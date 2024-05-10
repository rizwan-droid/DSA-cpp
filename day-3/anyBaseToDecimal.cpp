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
int main(){
    int ans = anybasetodecimal(356,8);
    cout<<ans<<endl;
    return 0;
}