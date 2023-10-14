#include<iostream>
using namespace std;
// int primenumber(int n){
//       for(int i = 2;i<n;i++){
//         if(n%i == 0){
//             cout<<i<<endl;
//             cout<<n<<endl;
//             cout<<n%i<<endl;
//             return 0;
//         }
//       }
//        return 1;
// }
// int main(){
//  cout<<primenumber(2);


// }

// pass by value

// int increnment(int  n){
//      n++;
//      cout<<n<<endl;
// }


// int main(){
//     int a = 4;
//     increnment(a);
//     cout<<a;

// }
// pass by refrence

// int increnment(int & n){
//      n++;
//      cout<<n<<endl;
// }


// int main(){
//     int a = 4;
//     increnment(a);
//     cout<<a;

// }

// swip function
void swip(int & a,int & b ){
  int c = a;
  a = b;
  b = c;
}


int main(){
int g = 4;
int h = 8;
cout<<g<<h<<endl;
swip(g,h);
cout<<g<<h<<endl;

}