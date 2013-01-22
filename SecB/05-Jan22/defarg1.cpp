#include <iostream>
using namespace std;


void bar(char ch, unsigned int length){
  int i;
  for(i=0;i<length;i++){
    cout.put(ch);
  }
  cout<<endl;
}

void bar(char ch){
  bar(ch, 60);
}

void bar(){
  bar('=');
}

int main(){
  bar('-', 20);
  bar('*');
  bar();
  bar('@', 40);
  return 0;
}