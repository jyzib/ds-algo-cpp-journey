#include<iostream>
#include <vector>
using namespace std;
    // for(int i = 6;i>=0;i--){
    //        for(int j = 1;j<=6;j++){
    //           if(arr[j-1] >arr[j]){
    //             swap(arr[j-1],arr[j]);
    //           }
    //        }
    // }
//         int arr[]=  {1,0,1,1,0,0,1};
//     int one = 0,zero =0;
// for(int i = 0;i<7;i++){
//     if(arr[i]==0){
//         zero ++;
//     }else{
//         one++;
//     }
// }
// cout<<one<<endl;
// for(int i =0;i<zero;i++){
//     arr[i] = 0;
// }
// for(int i =zero;i<(zero + one);i++){
//     arr[i] = 1;
// }
// int main(){
//   int arr[]=  {1,0,1,1,0,0,1,1,0};
//   int start= 0;
//   int end = 8;
//   while(start<end){
//    if(arr[start] == 0){
//     start ++;
//    }else{
//     if(arr[end] == 0 ){
//         swap(arr[start],arr[end]);
//         start ++;
//         end--;
//     }else{
//         end--;
//     };
//    }
   
//   }
//   cout<<endl;
// for(int i = 0;i<9;i++){
//     cout<<arr[i];
// }

// }

// int main(){
//     int arr[] = {1,1,1,0,0,1,0};
//      int start = 0,end= 6;
//      while(start<end){
//         if(arr[start] == 0){
//             start ++;
//         }
//         else{
//             if(arr[end] == 1){
//                 end --;
//             }else{
//                 swap(arr[start],arr[end]);
//             }
//         }
//      }
//      for(int i = 0;i<6;i++){
//         cout<<arr[i];
//      }
// }

// int main(){
//   int arr[] = {1,2,3,5,7,9};
//   int target = 12;
//   int outerLoop = 0;
//  vector<int>a;
//   for(int i = 0;i<5-1;i++){
// int rem = target - arr[i];
// int start = i+1,end = 5,mid = 0;
// while(start<=end){
//     mid = (start+end)/2;
//     if(arr[mid] == rem){
//  a.push_back(i);
//  a.push_back(mid);
//  outerLoop = 1;
//         break;
//     }else if(arr[mid] < rem){
//         start = mid+1;

//     }else{
//         end = mid-1;
//     }
// }
// if(outerLoop){
//     break;
// }
// cout<<i<<endl;
//   }
// cout<<a[0];
// cout<<a[1];


// }
// int main(){
//      int arr[] = {2,7,11,15};
//   int target = 9;
//   int start = 0;
//   int end = 5;
//   while(start<end){
//     int sum = arr[start] + arr[end];
//     if(sum == target){
//         cout<<start<<end;
//         break;
//     }else if(sum>target){
//         end--;
//     }else{
//         start ++;
//     }

//   }
// }

// two pointer deff

int main(){
   int arr[] = {2,13,15,27,38,80};
   int target = 14;
   int start = 0;
   int end = 1;
   while(start<end){
    cout<<arr[end] - arr[start]<<endl;
    if ((arr[end] - arr[start]) == target){
        cout<<arr[end]<<arr[start];
        break;
    }else if((arr[end] - arr[start]) > target){
        start++;
    }else{
        end ++;
    }
   }



}