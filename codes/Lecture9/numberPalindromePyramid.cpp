// n=5
//     1
//    121
//   12321
//  1234321
// 123454321
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=n-row;col++){
      cout<<"  ";
    }
    for(int col=1;col<=row;col++){
      cout<<col<<" ";
    }
    for(int col=row-1;col>=1;col--){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}