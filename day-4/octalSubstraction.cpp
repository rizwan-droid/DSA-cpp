#include <iostream>
using namespace std;

int difference(int n1,int n2,int b){
    int borrow=0;
    int ans=0;
    int power =1;
  
    while(n2!=0 ){
        int ldn1=n1%10;
        int ldn2=n2%10;
        n1=n1/10;
        n2=n2/10;
        int diff=(ldn2-borrow)-ldn1;
        if(diff>=0){
            borrow=0;
            
        }else{
            diff=diff+b;
            borrow=1;
        }
        ans=ans+(diff*power);
        power=power*10;
    }
    return ans;
}

int main()
{
    cout<<"hello world"<<endl;
    
    int ans =difference(77,234,8);
    cout<<ans<<endl;
    return 0;
}