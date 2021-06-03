// ...

#include<bits/stdc++.h>
using namespace std;

//-----------------------------------------------------------------------------------
typedef long long int ll;
typedef long double ld;
#define endl "\n"
#define int long long
#define float long double
#define mm multimap
#define pb push_back
#define ff first
#define ss second
#define ln length
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define repe(i,a,b)  for(int i=a;i<=b;i++)
#define m_p make_pair
#define go_flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
const int mod = 1000000007;
const int inf = LLONG_MAX;
const int ninf = LLONG_MIN;
const int N = 1e5 + 5;
//-----------------------------------------------------------------------------------
void primeFactors(int p) {
	while (!(p % 2)) {p /= 2;} for (int i = 3; i * i <= p; i += 2) {
		while (!(p % i)) {p /= i;}
	} if (p > 2) {;}
}
//-----------------------------------------------------------------------------------
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
	cerr << vars << " = ";
	string delim = "";
	(..., (cerr << delim << values, delim = ", "));
	cerr << endl;
}
//-----------------------------------------------------------------------------------
void forv(vector<int> &v, int n) {int x; for (int i = 0; i < n; i++) {cin >> x; v.pb(x);}}
void printv(vector<int> v) {for (auto i : v) {cout << i << " ";}}
void fora(int *a, int n) {for (int i = 0; i < n; i++)cin >> a[i];}
void printa(int *a, int n) {for (int i = 0; i < n; i++)cout << a[i] << " ";}
void dmap(map<int, int> mp) {for (auto i : mp)cout << i.ff << " " << i.ss << endl;}
void dmmap(mm<int, int> mp) {for (auto i : mp)cout << i.ff << " " << i.ss << endl;}
void sortra(int *a, int n) {sort(a, a + n, greater<int>());}
void sortrv(vector<int> &v) {sort(all(v), greater<int>());}
//-----------------------------------------------------------------------------------
inline void guts() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
#endif
}
//-----------------------------------------------------------------------------------


void solve()
{

	cout << "GHOULS!!!";

}



signed main()
{
	go_flash;
	guts();
	// cout << fixed << setprecision(12);

	int t; cin >> t;
	while (t--)
	{
		//Your Code Blows HERE
		solve();
		cout << endl;
	}
	return 0;
}