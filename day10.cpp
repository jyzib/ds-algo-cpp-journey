#include<iostream>
using namespace std;

// while loop basic
// int main(){
//     int a,x=1 ;
//     cin>>a;
//     while(x<=10){
//  cout<< a * x<<endl;;
//  x++;
//     }
//     cout<<endl;2
// }
// int main(){
//     int a ;
//     cin>>a;
//     int x = 1;
    
//     while(x< a){
//              if(x%2 != 0){
//             cout<<x<<" odd ";
                
//              }
//              x++;
//     }

// }
// do while loop basic
// sum of n number
// int main(){
//     int x = 1;
//     int sum = 0;
// do
// {
//     sum += x;
//     cout<<x;
//     x++;
// } while (x<=10);
// cout<<sum;
    
// }
// breake and continue

// int main(){
//     int i = 1;
// for(i = 1;i<=10;i++){
//     if(i%4 == 0){
//         continue;
//     }
//     cout<<i;
// }
// }
// switch case
// int main(){
//     int i = 2;
//     switch (i)
//     {
//     case 1 :
//        cout<<"rohit";
//         break;
//     case 2 :
//        cout<<"rohit";
//         break;
//     case 3 :
//        cout<<"rohit";
//         break;
    
//     default:
//        cout<<"rohit";
//         break;
//     }
// }

// add digit

int main(){
    int n = 234;
while(n>9){
    int ans = 0;
    int rem;
while(n != 0){
   rem = n%10;
//    cout<<rem;
     ans +=rem;
   n /= 10;
}
n = ans;
}
 cout<<n<<endl;
}



















