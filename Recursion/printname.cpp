#include<iostream>
using namespace std;


void print(string s,int n){

if(n==0){
    return;
}

n--;
 print("ALOK VERMA",n);
 
cout << s << endl;

}

int main(){

    print("ALOK VERMA",5);
    return 0;
}