#include <iostream>
using namespace std;
typedef long long int ll;
ll get_pisano_period(ll m) {
    ll a = 0, b = 1, c = 0;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }

}


ll get_fibonacci_huge(ll n, ll  m) {
    ll r=n%(get_pisano_period( m));
    ll f[r]={0};
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=r;i++)
    {
        f[i]=(f[i-1]+f[i-2])%m;
    }
    ll res=f[r];

    return res;
}


int main() {
    ll n, m;
    cin >> n >> m;
    cout << get_fibonacci_huge(n, m) << '\n';
}
