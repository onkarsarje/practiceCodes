#include<iostream>
using namespace std;
int main(){
  int count;
  cout<<"Enter upto where you want to print the natural numbers: ";
  cin>>count;
  if(count>0){
    for(int i=1;i<=count;i++){
      cout<<i<<" ";
    }
  }else
    cout<<"Enter a positive number.\n"
}