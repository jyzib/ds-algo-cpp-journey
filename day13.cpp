#include <iostream>
using namespace std;

char convertstr(char x)
{

    char cap = (x - 'a') + 'A';
    return cap;
}

// int main(){
//     char ch;
//     cout<<"enter str\n";
//     cin>>ch;
//   cout<<convertstr(ch)<<endl;

// }

int countdigit(int n)
{
    int val = 0;
    while (n != 0)
    {
        val++;
        n /= 10;
    }
    return val;
}

int calback(int x, int y)
{
    int val = 1;
    for (int i = 1; i <= y; i++)
    {
        val *= x;
    }
    return val;
}
bool calcluate(int x, int y)
{
    int h = 0;
    int sum = 0;
    int p = x;
    while (x != 0)
    {
        h = x % 10;
        sum += calback(h, y);
        x /= 10;
    }

    if(p == sum){
        return true;
    }else{
 return false;
    }
   
}

// int main()
// {
//     int n ;
//     cin>>n;
//     int count = countdigit(n);
//    cout<<calcluate(n, count);
  
// }


// bishop
int main(){
    int a = 3,b=4;
    int total = 0;
    // bottom right
    if(8-a < 8-b){
    total += 8-a ;
    }else{
         total += 8-b;
    }
    // cout<<total;
// bottom left;
if(8-a<b-1){
    total += 8-a;
}else{
 total += b-1;

}


// top right

if(8-b<a-1){
    total += 8-b;
}else{
    total += a - 1;
}

if(a - 1 < b-1){
    total += a-1;
}else{
    total += b - 1;
}
cout<<total;










}