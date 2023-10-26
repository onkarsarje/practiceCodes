#include<iostream>
using namespace std;
int main(){
  cout<<"Is the number Even or Odd.\nEnter a number: ";
  int num;
  cin>>num;
  if(num%2==0)
    cout<<"The number is Even.\n";
  else
    cout<<"The number is Odd.";
}