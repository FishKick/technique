#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//Cho mảng A[] gồm n số nguyên dương và số k.
//Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho các số nhỏ hơn hoặc bằng k đứng cạnh nhau. 
//Ví dụ với mảng A[] = {2, 1, 5, 6, 3}, k = 3 
//ta chỉ cần thực hiện 1 phép đổi chỗ để có mảng A[] = {2, 1, 3, 6, 5}.
//Input:
//2
//
//5  3
//
//2  1  5  6  3
//outp: 1
//
//7  5
//2  7  9  5  8  7  4
//
//outp 2


int main(){
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >>k;
		int a[n];
		vector <int> v;
		int window = 0;
		for (int& x : a){
			cin >> x;
			if (x <= k) window++;
		} 
		int cnt = 0;
		for (int i = 0; i < window;i++){
			if (a[i] <= k) cnt++;
		}
		int ans =  cnt;
		for (int i = window; i < n; i++){
			if (a[i-window] <= k) --cnt;
			if (a[i] <= k) ++cnt;
			ans = max(ans, cnt);
		}
		cout << window - ans << endl;
		
	}

	return 0;
}
