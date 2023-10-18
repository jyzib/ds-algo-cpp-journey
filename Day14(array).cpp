#include <iostream>
using namespace std;
// int main(){
//     int arr[5] = {4,2,23,4,5};
//     int h =3;
// cout<<sizeof(arr) / sizeof(arr[0]) ;


// //   for(int i  = 0;i<5;i++){
// //  if(a<arr[i]){
// //     a = arr[i];
// //  }
// //   }
 


   
// }

// search an element in array
    // int search(int arr[], int N, int X)
    // {
        
    //    for(int i = 0;i<N;i++){
    //        if(arr[i]==X){
    //            return i;
    //        }
    //    }
    //    return -1;
       
        
    // }
// reverse an integer;
// int main(){
//     int arr[] = {2,3,1,3,43,12,3};
//     int curr = 0;
//     for(int i = 0;i<6;i++){
//         cout<<arr[i]<<' ';
//     }
//     cout<<endl;
//   for(int i = 0;i<6/2;i++){
//     curr = arr[i];
//     arr[i] = arr[(6-i) - 1];
//     arr[(6-i)-1] = curr;


//   }
//       for(int i = 0;i<6;i++){
//         cout<<arr[i]<<' ';
//     }
// }
int main(){
    int arr[] = {6,4,8,34,12,3,43,67,1};
    int temp = 0;
    int ans =0;
    for(int i = 1;i<=9;i++){
         if(temp < arr[i-1]){
            temp = arr[i-1];
         }
    }

    for(int i = 0;i<9;i++){
        if(temp != arr[i]){
               if(ans < arr[i]){
            ans = arr[i];
         }
        }
    }
cout<<temp<<endl;
cout<<ans;
}



