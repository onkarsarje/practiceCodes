//     1
//    22
//   333
//  4444
// 55555
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=n-row;col>0;col--){
      cout<<"  ";
    }
    for(int col=1;col<=row;col++){
      cout<<row<<" ";
    }
    cout<<endl;
  }
}