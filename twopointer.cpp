#include<iostream>
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
int main(){
  int arr[]=  {1,0,1,1,0,0,1,1,0};
  int start= 0;
  int end = 8;
  while(start<end){
   if(arr[start] == 0){
    start ++;
   }else{
    if(arr[end] == 0 ){
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }else{
        end--;
    };
   }
   
  }
  cout<<endl;
for(int i = 0;i<9;i++){
    cout<<arr[i];
}

}