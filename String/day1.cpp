#include <iostream>
using namespace std;

void clockwise(string &s){
    int sizeM = s.size() -2;
    char c = s[s.size()-1];
   while(sizeM>=0){
    s[sizeM +1] = s[sizeM];
    sizeM--;
   }
   s[0] = c;

}
void anticlockwise(string &s){
    int count = 1;
    int size = s.size()-1;
    char c = s[0];
    while(count<=size){
        s[count -1] =  s[count];
        count ++;
    }
    s[s.size()-1] = c;

}
int main(){
    string s = "jazib";
    // cout<<s;
    
    // clockwise(s);
    // clockwise(s);
anticlockwise(s);

    // anticlockwise



    cout<<s;

   
}