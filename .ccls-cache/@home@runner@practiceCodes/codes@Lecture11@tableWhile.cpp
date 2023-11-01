#include<iostream>
using namespace std;
int main(){
  int n,i=1;
  cout<<"Enter the number for which you want the table: ";
  cin>>n;
  while(i<=10){
    cout<<n<<"*"<<i<<"="<<n*i;
    i++;
    cout<<endl;
  }
}