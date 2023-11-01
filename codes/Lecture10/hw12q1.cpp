// Temperature between 70 and 90 (excluded) is suitable for swimming
#include<iostream>
using namespace std;
int main(){
  int temp;
  cout<<"Enter the temperature: ";
  cin>>temp;
  if(temp>70 && temp<90){
    cout<<"Temperature is suitable for swimming.\n";
  }
  else
    cout<<"Temperature is not suitable for swimming.\n";
}