#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <cmath>

#define f first
#define s second
#define max(n, m) ((n>m)?n:m)
#define min(n, m) ((n<m)?n:m)
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;

int main(){
	ll t, n, ans;
	pll arr[200010];
	cin>>t;
	for (int i = 0; i < t; i++){
		cin>>arr[i].f>>arr[i].s;
	}
	for (int i = 0; i < t; i++){
		n = max(arr[i].f,arr[i].s);
		if (n % 2 == 0){
			if (arr[i].f == n){
				ans = n*n - n + 1 + (n - arr[i].s);
				cout<<ans<<"\n";
				ans = 0;
			}
			else{
				ans = n*n - n + 1 - (n - arr[i].f);
				cout<<ans<<"\n";
				ans = 0;
			}
		}
		else{
			if (arr[i].f == n){
				ans = n*n - n + 1 - (n - arr[i].s);
				cout<<ans<<"\n";
				ans = 0;
			}
			else{
				ans = n*n - n + 1 + (n - arr[i].f);
				cout<<ans<<"\n";
				ans = 0;
			}
		}
	}
}