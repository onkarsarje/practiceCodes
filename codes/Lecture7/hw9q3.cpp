// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15
#include<iostream>
using namespace std;
int main(){
  for(int row=10;row<=15;row++){
    for(int col=10;col<=row;col++){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}