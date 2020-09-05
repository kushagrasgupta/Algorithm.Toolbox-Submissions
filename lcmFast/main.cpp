#include <iostream>
using namespace std;
typedef long long int ll;
class gfg
{
public :
ll gcd(ll a, ll b){
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
ll lcm(ll a, ll b)
{
	return (a*b)/gcd(a, b);
}
};
int main()
{
	gfg g;
	ll a,b;
	cin>>a>>b;
	cout<<g.lcm(a, b);
	return 0;
}
