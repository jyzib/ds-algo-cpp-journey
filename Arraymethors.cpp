#include <iostream>
using namespace std;

// selection sort
// int main (){
//     int arr[] = {2,19,4,39,9,6};
//     for(int i = 1;i<5;i++){
//         int index = i-1;
//         for(int j = i;j<=5;j++){
//             if(arr[index]>arr[j]){
//                 swap(arr[index],arr[j]);
//                 index = j;
//             }
//         }
               
//     }
//     for(int i = 0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// bubble sort

// int main(){
//     int arr[] = {9,19,4,39,1,6};
//     for(int i = 5;i>0;i--){
//         for(int j = 1;j<=i;j++){
//             if(arr[j-1]>arr[j]){
//                 swap(arr[j-1],arr[j]);

//             }
//         }
//     }
//         for(int i = 0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// inserction sort

// int main(){
//      int arr[] = {9,19,4,39,1,6};
//      for(int i = 1;i<=5;i++){
//         for(int j = i;j>0;j--){
//             if(arr[j-1]>arr[j]){
//                 swap(arr[j-1],arr[j]);
//             }
//         }
//      }

//     for(int i = 0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }


// }






int main(){

int arr[] = {9,7,6,4,3,1};





int start = 0;
int end = 5;

int key = 7;

 
while(start<=end){
    int middle = (start + end) / 2;
    cout<<middle <<"\n";
    if(arr[middle] == key){
        cout<<"got it"<<middle;
        break;
    }else if(key > arr[middle]){
        end = middle -1;
    }else{
        start = middle +1;
    }

}




}