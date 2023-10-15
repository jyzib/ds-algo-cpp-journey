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

int main()
{
    int n ;
    cin>>n;
    int count = countdigit(n);
   cout<<calcluate(n, count);
  
}