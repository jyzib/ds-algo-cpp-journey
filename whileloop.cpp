#include<iostream>
using namespace std;
int main(){
int n;
int i = 2;
cout<<"find is prime number - ";
cin>>n;
int num=0; 
while(i<n){
 if(n%i==0){
    cout<<n<<" is not prime a number"<<endl;
 break;
 }

 i++;
};



   
}
