#include <iostream>
#include <vector>
using namespace std;


int main(){
vector<string>str(9,"");
string s = "is2 a3 boy5 good4 He1 ";
string p ;
int index = 0;

while(index < s.size()){

if(s[index] == ' '){

   
    str[s[index-1] - '0'] = p;
    p = "";

}




    p += s[index];
    index++;
}

// cout<<p<<endl;
for(int i = 0;i<9;i++){
    cout<<str[i];
}
}