#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//Tuyến đường ven biển của thành phố Highland có N chiếc đèn. 
//Không may cơn bão vừa rồi đã làm hỏng B chiếc đèn.
//
//Để khắc phục sự cố và nhanh chóng khôi phục lại hoạt động du lịch, 
//chính quyền thành phố đã quyết định sửa tạm thời một số đèn đường
// bị hỏng sao cho có ít nhất một khu vực có K chiếc đèn liên tiếp hoạt động.
//
//Các bạn hãy xác định xem số đèn đường cần phải sữa chữa ít nhất là bao nhiêu?
//
//Input
//
//Dòng đầu tiên gồm 3 số nguyên dương N, K và B (1 ≤ B, K ≤ N ≤ 100 000).
//
//B dòng tiếp theo, mỗi dòng chứa vị trí của một chiếc đèn bị hỏng.
//
//Output
//
//In ra số đèn đường cần sửa ít nhất sao cho có một khu vực có nhiều hơn hoặc bằng K chiếc đèn hoạt động.
//
//Ví dụ:
//
//Input
//
//
//
//10 6 5
//2
//10
//1
//5
//9
//
//Output
//1

 



int main(){
	int n, k , b; cin >> n >> k >> b;
	
	int a[n];
	for (int i = 0; i < n; i++) a[i] = 1;							
	
	
	for (int  i = 0; i < b; i++){
		int x; cin >> x;
		a[x-1] = 0;
	}
	
	int cnt = 0;
	for (int i = 0; i < k; i++){
		if (a[i] == 1) cnt++;
	}
	int ans = cnt;
	for (int i = k; i < n; i++){
		if (a[i-k] == 1) --cnt;
		if (a[i] == 1) cnt++;
		ans = max(ans, cnt);
	}
	
	cout << k - ans;
	

	return 0;
}
