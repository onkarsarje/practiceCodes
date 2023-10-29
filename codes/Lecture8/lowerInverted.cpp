//     *
//    **
//   ***
//  ****
// *****
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=n-1;col>=row;col--){
      cout<<" ";
    }
    for(int star=1;star<=row;star++){
      cout<<"*";
    }
    cout<<endl;
  }
}