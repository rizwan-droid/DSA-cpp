#include<iostream>
using namespace std;

void reverse(int* arr,int left,int right){
  

    while(left<=right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;



    }
    // for(int i=0;i<size;i++){
    //     cout<<"reverse array is "<<arr[i]<<endl;
    // }

    // return 1;



}
void rotate(int* arr,int n,int k){
    
    // if(k<0){
    //     k=k+size;
    // }
    k=k%n;
    if(k<0){k=k+n;}
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);


    for(int i=0;i<n;i++){
        cout<<"rotated array is "<<arr[i]<<endl;
    }
    

  

}

int main(){
    // array size user
    int n;
    cin>>n;
    //array bnaoge 
    int* array= new int[n];
    //array ko fill kroge
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int k;
    cin>>k;

    //function invoke
    // reverse(array,size);
    rotate(array,n,k);



    return 0;
}
