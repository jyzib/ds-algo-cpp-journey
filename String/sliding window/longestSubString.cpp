#include <iostream>
using namespace std;

int main(){
    string s = "ababc";


int first = 0;
int second = 1;
int index = 0;

while(index < s.size()){
    int length = 0;
     int g = 0;
     int c = 0;
    for(int i = second;i>0;i--){
      
        if(s[first] != s[i]){
           c++;
            g = 0;

        }else{
            first = second;
            second++;
            g = 1;
        }
    }
if(c>length){
    length = c;
    cout<<c;
}

index ++;
}


}