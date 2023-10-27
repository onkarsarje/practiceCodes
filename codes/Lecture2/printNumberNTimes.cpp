#include<iostream>
using namespace std;
int main(){
  int count, number;
  cout<<"Enter the number you want to print: ";
  cin>>number;
  cout<<"Enter how many times you want to print the number: ";
  cin>>count;
  for(int i=1;i<=count;i++){
    cout<<number<<endl;
  }
}