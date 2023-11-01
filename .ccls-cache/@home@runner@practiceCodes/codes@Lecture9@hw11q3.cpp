// n=5
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
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
    for(char txt='A';txt<='A'+row-1;txt++){
      cout<<txt<<" ";
    }
    if(row>1){
      for(char txt='A'+row-2;txt>='A';txt--){
        cout<<txt<<" ";
      }
    }
    cout<<endl;
  }
}