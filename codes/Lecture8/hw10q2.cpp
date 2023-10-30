//     A
//    BB
//   CCC
//  DDDD
// EEEEE
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  char txt='A';
  for(int row=1;row<=n;row++){
    for(int col=n-1;col>=row;col--){
      cout<<" ";
    }
    for(int col=1;col<=row;col++){
      cout<<txt;
      
    }
    txt++;
    cout<<endl;
  }
}