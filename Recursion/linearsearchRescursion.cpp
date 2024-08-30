#include<iostream>
using namespace std;

int findelement(int arr[],int k, int n){
    
    if(n==0 && arr[0] != k){
  
        return -1;
    }
    
    if(arr[n]==k){
        return n;
    }
    else {
        n=n-1;
       
         
        findelement(arr,k,n);
    }


}





int main(){

    int arr[6]={2,4,6,9,11,13};
    int size=6;
    int value=findelement(arr,18,size-1);
 
    if(value == -1){
        cout << "Element Not Found" << endl;
    }
    else {
        cout << "Element found at index " << value << endl; 
    }

    return -1;
}