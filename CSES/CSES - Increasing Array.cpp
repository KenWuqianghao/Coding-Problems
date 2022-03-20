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

int main(){
	ll n, arr[200010], ans = 0, counter = 0;
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for (int i = 0; i < n - 1; i++){
		if (arr[i] > arr[i + 1]){
			counter = arr[i] - arr[i + 1];
			ans += counter;
			arr[i + 1] = arr[i];
		}
	}
	cout<<ans;
}