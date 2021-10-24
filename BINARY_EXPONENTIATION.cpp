#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define debug(x) cerr << "Debug: " << '[' << x << ']' << endl;
#define dbg cerr << "[#__VA__ARGS__]" << endl << "[[#__VA__ARGS__]]" << endl;
#define sim(x, a) cout << "Case #" << x << ': ' << a << endl;
#define rim(x) (x == 1) ? cout << "YES" << endl : cout << "NO" << endl;
#define stc(a, s) strcpy(a, s.c_str()); 
#define cts(a, s) s = string(a);
template <typename T>
void arrdbg(T a, int n) {
	cerr << "[ "; 
	for(int i = 0; i < n; ++i) 
		cerr << a[i] << ' '; 
	cerr << "]" << endl;
}

long long powmod(long long a, long long b, long long MOD){
	long long res = 1;
	while(b > 0){
		if((b & 1) != 0) res = res * a;
		res = (res + MOD) % MOD;
		a = (a * a + MOD) % MOD;
		b = b >> 1;
	}
	return res;
}

int main()
{
	long long MOD = 1e9 + 7;
	long long a, b; scanf("%lld %lld", &a, &b);
	printf("%lld ^ %lld = %lld\n", a, b, powmod(a, b, MOD));
}
