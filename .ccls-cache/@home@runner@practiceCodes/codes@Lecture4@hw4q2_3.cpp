//Divisible by 4
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number upto which numbers divisible by 4 should be printed: ";
  cin>>n;
  if(n<4)
    cout<<"There are no positive numbers less that "<<n<<" that are divisible by 4.";
  for(int i=4;i<=n;i=i+4){
    cout<<i<<" ";
  }
}