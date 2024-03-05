#include<iostream>

using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sum = a + b + c + d;

  cin >> a >> b >> c >> d;
  if ( sum > (a + b + c + d) ) {
    cout << sum;
  }else{
    cout << a + b + c + d;
  }
}