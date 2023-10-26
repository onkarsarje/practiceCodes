#include<iostream>
using namespace std;
int main(){
  bool rain,umbrella,checknextday=1;
  
  string positive="I will go out.\n";
  string negative="I will not go out.\n";

  while(checknextday==1){
    cout<<"If it is Raining and I have an Umbrella I'll go out.\nIs it raining? 1/0:\n";
    cin>>rain;
    
    if(rain==1){
      cout<<"Do I have an Umbrella? 1/0: \n";
      cin>>umbrella;
      if(umbrella==1)
        cout<<positive;
      else
        cout<<negative;
    }
    else
      cout<<positive;
    
    cout<<"Wanna check the next day. 1/0\n";
    cin>>checknextday;
  } 
}