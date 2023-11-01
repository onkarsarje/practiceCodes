// Even and Positive
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  if(num>0 && num%2==0){
    cout<<"Even and Positive.\n";
  }else
    cout<<"Not Even and Positive.\n";
}