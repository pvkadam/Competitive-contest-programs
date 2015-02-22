#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <cstdlib>
#include <string>
#include <list>
#include <bitset>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <deque>
#include <climits>
#include <cassert>

using namespace std;

#define ull unsigned long long
#define ll long long
#define Max(x,y) ((x)>(y)?(x):(y))
#define Min(x,y) ((x)<(y)?(x):(y))
#define Sl(x) scanf("%lld",&x)
#define Su(x) scanf("%llu",&x)
#define S(x) scanf("%d",&x)
#define IS(x) cin>>x
#define ISF(x) getline(cin,x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pps pair<ll,pll>
#define ppf pair<pll,ll>
#define psi pair<string,int>
#define pis pair<int,string>
#define fr first
#define se second
#define MOD 1000000007
#define MP(x,y) make_pair(x,y)
#define eps 1e-7
#define V(x) vector<x>
#define pb(x) push_back(x)
#define mem(x,i) memset(x,i,sizeof(x))
#define fori(i,s,n) for(i=(s);i<(n);i++)
#define ford(i,s,n) for(i=(n);i>=(s);--i)
#define INF 8944674407370955161LL
#define debug(i,st,arr) fori(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define forci(i,sw) for((i)=(sw).begin();(i)!=(sw).end();(i)++)
#define forcd(i,sw) for((i)=(sw).rbegin();(i)!=(sw).rend();(i)++)

int abs(int x) {if(x < 0) return -x; return x;}

int main()
{
	ios_base::sync_with_stdio(false);
	int n, m, x, y;
	cin >> n >> m;
	bool a[n][n];
	mem(a, 0);
	bool f = false;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		if (!f) {
			x--, y--;
			a[x][y] = 1;
			for (int j = x - 2; j <= x; j++) {
				for (int k = y - 2; k <= y; k++) {
					if (j >= 0 && k >= 0 && (j + 2) < n && (k+2) < n) {
						bool res = false;
						for (int p = j; p <= j + 2; p++) {
							for (int q = k; q <= k + 2; q++) {
								if (a[p][q] == false) {
									res = true;
									break;
								}
							}
						}
						if (res == false) {
							cout << i + 1 << endl;
							f = true;
							break;
						}
					}
				}
				if (f) break;
			}
		}
	}
	if (!f) {
		cout << -1 << endl;
	}
	return 0;
}
