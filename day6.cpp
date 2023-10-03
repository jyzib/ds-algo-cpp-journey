#include<iostream>
using namespace std;
// int main(){
//     for(int i= 1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//         cout<<j;
//         }
//         cout<<endl;
//     }
// }
// 1
// 12
// 123
// 1234
// 12345

// int main(){
//     for(int i = 1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//             char x = 'a' +(i-1);
//             cout<<x;
         
//         }
//         cout<<endl;
//     }
// }
// a
// bb
// ccc
// dddd
// eeeee


// int main(){
//     for(int i = 1;i<=5;i++){
//         for(int j = i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// 1
// 21
// 321
// 4321
// 54321
// int main(){
//     for(int row = 1;row<=5;row++){
//         for(int col = row;col <=5;col++){
//   cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// * * * * * 
// * * * *
// * * *
// * *
// *

// int main(){
//     for(int row = 1;row<=5;row++){
//         for(int col = 1;col<=5-row+1;col++){
//           cout<<col;
//         }
//         cout<<endl;
//     }
// }
// 12345
// 1234
// 123
// 12
// 1
// int main(){
//     for(int row = 1;row<=5;row++){
//         for(int col = 1;col<=row;col++){
//             cout<<5-col+1<<' ';
//         }
//         cout<<endl;
//     }
// }
// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
// int main(){
//       int n ;
//       cout<<"Enter pattern number ";
//       cin>>n;
//     for(int row = 1;row<=n;row++){
//         for(int col = 1;col<=n -(row);col++){
//             cout<<"  ";
//         }
//         for(int col = 1;col<=row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
//         * 
//       * *
//     * * *
//   * * * * 
// * * * * *


// int main(){
//     int n = 5;
//     for(int row = 1;row<=n;row++){
//         // print space
//         for(int col = 1;col<=n-row;col++){
//             cout<<" ";
//         }
//         // print number
//         for(int col=1;col<=row;col++){
//             cout<<row;
//         }
//         cout<<endl;
//     }
// }
//     1
//    22
//   333
//  4444
// 55555


// int main(){
//     int n = 5;
//     for(int row = 1;row<=n;row++){
//         for(int col = 1;col<= n-row;col++){
//          cout<<" ";
//         }
//         for(int col = 1;col<=row;col++){
//          cout<<n-(col-1);
//          cout<<col;
//         }
// cout<<endl;
//     }
// }
//     5
//    54
//   543
//  5432
// 54321
//     1
//    12
//   123
//  1234
// 12345


// int main(){
//     int n = 5;
//     for(int row = 1;row<=n;row++){
//         for(int col = 1;col<=n-row;col++){
//           cout<<"  ";
//         }
//         for(int col = 1;col<=row;col++){
//             char ch = 'A' + col - 1;
//        cout<<ch<<' ';
//         }
//         cout<<endl;
//     }
// }
//         A 
//       A B
//     A B C
//   A B C D
// A B C D E

int main(){
    int n = 5;
    for(int row = 1; row<=n;row++){
        for(int col = 1;col<=n-row;col++){
            cout<<' ';
        }
        for(int col = row;col>=1;col--){
            cout<<col;
        }
        cout<<endl;
    }
}