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

long long MOD = 1e9 + 7;
long long e[2][2] = {0, 1, 1, 1};

void mul(long long a[2][2], long long b[2][2]){
	long long res[2][2] = {0, 0, 0, 0};
	res[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
	res[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
	res[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
	res[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
	a[0][0] = (res[0][0] + MOD) % MOD;
	a[0][1] = (res[0][1] + MOD) % MOD;
	a[1][0] = (res[1][0] + MOD) % MOD;
	a[1][1] = (res[1][1] + MOD) % MOD;
}

void powmod(long long n){
	long long result[2][2] = {0, 1, 1, 1};
	while(n > 0){
		if((n & 1) != 0){
			mul(result, e);
		}
		mul(e, e);
		n = n >> 1;
	}
	e[0][0] = result[0][0];
	e[0][1] = result[0][1];
	e[1][0] = result[1][0];
	e[1][1] = result[1][1];
}

long long FIB(long long n){
	powmod(n - 1);
	cout << "FINAL FIBONACCI MATRIX : " << endl;
	cout << e[0][0] << " " << e[0][1] << endl;
	cout << e[1][0] << " " << e[1][1] << endl;
	cout << endl;
	return e[0][0];
}

int main()
{
	long long n; cin >> n;
	cout << FIB(n) << endl;
}
