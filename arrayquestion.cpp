#include <iostream>
using namespace std;



// inserction sort
// int main(){
//     int arr[] = {2,5,1,4,9};
//    for(int i = 1;i<5;i++){
//     for(int j = i;j>=0;j--){
//         if(arr[j-1]>arr[j]){
//             swap(arr[i-1],arr[j]);
//         }else{
//             break;
//         }
//     }

//    }
//    for(int i = 0;i<5;i++){
//     cout<<arr[i];
//    }


   
// }


// binary search
// int binaryseatch(int arr[] , int target){
//  int start = 0;
//     int end = 7;
//     int mid = 0;
    
//     while(start <= end){
//         mid = start + end /2;
//         if(arr[mid] == target){
//             cout<<mid<<endl;
//             cout<<"found"<<endl;
//             return mid;
//         }else if(target > arr[mid]){
//           start = mid+1;
//         }else{
//             end = mid - 1;
//         }
//     }
// }


// int main(){
//     int target = 2;
//     int arr[] = {1,2,3,4,5,6,7,8};
//    cout<<binaryseatch(arr,target)<<endl;
// }


// first and last occerance in array


// int main(){
//     int arr[] = {1,2,3,3,3,6,7};
//     int start = 0;
//     int end = 6;
//     int mid = 0;
//     int first = -1;
//     int last = -1;
//     int target = 3;


//     while(start <= end){
//         mid = (start + end) / 2;
//         if(arr[mid] == target){
//          first = mid;
//          end = mid - 1;
      
//         }else if(target > arr[mid]){
//             start = mid + 1;
//              cout<<"click2"<<endl;
//         }else{
//             end = mid -1;
//              cout<<"click3"<<endl;
//         }

//     }
//       start = 0;
//      end = 6;
//      mid = 0;
//     while(start <= end){
//         mid = (start + end) / 2;
//         if(arr[mid] == target){
//          last = mid;
//          start = mid + 1;
      
//         }else if(target > arr[mid]){
//             start = mid + 1;
//              cout<<"click2"<<endl;
//         }else{
//             end = mid -1;
//              cout<<"click3"<<endl;
//         }

//     }
//     cout<<first<<","<< last <<endl;
// }


// Search Insert Position:


// int main(){
//     int arr[] = {1,2,3,5,6,7};
//     int start = 0;
//     int end = 5;
//     int index = 0;
//     int target = 6;
//     int mid = 0;
//     while(start <= end){
//      mid = (start+end)/2;
//      if(arr[mid] == target){
//         index = mid;
//         break;
//      }else if(target > arr[mid]){
//         start = mid +1;

//      }else{
//         index = mid;
//         end = mid -1;

//      }

//     }
//     cout<<index<<endl;
// }

// find sqrt of an array using binary search


// int main(){
//     int start = 0;
//     int num;
//     cin>>num;
//     int end  = num;
//     int tempans =0;
//     int mid = 0;
//      while(start <=end){
//         mid = (start + end)/2;
//         if((mid*mid) == num ){
// tempans = mid;
// break;
//         }else if((mid*mid) > num ){
//             end = mid -1;
//         }else{
//             tempans = mid;
//             start = mid +1;
//         }
//      }
//      cout<<tempans<<endl;
// }



// int main(){
//     int arr[] = {1,2,4,4,4,4,5,6};
//     int start = 0;
//     int end = 7;
//     int first = -1;
//     int last = -1;
//     int mid = 0;
//     int target = 4;

//     // left means first occurance
//     while(start <= end){
//         mid = (start + end)/2;
//         if(arr[mid] == target){
//             first = mid;
//             end = mid -1;

//         }else if(target > arr[mid]){
//             start = mid +1;

//         }else{
//             end = mid-1;
//         }
//     }
// start = 0;
// end = 7;
// mid = 0;
//        while(start <= end){
//         mid = (start + end)/2;
//         if(arr[mid] == target){
//             last = mid;
//             start = mid +1;

//         }else if(target > arr[mid]){
//             start = mid +1;

//         }else{
//             end = mid-1;
//         }
//     }
//     cout<<(last -first) +1<<endl;
   
// }



// int main(){
//     int arr[] = {1,3,4,5,8,9};
//     int start = 0;
//     int end = 5;
//     int mid = 0;
//     int target = 7;
//     int index = 0;
//     while(start<=end){
//         mid = (start+end) /2;
//          if(arr[mid]==target){
//             index = mid;
//             break;
//          }else if(target > arr[mid]){
//             start = mid +1;

//          }else{
//             index = mid;
//             end = mid -1;
//          }


//     }
//     cout<<index<<endl;

// }

int main(){
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
        int start = 0;
    int end = 11;
    int mid = 0;
    int first = 0;
    int last = 0;
    while(start<=end){
        mid = (start +end)/2;
        if(arr[mid] == 0){
            first = mid;
            end = mid -1;
        }else if( arr[mid] > 0){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }
    cout<<first<<endl;
    }
