#include <iostream>
using namespace std;

int main(){
int arr[] = {10,4,9,7,8,3};
for(int i = 0;i<5;i++){
 
    for(int j = i+1;j>0;j--){
        cout<<j<<endl;
        if(arr[j-1] > arr[j]){
           int temp = arr[j-1];
           arr[j-1] = arr[j];
           arr[j] = temp;
        }else{
            break;
        }
    }
}




for(int i = 0;i<6;i++){
    cout<<arr[i]<< " ";
}


   
}