#include <iostream>
using namespace std;
//    class Hero{

//     private:
//     string name;
//      public:
//      string getname(){
//        return name;
//      }
//      void setName(string n){
//         name = n;
//      }

//    };
  
class Human{
    public:
    int age;
    int waigth;
    int hight;
    void call(){
        cout<<"call";
    }
};
class Men : public Human{
    string color;
    
};

 int main(){
    Men h1;
  h1.call();

   
 }