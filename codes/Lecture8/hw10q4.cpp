//     E
//    ED
//   EDC
//  EDCB
// EDCBA
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=n-1;col>=row;col--){
      cout<<" ";
    }
    char txt='A'+n-1;
    for(int col=1;col<=row;col++){
      cout<<txt;
      txt--;
    }
    cout<<endl;
  }
}