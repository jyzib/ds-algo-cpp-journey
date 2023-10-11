#include<iostream>
using namespace std;
// int main(){
   
   
//     int n = 2364;

//     while(n>9){
//          int ans = 0;
//          int rem ;
//     while(n != 0 ){
//        rem = n%10;
//        n/= 10;
//        ans+=rem;
//     }
//     n = ans;
//     }

//     cout<<n<<endl;
// }
// leap year

// int main(){
//     int N = 281;
//       if(N%400 == 0){
//             cout<<1<<endl;
//         }else if(N%4 == 0 && N%100 != 0 ){
//           cout<<1<<endl;
//         }else{
//             cout<<0<<endl;
//         }
// }

// reverse int

// class Solution {
// public:
//     int reverse(int x) {
//         int rem;
//      int  ans = 0;
//         while(x != 0){
//          rem = x%10;
//          x /=10;
//              if(ans> INT_MAX /10 || ans <INT_MIN/10){
//             return 0;
//         }
//          ans = ans * 10 + rem;
//         }
    
      
//         return ans;
//     }
// };



// power of two

// int main(){
//     int n = 22;
//     while(n!=0){
//         if(n%2 == 1){
//             cout<<"not a power of two";
//             break;
//         }
//         n/=2;
//     }
//     cout<<"Power of two";
// }

// sqrt of number;


// int main(){
//     int n = 49;
    
//      for(int i = 0;i<=n;i++){
        
//         if(i*i == n){
//             cout<<"Squre root of "<<n<<" is " <<i;
//             break;
//         }else if(i*i > n ){
//              cout<<"Squre root of "<<n<<" is " <<i-1;
//              break;
//         }
//      }

// }

// palendrom number;

int main(){
    int p = 121;
    int k = p;
    int ans = 0;
     int rem;
     if(p<1){
cout<<"not Palendrom";

     }else{
       while(p != 0){
        rem = p%10;
        p /= 10;
        ans = ans*10+rem;
        
     }
   
        if(k == ans){
        cout<<"Palendrom";
       }else{
        cout<<"not Palendrom";
       }
     }
 
 
}

