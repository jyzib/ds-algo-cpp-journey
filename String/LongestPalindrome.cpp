#include <iostream>
#include <vector>
using namespace std;

int main(){
string s = "aAbccAdeef";
vector<int>Lower(26,0);
vector<int>Upper(26,0);

for(int i = 0;i<s.size();i++){
    if(s[i]>= 'a'){
        Lower[s[i] - 'a']++;
    }else{
        Upper[s[i]-'A']++;
    }
}
int count = 0;
bool odd = 0;
for(int i = 0;i < 26;i++){
   if(Lower[i] % 2 == 0){
      count += Lower[i] ;
   }else{
    odd = 1;
          count += Lower[i]-1 ;
   }

   if(Upper[i]%2 == 0){
    count += Upper[i];
   }else{
     odd = 1;
    count += Upper[i] -1;
   }
}
count+= odd;
cout<<count;

}