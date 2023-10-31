// a>b and a>c
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  cout<<a<<" "<<b<<" "<<c<<" ";
  if(a>b&&a>c){
    cout<<"positive\n";
  }
  else
    cout<<"negative\n";
}