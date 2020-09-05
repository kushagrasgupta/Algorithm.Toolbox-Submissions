#include <iostream>
#include<vector>
using namespace std;

typedef long long int ll;
ll get_nth_fibo(ll f[], ll n) {

    f[0]=0;
    f[1]=1;
    for(ll i=2;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2])%10;
    }
    return f[n] ;
}
ll get_last_digit(ll n) {
 ll f[60]={0};
 get_nth_fibo(f,60);
 return f[n%60];
 }

  int main() {
    ll n;
    cin >> n;
    ll c = get_last_digit(n);
    cout << c << '\n';
    return 0;
    }
