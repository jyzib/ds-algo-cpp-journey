#include <iostream>
using namespace std;

// void rec(int x)
// {

//     int i = x - 1;
//     if (i == 0)
//     {
//         return;
//     }
//     rec(i);
//     cout << i << endl;
// }

// int main()
// {
//     rec(10);
// }

// print all even number

// void printEven(int y){
//   if(y==0){
//     return;
//   }
 
//  printEven(y-2);  
//     cout<<y<<endl;


// }

// int main(){
// int n = 11;
// if(n%2==1){
//    printEven(n-1);

// }else{

//    printEven(n);
// }
 
// }

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     cout<<n<<endl;
    
//     return n * factorial(n-1);

// }

//  int main(){
//     int n = 5;
//   cout<<factorial(n)<<endl;
  
// }

// void findeven(int n){
//    if(n==0){
//     return ;
//    }
// findeven(n-2);
// cout<<n;

// }

// int main(){
//   int sum = 16%17;
// cout<<sum;
// }
// find sum of n natrual number
// void fac(int n,int m){
//   int k = n + m;
//  if(m == 0) 
//  return;
// cout<<k<<endl;
//    fac(k,m-1);
// }
 
// int main(){
//   fac(0,6);
// } 
// power of two

// int poweroftwo(int m,int k){
//   if(k == 1){
//     return m ;
//   }
//  return  m * poweroftwo(m,k-1);
// }

// int main(){
//  cout<< poweroftwo(2,5)<<endl;
// }



// sum of n natural numder


// int sumofnaturalno(int n){
//   if(n==0){
//     return 1;
//   }

//   return n * sumofnaturalno(n-1);

// }
// int main(){
//   cout<<sumofnaturalno(3);
// }


// 


int sumofnaturalno(int m,int n){
  int k = m + (n * n);
  if(n==1){
    return k;
  }

  return sumofnaturalno(k,n-1);

}
int main(){
  cout<<sumofnaturalno(0,4);
}





