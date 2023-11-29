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
int main(){
    int arr[] = {4,2,0,5,2,6,2,3};
    int wall = arr[0];
    int unit = 0;
    for(int i =1;i<7;i++){
    int max = 0;
        for(int j = i;j<=7;j++){
            if(max < arr[j]){
                max = arr[j];
            }
        }
        if(wall < max){
            if(wall > arr[i]){
            unit += (wall - arr[i]);
            }else{
                wall = arr[i];
            }
        }else{
            unit += (max - arr[i]);
        }
    }
    cout<<unit<<endl;
}