// n=5
//     1
//    123
//   12345
//  1234567
// 123456789
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=n-1;col>=row;col--){
      cout<<"  ";
    }
    for(int col=1;col<=2*row-1;col++){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}