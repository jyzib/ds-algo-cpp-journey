#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter number - ";
    cin>>n;
    bool condition=true;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            condition=false;
            break;
        }
    }
    if(condition){
         cout<<"Prime number"<<endl;
    }else{
        cout<<n<<"Prime not number"<<endl;
    }

}