#include<iostream>
using namespace std;
int main(){
  int n,sum;
  cout<<"Enter the number upto which you want to find the sum.\n";
  cin>>n;
  if(n>0){
    sum=(n*(n+1))/2;
    cout<<"The sum of all Natural Numbers upto "<<n<<" is: "<<sum<<endl;
  }
  else
    cout<<"Enter a positive number.\n";
}