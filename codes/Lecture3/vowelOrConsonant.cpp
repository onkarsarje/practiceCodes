#include<iostream>
using namespace std;

int main(){
  char txt;
  cout<<"Enter a character: ";
  cin>>txt;
  if(txt=='a'||txt=='A'||txt=='e'||txt=='E'||txt=='i'||txt=='I'||txt=='o'||txt=='O'||txt=='u'||txt=='U'){
    cout<<"The Character is a Vowel.\n";
  }
  else
    cout<<"The Character is a Consonant.\n";
}
