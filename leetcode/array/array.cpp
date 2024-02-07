#include <iostream>
#include <vector>
using namespace std;


int main(){
  int n =  6;

// int max = arr[0];
//   for(int i = 1;i<n;i++){
//     if(max < arr[i]){
//         max = arr[i];
//     }
 
//   }
// cout<<max;



// int small = INT_MAX;
// int second_small = 100;

// for(int i = 0;i < n;i++){

//     if(small > arr[i]){
//      second_small = small;
//      small = arr[i];
//     }else if(second_small > arr[i] && arr[i] != small){
// second_small = arr[i];
//     }
// }



// cout<<second_small;


// rotate a array by k 
int k = 4;
  vector<int>arr = {9, 7, 8, 4, 7, 6 };



while(k>0){

    int h = arr[arr.size()-1];
for(int i = arr.size() - 2;i>=0;i--){
    cout<<i<<endl;
    arr[i+1] = arr[i];
cout<<arr[i+1]<<endl;
}
arr[0] = h;
k--;
}

for(int i = 0;i<n;i++){
    cout<<arr[i];
}





}