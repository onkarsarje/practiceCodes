#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number upto which you want all Even and Odd numbers: ";
  cin>>num;
  cout<<"Even:\n";
  for(int i=2;i<=num;i=i+2){
    cout<<i<<" ";
  }  
  cout<<endl<<"Odd:\n";
  for(int i=1;i<=num;i++){
    if(i%2!=0)
      cout<<i<<" ";
  }
}