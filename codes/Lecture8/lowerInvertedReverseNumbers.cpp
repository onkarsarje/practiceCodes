//     1
//    21
//   321
//  4321
// 54321
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=n-row;col>0;col--){
      cout<<" ";
    }
    for(int col=row;col>0;col--){
      cout<<col;
    }
    cout<<endl;
  }
}