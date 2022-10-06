#include <bits/stdc++.h>

using namespace std;

//sliding window technique
//bài toán (in ra tổng lớn nhất của dãy con có k phần tử)
//inp:
//9 4
//1 4 2 10 2 3 1 0 20
// 1 bài toán nũa là bắt in ra dãy con có tổng lớn nhât thì mình phải lấy đc vị trí đầu tiên của dãy con thỏa mãn đề bài || out << 3 1 0 20
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

//inp:
//9 4
//1 4 2 10 2 3 1 0 20
// 1 bài toán nũa là bắt in ra dãy con có tổng lớn nhât thì mình phải lấy đc vị trí đầu tiên của dãy con thỏa mãn đề bài || out << 3 1 0 20

int main(){
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		int a[n];
		
		for(int& x : a) cin >> x;
		int sum = 0;
		for (int i = 0; i < k; i++){
			sum+=a[i];
		}
		int res=sum;
		int idx = 0;
		for (int i = k; i < n; i++){
			sum = sum - a[i-k] + a[i];
			if (sum > res){
				res = sum;
				idx = i - k + 1;
			}
		}
		
		for (int i = 0; i < k;i++){
			cout << a[idx + i] << " ";
		}
		cout << endl;
	}
	
	

	return 0;
}
