#include <iostream>
using namespace std;

// int main(){
//     int arr[] ={3,4,-2,5,8,20,-10,8};
//     int total = 0;
//     for(int i =0;i<=7;i++){
//         // add each element to total
//    total += arr[i];
//     }
//     int prefix = arr[0];
//     for(int i = 1;i<=7;i++){
//         if(prefix == (total - prefix)){
//             cout<<"true";
//             return 1;
           
//         }else{
//             prefix += arr[i];
//         }
//     }
// cout<<"false";
//  return 0;
// }
// int main(){
//     int arr[] = {4,2,0,5,2,6,2,3};
//     int wall = arr[0];
//     int unit = 0;
//     for(int i =1;i<7;i++){
//     int max = 0;
//         for(int j = i;j<=7;j++){
//             if(max < arr[j]){
//                 max = arr[j];
//             }
//         }
//         if(wall < max){
//             if(wall > arr[i]){
//             unit += (wall - arr[i]);
//             }else{
//                 wall = arr[i];
//             }
//         }else{
//             unit += (max - arr[i]);
//         }
//     }
//     cout<<unit<<endl;
// }

// int main(){
//     int arr[] = {1,4,6,8,10,45};
//     int target = 21;
//     int val = false;
//     for(int i = 0;i<=5-2;i++){
//         for(int j = i+1;j<=5-1;j++){
//             int ans = target - (arr[i] + arr[j]) ;
//             cout<<ans<<endl;
//             int start = j+1;
//             int end = 5;
//             while(start<end){
//               int mid = (start + end) /2;
//               if(arr[mid] == ans){
              
//                 val = true;
//                 break;
//               }else if(arr[mid] > target){
//                 end = mid -1;
//               }else{
//                 start = mid +1;
//               }
//             }
//             if(val){
//                 break;
//             }
//         }
//           if(val){
//                 break;
//             }
      
//     }
//     cout<<val<<endl;
// }