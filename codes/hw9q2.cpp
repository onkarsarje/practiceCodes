// A
// A B
// A B C
// A B C D
// A B C D E
#include<iostream>
using namespace std;
int main(){
  for(char txt='A';txt<='E';txt++){
    for(char alpha='A';alpha<=txt;alpha++){
      cout<<alpha<<" ";
    }
    cout<<endl;
  }
}