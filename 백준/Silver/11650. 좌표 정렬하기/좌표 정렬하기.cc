#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;
int main() {
  int a;
  cin >> a;
  deque<pair<int, int>> dq(a);
  for(int i = 0; i < a; i++){
    int b, c;
    cin >> dq[i].first >> dq[i].second;
  }
  sort(dq.begin(), dq.end());
  for(int i = 0; i < a; i++){
    cout << dq[i].first << " " << dq[i].second << '\n';
  }
}