#include<iostream>
using namespace std;
int main(){
  int last=0,prev=1,last2=0,prev2=1,curr,curr2,n,m;
  cout<<"Enter a number of elements you want in the Fibonacci series: ";
  cin>>n;
  cout<<last<<" "<<prev<<" ";
  for(int i=1;i<=n-2;i++){
    curr=last+prev;
    cout<<curr<<" ";
    last=prev;
    prev=curr;
  }
  cout<<endl;
  cout<<"Enter the number for which index you want the element in the fibonacci series: ";
  cin>>m;
  if(m==1)
    cout<<last2<<endl;
  else if(m==2)
    cout<<prev2<<endl;
  for(int i=3;i<=m;i++){
    curr2=last2+prev2;
    last2=prev2;
    prev2=curr2;
  }
  cout<<"The "<<m<<"th element of the fibonacci series is: "<<curr2<<endl;
}