#include <iostream>
using namespace std;

void funcalldays(int n){
    if(n == 0){
         cout<< "Happpy birthday"<<endl;
        return ;
    }
    cout<< n <<" days left for birthday"<<endl;
    funcalldays(n-1);
}


int main(){
    funcalldays(4); 
}