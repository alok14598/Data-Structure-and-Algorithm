#include<iostream>
using namespace std;

bool checkSorted(int* arr,int n){
    if(n==0){
        return true;
    }

    if(arr[n]> arr[n-1]){
        n=n-1;
     
         checkSorted(arr,n);
    }
    else {
    return false;
    }
        


}


int main() {
    int arr[6]={2,4,10,12,16,18};
    bool value=checkSorted(arr,5);
   if(value){
    cout << "Array is Sorted " << value << endl;
   }
   else{
    cout << "Array is not sorted " << value << endl;
   }

    return -1;
}