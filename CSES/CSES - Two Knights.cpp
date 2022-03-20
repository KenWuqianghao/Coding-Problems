#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <math.h>

#define f first
#define s second
#define max(n, m) ((n>m)?n:m)
#define min(n, m) ((n<m)?n:m)
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;

ifstream fin("template.in");
ofstream fout("template.out");

int main(){
	ll n, ans = 0;
	cin>>n;
	if (n >= 1) cout<<"0"<<endl;
	if (n >= 2) cout<<"6"<<endl;
	if (n >= 3) cout<<"28"<<endl;
	if (n >= 4) cout<<"96"<<endl;
	if (n >= 5) cout<<"252"<<endl;
	for (ll i = 6; i <= n; i++){
		ans += 4 * (i * i - 3);
		ans += 8 * (i * i - 4);
		ans += (4 + 4 * (i - 4)) * (i * i - 5);
		ans += (4 * (i - 4)) * ( i * i - 7);
		ans += (i - 4) * (i - 4) * (i * i - 9);
		cout<<ans / 2<<endl;
		ans = 0;
	}
}