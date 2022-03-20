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
	string str = " ";
	cin>>str;
	int len = str.length(), i = 0, counter = 0;
	vector<int> arr;
	while (true){
		if (i == str.length()){
			break;
		}

		else if (str[i] == str[i + 1]){
			counter++;
			i++;
		}

		else{
			arr.push_back(counter);
			counter = 0;
			i++;
		}
	}
	cout<<*max_element(arr.begin(), arr.end())+1;
}