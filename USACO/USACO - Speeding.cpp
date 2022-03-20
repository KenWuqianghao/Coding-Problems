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

ifstream fin("speeding.in");
ofstream fout("speeding.out");

pair<int, int> limits[110];
pair<int, int> bessie[110];
pair<int, int> miles[110];

int main(){
    int n, m, max_speeding = 0, counter1 = 0, counter2 = 0;
    fin>>n>>m;
    for(int i = 0; i < n; i ++)
        fin>>limits[i].f>>limits[i].s;
    for(int i = 0; i < m; i ++)
        fin >> bessie[i].f >> bessie[i].s;

    for (int c = 0; c <= n; c++){
        for (int i = counter1; i <= counter1 + limits[c].f; i++){
            miles[i].f = limits[c].s;
        }
        counter1 = counter1 + limits[c].f;
    }

    for (int c = 0; c <= m; c++){
        for (int i = counter2; i <= counter2 + bessie[c].f; i++){
            miles[i].s = bessie[c].s;
        }
        counter2 = counter2 + bessie[c].f;
    }

    for (int i = 0; i <= 100; i++){
        if (miles[i].f - miles[i].s > max_speeding){
            max_speeding = miles[i].f - miles[i].s;
        }
    }
    fout << max_speeding;
}