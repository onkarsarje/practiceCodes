#include<iostream>
using namespace std;
int main(){
  bool rain,umbrella;
  string positive="I will go out.\n";
  string negative="I will not go out.\n";
  for(int i=1;i<=4;i++){
    cout<<"If it is Raining and I have an Umbrella I'll go out.\nIs it raining? 1/0:\n";
    cin>>rain;
    cout<<"Do I have an Umbrella? 1/0: \n";
    cin>>umbrella;
    if(rain==1  && umbrella==1)
      cout<<positive;
    else if(rain==1 && umbrella==0)
      cout<<negative;
    else if(rain==0 && umbrella==1)
      cout<<positive;
    else
      cout<<positive;
    cout<<"The next day.\n";
  } 
}