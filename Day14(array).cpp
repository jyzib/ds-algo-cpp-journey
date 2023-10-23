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
// int main(){
//     int arr[] = {6,4,8,34,12,3,43,67,1};
//     int temp = 0;
//     int ans =0;
//     for(int i = 1;i<=9;i++){
//          if(temp < arr[i-1]){
//             temp = arr[i-1];
//          }
//     }

//     for(int i = 0;i<9;i++){
//         if(temp != arr[i]){
//                if(ans < arr[i]){
//             ans = arr[i];
//          }
//         }
//     }
// cout<<temp<<endl;
// cout<<ans;
// }

// array rotate;
// int main(){
//     int arr[] = {2,3,4,5,6};
//     int temp ;
//      temp = arr[4];
//     for(int i = 3;i>=0;i--){

//        arr[i+1] = arr[i];
//         cout<<arr[i];
//     };
//     cout<<endl;
//     arr[0] = temp;
//     for(int i = 0;i<=4;i++){
//         cout<<arr[i];
//     }

// }

// int main(){
//     int arr[] = {3,9,4,1,6,8};

//     for(int i = 5;i>=0;i--){
//          int index = 5-i;
//         for(int j = i ;j>=0;j--){
//     if(arr[index] < arr[j]){
//              index = j;
//         };
//         };

//         cout<<arr[index]<<endl;
//         swap(arr[index],arr[i]);
//     }
//     for(int i = 0;i<=5;i++){
// cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] = {1,2,4,7,2};

//     for(int i = 0;i<5/2;i++){
//         swap(arr[i],arr[4-i]) ;
//     }
//     for(int i = 0;i<5;i++){
//         cout<<arr[i];
//     }
// }

// int main(){
//     int arr[] = {1,8,3,4,5};
//     int swiped = 0;
//     for(int i=5;i>0;i--){
// for(int j = 0;j<i;j++){
//     if(arr[j]<arr[j+1]){
//         swiped = 1;
//         swap(arr[j],arr[j+1]);
//     }
// }
// if(!swiped){
//     cout<<"braek";
//     break;

// }
//     }

//     for(int i = 0;i<5;i++){
//         cout<<arr[i];
//     }
// }

// selection sort
// int main()
// {
//     int arr[] = {2, 1, 7, 3, 6, 8};
//     for (int i = 0; i < 5; i++)
//     {
//         int index = i;
//         for (int j = i; j < 6; j++)
//         {
//             if (arr[index] > arr[j+1])
//             {
//                 swap(arr[index], arr[j+1]);
//                 index = j + 1;
//             }
//         }
//     }

//     for (int i = 0; i <6; i++)
//     {
//         cout << arr[i];
//     };
// }


// bubble sort



// int main(){
//   int arr[] = {25,4,3,6,2,1,};
//   for(int i = 5;i>0;i--){
//       for(int j = 1;j<=i;j++){
//         if(arr[j-1] > arr[j]){
//             swap(arr[j-1],arr[j]);

//         }
//       }
//   }




// for(int i = 0;i<6;i++){
// cout<<arr[i]<<" ";
// }
// }


// inserction sort

// int main(){
//     int arr[] = {4,9,3,7,2,1};
//     for(int i = 1;i<=5;i++){
//         for(int j = i;j>0;j--){
//          if(arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//          };
//         }
//     }


//     for(int i = 0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// binary search


int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
int start = 0;
int end = 8;
int key = 8;

    while(start <= end){
        int middle = (start + end) /2;

        if(arr[middle] == key){
            cout<<"Got it";
            break;
        }else if(arr[middle] < key){
            start = middle+1;

        }else{
            end = middle -1;
        }
    }
}








