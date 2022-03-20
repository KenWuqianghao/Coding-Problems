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
	double with_test, without_test, n1, n2, semester1[20], semester2[20], ex = 0, ave1 = 0, ave2 = 0;
	vector <double> tot;
	cout<<"Number of tests in semester 1:";
	cin>>n1;
	cout<<"Number of tests in semester 2:";
	cin>>n2;
	cout<<"Grades for semester 1"<<endl;
	for (int i = 0; i < n1; i++){
		cout<<"Grade "<<i + 1<<endl;
		cin>>semester1[i];
		tot.push_back(semester1[i]);
	}
	cout<<"Grades for semester 2"<<endl;
	for (int i = 0; i < n2; i++){
		cout<<"Grade "<<i + 1<<endl;
		cin>>semester2[i];
		tot.push_back(semester2[i]);
	}

	for (int i = 0; i < n1 + n2; i++){
		ex += tot[i]/(n1 + n2);
	}

	for (int i = 0; i < n1; i++){
		ave1 += semester1[i];
	}
	ave1 /= n1;

	for (int i = 0; i < n2; i++){
		ave2 += semester2[i];
	}
	with_test = ((((ave2 + ex)/(n2 + 1)) * 0.8 + ex * 0.2) + ave1) / 2;
	without_test = (((ave2 / n2) * 0.8 + ex * 0.2) + ave1) / 2;
	if (with_test > without_test){
		cout<<"DO THE TEST! NUMBER PROVEN";
	}
	else if (without_test > with_test){
		cout<<"DON'T DO THE TEST! NUMBER PROVEN";
	}
	else{
		cout<<"DOESN'T MATTER! SAME SCORE!";
	}
}