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
	ll w;
	cin>>w;
	if ( w % 2 == 0 && w > 2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}