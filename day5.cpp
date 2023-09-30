#include<iostream>
using namespace std;
// int main(){
//     for(int i = 1;i<=8;i++){
//         for(int j = i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// }

// output ->
// 1
// 21
// 321
// 4321
// 54321
// 654321
// 7654321
// 87654321



// int main(){
   
//     for(int i =1;i<=5;i++){
//          char newch = 'a'+(i-1);
//      for(int j =1;j<=i;j++){
       
//         cout<<newch;
//      }
// cout<<endl;
//     }
// }

// Output --> 
// a
// bb
// ccc
// dddd
// eeeee


// int main(){
//     for(int i =1;i<=5;i++){
//         for(int j = i;j<=5;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// output --> 
// * * * * * 
// * * * *
// * * *
// * *
// *



int main(){
    for(int i=1;i<=5;i++){
     for(int j = 1;j<=i;j++){
        cout<<5 -(j-1 );
     }
     cout<<endl;
    }
}