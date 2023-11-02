// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
#include<iostream>
using namespace std;
int main(){
  char txt='A';
  while(txt<='Z'){
    cout<<txt<<" ";
    txt++;
  }
  cout<<endl;
  txt='a';
  while(txt<='z'){
    cout<<txt<<" ";
    txt++;
  }
  cout<<endl;
}