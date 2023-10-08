#include<iostream>
using namespace std;
// int main(){
// int n = 9;
// for(int row = n;row>=1;row--){
//     for(int col = n-row;col >= 1 ;col--){
//         cout<<" ";
//     }
//     for(int col = (row*2)-1;col>=1;col--){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     int n = 4;
//     for(int row = n ;row>=1;row--){
//         // print *
//         for(int col = 1;col<=row;col++ ){
//             cout<<"* ";
//         }
//         for(int col = 2*n - 2*row ;col>=1;col-- ){
//             cout<<"  ";
//         }
//         // print space
//      for(int col = 1;col<=row;col++ ){
//             cout<<"* ";
//         }
//         cout<<endl;
//         // print *
//     }
//     for(int row = 1 ;row<=n;row++){
//         // print *
//         for(int col = 1;col<=row;col++ ){
//             cout<<"* ";
//         }
//         for(int col = 2*n - 2*row ;col>=1;col-- ){
//             cout<<"  ";
//         }
//         // print space
//      for(int col = 1;col<=row;col++ ){
//             cout<<"* ";
//         }
//         cout<<endl;
//         // print *
//     }
// }
// * * * * * * * * 
// * * *     * * *
// * *         * * 
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *


// int main(){
//     int n = 4;
//     for(int row = n ;row>=1;row--){
//         // print *
//         for(int col = 1;col<=row;col++ ){
//             cout<<"  ";
//         }
//         for(int col = 2*n - 2*row ;col>=1;col-- ){
//             cout<<"* ";
//         }
//         // print space
//      for(int col = 1;col<=row;col++ ){
//             cout<<"  ";
//         }
//         cout<<endl;
//         // print *
//     }
//     for(int row = 1 ;row<=n;row++){
//         // print *
//         for(int col = 1;col<=row;col++ ){
//             cout<<"  ";
//         }
//         for(int col = 2*n - 2*row ;col>=1;col-- ){
//             cout<<"* ";
//         }
//         // print space
//      for(int col = 1;col<=row;col++ ){
//             cout<<"  ";
//         }
//         cout<<endl;
//         // print *
//     }
// }
//       * *
//     * * * *
//   * * * * * *
//   * * * * * *
//     * * * *
//       * *


// int main(){
//     int n = 4;
//     for(int row = 1;row<=n;row++){
//         // print *
//         for(int col = 1;col<=row;col++){
//             cout<<"* ";
//         }
//         // space
          

//           for(int col = 1;col<=2*n - 2*row;col++){
//             cout<<"  ";

//           }

//         // print *
//         for(int col = 1;col<=row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
        

//     }
//     for(int row = n-1;row>=1;row--){
//         // print *
//         for(int col = 1;col<=row;col++){
//             cout<<"* ";
//         }
//         // space
          

//           for(int col = 1;col<=2*n - 2*row;col++){
//             cout<<"  ";

//           }

//         // print *
//         for(int col = 1;col<=row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
        

//     }
// }
// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

// int main(){
//     int n = 4;
//     for(int row = 1;row<=n;row++){
//         for(int col = 1;col<=n - row;col++){
//             cout<<" ";
//         }
//         for(int col = 1;col<=row;col++){
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }
// }