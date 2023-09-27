#include <iostream>
using namespace std;
int main(){
    int n = 4421;
    int product = 1;
int sum = 0;
int newvalue = 0;

    while(n>0){
          newvalue = n%10;
          n = n/10;
          product *= newvalue;
     
          sum += newvalue;
      

      }
  cout<<(product-sum)<<endl;


    }   
