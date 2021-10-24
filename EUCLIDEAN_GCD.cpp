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

long long GCD(long long a, long long b){
	if(a == 0) return b;
	return GCD(b % a, a);
}

int main()
{
	io;
	long long a, b; cin >> a >> b;
	cout << "GCD (" << a << ", " << b << ") = " << GCD(a, b) << '\n';
}
