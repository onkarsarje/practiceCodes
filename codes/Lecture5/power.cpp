#include<iostream>
using namespace std;
int main(){
  int n,p,ans=1;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<"Enter the power: ";
  cin>>p;
  for(int i=1;i<=p;i++){
    ans=ans*n;
  }
  cout<<n<<" to the power of "<<p<<" is: "<<ans<<endl;
}