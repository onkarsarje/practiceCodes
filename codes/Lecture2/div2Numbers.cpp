#include<iostream>
using namespace std;
int main(){
  int num1, num2;
  float quotient, remainder;
  cout<<"Division of two numbers.\nEnter First Number: ";
  cin>>num1;
  cout<<"Enter Second Number: ";
  cin>>num2;
  quotient=num1/num2;
  remainder=num1 % num2;
  cout<<"The Quotient when Dividing First Number by Second Number is: "<<quotient<<endl;
  cout<<"The Remainder when Dividing First Number by Second Number is: "<<remainder;
}