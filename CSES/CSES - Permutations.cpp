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
	ll n;
	int arr[2000010];
	cin>>n;
	for (int i = 0; i < n; i++){
		arr[i] = i + 1;
	}	
	if (n <= 3 && n > 1){
		cout<<"NO SOLUTION";
	}
	else if (n%2 == 0){
		for (int i = 0; i < n/2; i++){
			cout<<arr[2*i+1]<<" ";
		}
		for (int i = 0; i < n/2; i++){
			cout<<arr[2*i]<<" ";
		}
	}
	else{
		for (int i = 0; i < n/2; i++){
			cout<<arr[2*i+1]<<" ";
		}
		for (int i = 0; i <= n/2; i++){
			cout<<arr[2*i]<<" ";
		}
	}
}