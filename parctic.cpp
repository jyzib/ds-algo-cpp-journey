#include <iostream>
using namespace std;
 // Question - 1 Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
//  int main(){
//     int arr[] = {1,2,3,3,3,4,5,6};
//     int start = 0;;
//     int end = 7;
//     int first = -1;
//     int mid;
//     int arrr[] = {};
//     int target = 3;
//     int last = -1;
//     while(start<=end){

//         mid = (start+end)/2;

//         // first index
//         if(arr[mid] == target){
//             first = mid;
//             end = mid -1;
//         }else if(target > arr[mid]){
//             start = mid +1;
//         }else{
//             end = mid-1;
//         }
//     }
//     start = 0;
//     end = 7;

//     while(start<=end){

//         mid = (start+end)/2;

//         // first index
//         if(arr[mid] == target){
//             last = mid;
//             start = mid +1;
//         }else if(target > arr[mid]){
//             start = mid +1;
//         }else{
//             end = mid-1;
//         }
//     }
//     arrr[0] = first;
//     arrr[1]= last;

//         cout<<(arrr[1]-arrr[0])<<endl;




//  }
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4



// int main(){
//     int arr[] = {1,2,5,6};
//     int start = 0;
//     int end =3;
//     int mid;
//     int ans = 3+1;
//     int target = 7;
//     while(start<=end){
//        mid = start +(end-start)/2;
//         if(arr[mid] == target){
//             ans = mid;
//             break;
//         }else if( target > arr[mid]){
//             start = mid+1;
//         }else{
//             ans = mid;
//             end = mid-1;
//         }
//     }
//     cout<<ans<<endl;
// }





// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

// int main(){
//     int val = 16;
//     int start = 0;
//     int end = 16;
//     int mid;
//     int ans ;
//     while(start<=end){
//         mid = (start+end)/2;
//         if(mid*mid == val){
//             ans = mid;
//             break;
//         }else if(mid*mid > val){
//             end = mid -1;
//         }else{
//             ans = mid;
//             start = mid+1;
//         }

//     }
//     cout<<ans;
// }


int main(){
    int arr[] = {2,1,4,3,9,5};
    for(int i=5;i>=0;i--){
        for(int j = 1;j<=i;j++){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }


    for(int i =0;i<=5;i++){
        cout<<arr[i];
    }
}



