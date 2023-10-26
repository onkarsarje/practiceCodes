#include<iostream>
using namespace std;
int main(){
  float package;
  cout<<"If package is more than 1Cr I will accept it.\nEnter the Package in crores: ";
  cin>>package;
  if(package>1)
    cout<<"Package Accepted."<<endl;
  else
    cout<<"Package Rejected and Negotiation."<<endl;
}