#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector<int>a;
    vector<int>v1(5,1);

a.push_back(1);
a.push_back(2);
a.push_back(3);

a.push_back(5);
a.push_back(9);
a.push_back(1);


cout<<"Size of vector is :"<<a.size()<<endl;
cout<<"capacity of vector is :"<<a.capacity()<<endl;
cout<<"Size of vector1 is :"<<v1.size()<<endl;
cout<<"capacity of vector1 is :"<<v1.capacity()<<endl;
sort(a.begin(),a.end(),greater<int>());
for(int i = 0;i<=a.size()-1;i++){
cout<<a[i];
}

}