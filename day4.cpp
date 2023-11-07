#include<iostream>
using namespace std;
Q1 -> print in assending order
int main(){
    int row,col;
    for(row = 0;row<5;row++){
        for(col = 0;col<5;col++){
            cout<<col <<" " ;
        }
        cout<<endl;
    }
}
Q2-> Print number in desending order

int main(){
    for(int i = 1;i<5;i++){
        for(int j=5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

Q3-> print alphabet


int main(){

    for(int i = 0;i<5;i++){
        for(int j =0;j<5;j++){
        char alpa = 'a' + j;
              cout<< alpa <<" ";
        }
        cout<<endl;
    }
}

Q3-> Count number

int main(){
    int num = 1;
  for(int i = 0;i<5;i++){
    for(int j = 0;j<5;j++){
        cout<<(i)*5+j<<" ";
        num ++;
    }
cout<<endl;
  }

}

Q->4 print start

int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

Q5-> Print pattern with number 

int main(){
    for(int i=1;i<=5;i++){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}