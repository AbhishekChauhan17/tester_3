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

const int MAXN = 200;
int SPF[MAXN];
int track[200] = {0};

void soe(){
	SPF[0] = 0;
	SPF[1] = 1;
	for(int i = 2; i * i < MAXN; ++i){
		if(SPF[i] != i) continue;
		for(int j = i * i; j < MAXN; j += i){
			SPF[j] = i;
		}
	}
}

void prime_factors(int n){
	vector<int> vr;
	while(n > 1){
		if(track[SPF[n]] == 0) {
			vr.push_back(SPF[n]);
			track[SPF[n]] = 1;
		}
		n = n / SPF[n];
	}
	for(int ii : vr) {
		cout << ii << " ";
		track[ii] = 0;
	}
	cout << endl;
}

int main()
{
	io;
	for(int i = 0; i < MAXN; ++i) SPF[i] = i;
	soe();
	for(int i = 0; i < MAXN; ++i){
		cout << i << " " << SPF[i] << "\n";
	}
	int n; cin >> n;
	cout << "LIST OF ALL THE PRIME FACTORS : \n"; 
	prime_factors(n);
	return 0;
}
