#include <iostream>
using namespace std;

int main(){
  int b = 2;
  int c = 1;
  int z = 0;
  int x;
  x = b && (c+=1);
  cout<<x<<b<<c<<endl;
  x = z && (c+=1);
  cout<<x<<z<<c<<endl;
  return 0;
}