#include <iostream>
using namespace std;
#include <vector>
int main (){
//     string s = "jazib";


//     for(int i = 0 ;i<s.size();i++){
//         for(int j = i+1;j<s.size();j++){
// int left = s[i];
// int right = s[j];
// if(left>right){
//     swap(s[i],s[j]);
// }
//         // cout<<s[j];
//         }
//     }

//     cout<<s;




vector<int>alpha(26,0);

string s = "jaazib";

for(int i = 0;i<s.size();i++){
    alpha[s[i] - 'a'] += 1;
}
string ans;

for(int i = 0;i<26;i++){
char c = i + 'a';
    while(alpha[i]){
ans += c ;
alpha[i]--;
    }
}
cout<<ans;

}