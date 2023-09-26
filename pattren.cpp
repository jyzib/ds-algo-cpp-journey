#include <iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i = 0 ; i<=n;i++){
        for(int j = i;j<n;j++){
          cout<<" ";
        }
        for(int k = 0;k<=i+i;k++){
        cout<<"*";
        }

        cout<<"\n";
    }
}