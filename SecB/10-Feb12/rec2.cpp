#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c){
  static int r = 1;
  if(n==1){
    cout<<r++<<": "<<a<<"====>"<<c<<endl;
  }
  else{
    hanoi(n-1, a, c, b);
    cout<<r++<<": "<<a<<"====>"<<c<<endl;
    hanoi(n-1, b, a, c);
  }
}
int main(){
  hanoi(5, 'A', 'B', 'C');
  return 0;
}