#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#pragma GCC optimize ("O2")
#pragma GCC target ("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<int, char> pic;
typedef pair<pii, int> piii;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<ll, ll> pll;
typedef pair<int, ll> pil;
typedef pair<ull, ull> pull;
#define max(n, m) ((n>m)?n:m)
#define min(n, m) ((n<m)?n:m)
#define f first
#define s second
#define input(x) ios_base::sync_with_stdio(x); cin.tie(x);

int main(){
	int t, n, arr[110], counter = 0, min = 0;
	cin>>t;
	for (int i = 0; i < t; i++){
		cin>>n;
		for (int j = 0; j < n; j++){
			cin>>arr[j];
		}
		min = arr[0];
		for (int h = 0; h < n; h++){
			if (arr[h] < min) min = arr[h];
		}
		for (int m = 0; m < n; m++){
			if (arr[m] == min) counter++;
		}
		if (counter == n) cout<<0<<endl;
		else cout<<counter<<endl;
		counter = 0;
	}
}