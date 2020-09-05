#include <iostream>
#include <algorithm>
using namespace std;

/* typedef long long int ll;
ll gcd_fast(ll a, ll b) {
  int x=0;
  if (b>a)
  {
      ll t=b;
      b=a;
      a=t;
  }
  if(b==0)
    {
      return a;
    }

ll y=0;

  while(b>0)
  {
      y=a%b;
      x=b;
      b=y;

  }

  return x;
}
*/
int main() {
  int a, b;
  cin >> a >> b;
  cout << __gcd(a, b) << endl;
  return 0;
}
