// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
#include<iostream>
using namespace std;
int main(){
  int n,i=2;
  cout<<"Enter a number to find if it is prime: ";
  cin>>n;
  while(i<n){
    if(n%i==0){
      cout<<"Not Prime"<<endl;
      return 0;
    }
    i++;
  }
  cout<<"Prime"<<endl;
}