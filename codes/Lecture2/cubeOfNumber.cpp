#include<iostream>
#include<math.h>
using namespace std;
int main(){
  double num,cube;
  cout<<"Cube of Number.\nEnter a number: ";
  cin>>num;
  cube=pow(num,3);
  cout<<"The cube of the number is: "<<cube;
}