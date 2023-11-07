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






// int main(){

// int arr[] = {9,7,6,4,3,1};





// int start = 0;
// int end = 5;

// int key = 7;

 
// while(start<=end){
//     int middle = (start + end) / 2;
//     cout<<middle <<"\n";
//     if(arr[middle] == key){
//         cout<<"got it"<<middle;
//         break;
//     }else if(key > arr[middle]){
//         end = middle -1;
//     }else{
//         start = middle +1;
//     }

// }




// }







// Next day


// int main(){
//     int arr[] = {1,3,3,3,4,5};
//     int end = 5;
//     int start = 0;
//     int key = 3;
//     int first=-1;
//     int last = -1;

//     while (start<=end){
//       int mid = (end+start) / 2;
    
//       if(arr[mid] == key){
//         last = mid;
//      start = mid+1;
//         // first = mid;
//         // end = mid -1;
        
       
       

//       } else if(arr[mid] > key){
//         end = mid -1;

//       }else{
//         start = mid +1;
//       }
      

//       };
//     cout<<last<<endl;;
    

// };


// sqrt 
// int main(){
//     int x ;
//     cin>>x;
//     int start = 0;
//     int end = x;
//     int ans = x;
//     while(start<=end){
//         int mid =(start+end)/2;
//         if(mid*mid == x){
//             ans = mid;
//             break;
//         }else if(mid*mid > x){

//            end = mid -1;
//         }else{
//              ans = mid;
               
//             start = mid +1;

//         }
//     }
// cout<<ans<<endl;
// }


// int main(){
//     int arr[] ={1,3,4,5,6,8,7,4};
//     int start = 0;
//     int end = 7;
    
//     while(start<=end){
//       int mid = start + (end-start)/2;

//         if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+ 1]){
//             cout<<arr[mid];
//             break;
//         }else if(arr[mid] > arr[mid -1]){
//             start = mid +1;

//         }else{
//             end = mid -1;
//         }
//     }

// }

// day 29 paractic

// int main(){
//     int arr[] = {2,4,5,7,1,3};
    
//     for(int i = 0;i<5;i++){
//         for(int j = i+1;j<=5;j++){
//             if(arr[i] > arr[j]){
//        swap(arr[i],arr[j]);
//             }

//         }

//     }
//     for(int i =0;i<=5;i++){{
//         cout<<arr[i]<<" ";
//     }

//     }

// } 

// bubble sort
int main(){
    int arr[] = {4,3,4,2,1};
    for(int i = 4;i>=0;i--){
        for(int j = 1;j<=i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);

            }
        }
    }

    for(int i = 0;i<=4;i++){
        cout<<arr[i];
    }
}
































