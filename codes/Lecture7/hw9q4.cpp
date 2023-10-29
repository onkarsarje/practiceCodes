// A B C D
// A B C
// A B 
// A
#include<iostream>
using namespace std;
int main(){
  for(int row=4;row>=1;row--){
    char txt='A';
    for(int col=1;col<=row; col++){
      cout<<txt<<" ";
      txt++;
    }
    cout<<endl;
  }
}