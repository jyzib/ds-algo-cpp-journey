#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter number - ";
 cin>>n;
 
 for(int i = 1;i<=n;i++){
int count = 1;
    for(int j = 1; j<=i ;j++){
        cout <<"*";
    
        
    }
    for(int j = i; j<=n ;j++){
        cout <<count;
        count++;
    
        
    }
 
    cout<<'\n';
 }
 for(int i = 0;i<n;i++){
   for(int j = i; j<n ;j++){
        cout <<"*";
    
         
    }
    for(int j = 0; j<=i ;j++){
        cout <<n-i;
    
        
    }
 
    cout<<'\n';
 }

}