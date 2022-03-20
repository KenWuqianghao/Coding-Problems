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

vector<string> out;
void rec(int cur, vector<string> prev)
{
    out.clear();
    for(int i = 0; i < (int)prev.size(); i ++)
        out.push_back("0" + prev[i]);
    for(int i = (int)prev.size() - 1; i >= 0; i --)
        out.push_back("1" + prev[i]);
}
int main()
{
    int n;
    cin >> n;
    out.push_back("0"); out.push_back("1");
    for(int i = 2; i <= n; i ++)
        rec(i, out);
    for(int i = 0; i < out.size(); i ++)
        cout << out[i] << "\n";
}