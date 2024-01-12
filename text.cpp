#include <iostream>
using namespace std;

int main(){
  
   char insta = 1;
   char youtube = 1;
   char study = 1;
   char alive = true;
int age = 0;
   while(alive){
    age++;
    cout<<age<<endl;
if(age == 60){
    break;
}
    if(insta){
        cout<<"insta scrool"<<endl;
    }
    if(youtube){
        cout<<"youtube scrool"<<endl;
    }
    if(study){
        continue;
cout<<"studying"<<endl;
    }



   }
  

}