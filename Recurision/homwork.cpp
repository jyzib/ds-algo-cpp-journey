#include <iostream>
using namespace std;


// print all odd number from 1 to n

// void prtodd(int n)
// {
//     if(n == 1){
//         return;
//     }
//     prtodd(n-2);
//     cout<<n<<endl;

// }

// void print(int n){
//     if(n==10){
//         return;
//     }
   
//    print(n-1);
//    cout<<n<<endl;

// }

// Given a Number N, check whether it is prime or not using Recursion.

int isprime(int n,int m){
    if(m==n){
        return 1;
    }else if(n%m==0){  
        return 0;
    };
// cout<<m<<endl;
  return isprime(n,m+1);
}


int main(){
    if(!isprime(4,2)){
        cout<<"not prime";
    }else{
         cout<<"prime";
    }
//  cout<<isprime(7,2)<<endl;

    // int n = 15;
    // if(n%2 == 0){

    // prtodd(n-1);
    // }else{
    //      prtodd(n);
    // }
    // cout<<"jazib";
}