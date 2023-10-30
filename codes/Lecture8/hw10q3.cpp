//     5
//    54
//   543
//  5432
// 54321
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
    int num=5;
    for(int col=1;col<=row;col++){
      cout<<num;
      num--;
    }
    cout<<endl;
  }
}