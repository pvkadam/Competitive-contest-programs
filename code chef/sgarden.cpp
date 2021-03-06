#include<bits/stdc++.h>

using namespace std;

#define TRACE

#ifdef TRACE
    #define trace1(x)                cerr << #x << ": " << x << endl;
    #define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
    #define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
    #define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
    #define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
    #define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

#else

    #define trace1(x)
    #define trace2(x, y)
    #define trace3(x, y, z)
    #define trace4(a, b, c, d)
    #define trace5(a, b, c, d, e)
    #define trace6(a, b, c, d, e, f)

#endif


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
#define ppi pair<int, pii>
#define pll pair<ll,ll>
#define ppl pair<ll,pll>
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
#define all(a)  a.begin(),a.end()

#define mapit map<int, int>::iterator


int abs(int x) {if(x < 0) return -x; return x;}

ll fast (ll n, ll m) {
	if (m == 0) return 1;
	ll d = fast(n, m / 2);
	
	d = d * d;
	d %= MOD;
	
	if (m & 1) {
		d *= n;
		d %= MOD;
	}
	
	return d;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t, n, k;
	int a[100010], vis[100010], arr[10010];
	cin >> t;
	
	while (t--) {
		cin >> n;
		k = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i+1];
		}
		
		mem(vis, 0);
		
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
				int x = i;
				int c = 0;
				while (!vis[x]) {
					vis[x] = 1;
					c++;
					x = a[x];
				}
				arr[k++] = c;
			}
		}
		
		map<int, int> m;
		
		for (int i = 0; i < k; i++) {
			int c = 0;
			for (int j = 2; j * j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					c = 0;
					while (arr[i] % j == 0) {
						c++;
						arr[i] /= j;
					}
					m[j] = max(m[j], c);
				}
			}
			if (arr[i]) {
				m[arr[i]] = max(m[arr[i]], 1);
			}
		}
		
		ll ans = 1;
		for (mapit it = m.begin(); it != m.end(); it++) {
			ans *= fast(it->fr, it->se);
			//trace1(it->fr);
			ans %= MOD;
		}
		
		cout << ans << endl;
	}
	return 0;
}


