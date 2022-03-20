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
	ll n;
	cin>>n;
    cout<<n<<" ";
	while (n!=1){
		if (n%2 == 0){
			n = n/2;
			cout<<n<<" ";
		}
		else{
			n = n*3+1;
			cout<<n<<" ";
		}
	}
}