#include <bits/stdc++.h>
//https://www.youtube.com/watch?v=PPyw2vp6SIU&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=46
using namespace std;

int main(){
    int n, m; cin >> n>> m;
    int a[n], b[m];
    for (int & x : a) cin >> x;
    for (int & x : b) cin >> x;
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m){
        while (a[i] < b[j]){
            cnt++;
            i++;
        }
        cout << cnt << " ";
        j++;
    }
	while (j < m){
		cout << n << " "; j++;
		
	}


}