#include<iostream>
using namespace std;
int main(){
  float num;
  cout<<"Positive or Negative.\nEnter a number: ";
  cin>>num;
  if(num==0)
    cout<<"The number is neither positive nor negative.\n";
  else if(num>0)
    cout<<"The number is positive.\n";
  else
    cout<<"The number is negative.\n";
}