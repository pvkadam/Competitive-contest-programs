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

int a[2005][2005];
int b[10005];
char res[2000055];

int main()
{
	int ch, x;
	int n;
	int cnt = 0;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
		if (a[i][i] == 1) {
			cnt++;	
		}
	}
	for (int i = 0; i < 10; i++) {
		//cout << a[i][i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		//cout << a[i][i] << endl;
	}
	cnt %= 2;
	int q;
	int p = 0;
	scanf ("%d", &q);
	while (q--) {
		scanf ("%d", &ch);
		if (ch == 1 || ch == 2) {
			scanf ("%d", &x);
			cnt++;
			cnt %= 2;
		} else {
			cnt = cnt % 2;
			res[p++] = cnt + '0';
			res[p] = '\0';
		}
	}
	for (int i = 0; i < 10; i++) {
		//cout << a[i][i] << endl;
	}
	printf ("%s\n", res);
	return 0;
}

