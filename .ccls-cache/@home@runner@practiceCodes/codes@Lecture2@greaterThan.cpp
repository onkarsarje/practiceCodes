#include<iostream>
using namespace std;
int main(){
  float num1,num2;
  cout<<"Comparing two numbers to check which is bigger.\nEnter First Number: ";
  cin>>num1;
  cout<<"Enter Second Number: ";
  cin>>num2;
  if(num1==num2)
    cout<<"The numbers are equal.\n"<<endl;
  else if(num1>num2)
    cout<<"First number is greater than second number, "<<num1<<">"<<num2<<endl;
  else
    cout<<"Second number is greater than first number, "<<num1<<"<"<<num2<<endl;
}