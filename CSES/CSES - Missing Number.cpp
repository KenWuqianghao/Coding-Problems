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
	ll n, given[200010], arr[200010];
	cin>>n;
	for (int i = 0; i < n - 1; i++){
		cin>>given[i];
	}
	for (int i = 0; i < n; i++){
		arr[i] = i + 1;
	}
	sort(given, given + n - 1);
	for (int i = 0; i < n; i++){
		if (given[i] != arr[i]){
			cout<<arr[i];
			break;
		}
	}
}