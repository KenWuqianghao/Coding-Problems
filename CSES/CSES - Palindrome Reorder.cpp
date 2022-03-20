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

ll arr[30], odd_num, odd_index;
string input, ans;

int main(){
    cin>>input;
    for (int i = 0; i < input.size(); i++){
        arr[input[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++){
        if (arr[i] % 2 == 1) {
            odd_num++;
            odd_index = i;
        }
        if (odd_num >= 2) {
            cout<<"NO SOLUTION";
            break;
        }
    }
    if (odd_num == 1){
        for (int i = 0; i < 26; i++){
            for(int j = 0; j < arr[i]/2; j ++)
                ans+= (char)(i+'A');
        }
        ans += char(odd_index + 'A');
        for (int i = 26; i >= 0; i--){
            for(int j = 0; j < arr[i]/2; j ++)
                ans+= (char)(i+'A');
        }
        cout<<ans;
    }
    else if (odd_num == 0){
        for (int i = 0; i < 26; i++){
            for(int j = 0; j < arr[i]/2; j ++)
                ans+= (char)(i+'A');
        }
        for (int i = 26; i >= 0; i--){
            for(int j = 0; j < arr[i]/2; j ++)
                ans+= (char)(i+'A');
        }
        cout<<ans;
    }
}