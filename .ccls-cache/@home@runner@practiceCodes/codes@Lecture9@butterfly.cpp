// n=4
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
#include<iostream>
using namespace std;
int main(){
  int n; 
  cout<<"Enter number of rows: ";
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
      cout<<"* ";
    }
    for(int col=1;col<=2*n-2*row;col++){
      cout<<"  ";
    }
    for(int col=1;col<=row;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int row=n-1;row>=1;row--){
    for(int col=row;col>=1;col--){
      cout<<"* ";
    }
    for(int col=1;col<=2*n-2*row;col++){
      cout<<"  ";
    }
    for(int col=row;col>=1;col--){
      cout<<"* ";
    }
    cout<<endl;
  }
}