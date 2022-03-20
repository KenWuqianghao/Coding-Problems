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
	ll n;
	int arr[2000010];
	cin>>n;
	for (int i = 0; i < n;i++){
		arr[i] = i + 1;
	}
	if (n < 3){
		cout<<"NO";
	}
	else if (n % 4 == 0 ){
		cout<<"YES"<<endl;
		cout<<n / 2<<endl;
		for (int i = 0; i < n / 4; i++){
			cout<<arr[n - 1 - 2 * i]<<" "<<arr[2*i]<<" ";
		}
		cout<<endl<<n / 2<<endl;
		for (int i = 0; i < n / 4; i++){
			cout<<arr[n - 2 - 2 * i]<<" "<<arr[2*i + 1]<<" ";
		}
	}	
	else if (n % 4 == 3){
		cout<<"YES"<<endl;
		cout<<n / 2 + 1<<endl;
		for (int i = 0; i < n / 2; i++){
			if (arr[4 * i] != 0 && arr[1 + 4 * i] != 0){
				cout<<(arr[4 * i])<<" "<<arr[1 + 4 * i]<<" ";
			}
		}

		cout<<endl<<n / 2<<endl;
		for (int i = 0; i < n / 2; i++){
			cout<<arr[2 + 4 * i]<<" ";
			if (arr[3 + 4 * i] == 0){
				break;
			}
			else{
				cout<<arr[3 + 4 * i]<<" ";
			}
		}
	}
	else{
		cout<<"NO";
	}
}