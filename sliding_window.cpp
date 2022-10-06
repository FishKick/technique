#include <bits/stdc++.h>

using namespace std;

//sliding window technique
//bài toán (in ra tổng lớn nhất của dãy con có k phần tử)
//inp:
//9 4
//1 4 2 10 2 3 1 0 20

//out << 24



int main(){
	int t; cin >>t;
	while (t--){
		int n, k; cin >> n >> k;
		int a[n];
		for (int& x : a) cin >> x;
		int current_sum = 0;
		for (int i = 0; i < k; i++){
			current_sum+=a[i];
		}
		int res = INT_MIN;
		for (int  i = k; i < n ;i++){
			current_sum = current_sum - a[i-k] + a[i]; // technique
			res = max(res, current_sum);
		}
		cout << res << endl;
	}
	return 0;
}