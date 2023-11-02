#include<iostream>
using namespace std;
int main(){
  int n,i=1,j=1;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<"Even numbers are: ";
  while(i<=n){
    if(i%2==0){
      cout<<i<<", ";
    }
    i++;
  }
  cout<<endl;
  cout<<"Odd numbers are: ";
  while(j<=n){
    if(n%2==1){
      cout<<j<<", ";
    }
    j++;
  }
  cout<<endl;
}