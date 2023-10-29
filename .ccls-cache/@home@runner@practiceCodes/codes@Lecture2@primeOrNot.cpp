#include<iostream>
using namespace std;
int main(){
  int num;
  string notPrime="The number is not a Prime.";
  cout<<"Enter a number to check if the number is Prime: ";
  cin>>num;
  bool isPrime= true;
  if(num<2){
    cout<<notPrime;
    return 0;
  }
  else{
    for(int i=2;i<num;i++){
        if(num%i==0){
          isPrime=false;
          cout<<notPrime;
          break;
        
        }
    }
  }
  if(isPrime){
  cout<<"The number is a Prime.\n";
  return 0;
  }
}