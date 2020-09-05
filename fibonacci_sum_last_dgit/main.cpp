#include <iostream>
#include<vector>
using namespace std;

typedef long long int ll;
ll fibo_sum_last_digit( ll n) {
    n=(n+2)%60;
    ll f[60]={0};
    f[0]=0;
    f[1]=1;
    for(ll i=2;i<=n;i++)
    {
        f[i]=(f[i-1] + f[i-2])%10;
    }
    return (f[n]%10-1) ;
}

  int main() {
    ll n;
    cin >> n;
    ll c = (fibo_sum_last_digit(n)+10)%10;
    cout << c << '\n';
    return 0;
    }
