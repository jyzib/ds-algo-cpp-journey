#include<iostream>
using namespace std;
int main(){
    int i ;
    cin>>i;
    if(i<=18){
        cout<< "You are not allowed to drive"<<endl;
    }else if(i>18 && i < 50){
        cout<<"You can drive"<<endl;


    }else{
        cout<<"you are older"<<endl;
    }
    cout<<"User age is " << i <<endl;

}
