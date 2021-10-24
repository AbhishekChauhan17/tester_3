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

const int MAXN = 200100;
bool prime[MAXN] = {false};

void soe(){
	prime[0] = false;
	prime[1] = false;
	for(int i = 2; i * i < MAXN; ++i){
		if(!prime[i]) continue;
		for(int j = i * i; j < MAXN; j += i){
			prime[j] = false;
		}
	}
}

int main()
{
	io;
	for(int i = 0; i < MAXN; ++i) prime[i] = true;
	soe();
	for(int i = 0; i < 200; ++i){
		cout << i << " " << ((prime[i]) ? "YES" : "NO") << '\n';
	}
	cout << "\n";
}
