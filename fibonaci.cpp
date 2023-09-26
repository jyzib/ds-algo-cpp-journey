#include <iostream>
using namespace std;
int main(){
//   sum of n to 1 
int n = 5;
int sum = 0;
int a =0;
int b = 1;
cout<<a<<" "<< b <<" ";
for(int i = 0;i<=n;i++){
    int total = a+b ;
 cout<<total<< " ";
   a = b;
   b = total;
 
}


}
