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

int factorial(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<endl;
    
    return n * factorial(n-1);

}

 int main(){
    int n = 5;
  cout<<factorial(n)<<endl;
  
}