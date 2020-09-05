#include <algorithm>
#include <iostream>
using namespace std;

typedef long long int ll;
ll fibo_sum_last_digit( ll n) {
    if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else {
    n=(n+2)%60;
    if(n==0) return 0;
    ll f[60]={0};
    f[0]=0;
    f[1]=1;
    for(ll i=2;i<=n;i++)
    {
        f[i]=(f[i-1] + f[i-2])%10;
    }
    return (f[n]%10-1) ;
  }
}
int main() {
    ll m; ll n; //from m to n
    cin >> m >> n;
    ll c = (fibo_sum_last_digit(n)+10)%10;
    ll d = (fibo_sum_last_digit(m-1)+10)%10;
    cout << (c-d+10)%10 << '\n';
    return 0;
    }
