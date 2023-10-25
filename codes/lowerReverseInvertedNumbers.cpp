#include<iostream>
using namespace std;
int main(){
  
  for(int row=1;row<=5;row++){
    int num=5;
    for(int col=1;col<=row;col++){
      cout<<num<<" ";
      num--;
    }
    cout<<endl;
  }
}