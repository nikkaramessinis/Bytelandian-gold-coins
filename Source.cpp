#include <stdio.h>
#include <iostream>
#include <algorithm> 
#define ll long long 



using namespace std;
ll dp[100000];

ll ans;
ll bytelandian(ll n) {
	if (n < 100000 && n>=0) {
		if (dp[n] != -1) { return dp[n]; }
	}
			ans = max(n,  bytelandian(n / 3) + bytelandian(n / 2) + bytelandian(n / 4));
			return ans;
}


int main() {
	for (ll i = 0; i < 100000; i++) { 
		if (i < 12) 
		{ dp[i] = i; }
		else 
		{ dp[i] = -1; } 
	}

	/*for (ll i = 0; i < 100000; i++) {
		bytelandian(i);
	}*/

	long long int number;
	while (cin >> number) {
		cout << bytelandian(number) << endl;
	}
}