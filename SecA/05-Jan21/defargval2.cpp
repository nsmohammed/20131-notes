#include <iostream>
using namespace std;
void bar(char ch='=', unsigned int length=60){
  unsigned int i;
  for(i=0;i<length;i++){
    cout.put(ch);
  }
  cout<<endl;
}

int main(){
  bar('*', 10);
  bar('*');
  bar();
  return 0;
}