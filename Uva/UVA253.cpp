#include<bits/stdc++.h>
using namespace std;
char a[10],b[10],c[10],d[10]; 
char s[20];
int fuck[6][6] = {
{0,1,2,3,4,5},
{1,5,2,0,4,3},
{2,3,0,1,5,4},
{3,0,2,5,4,1},
{4,1,0,3,5,2},
{5,1,4,3,2,0}
};
bool ans;
void solve() {
	for(int i = 0; i <= 3; i++) {
		
		d[0] = c[0];
		d[5] = c[5];
		for(int j = 1; j <= 4; j++) {
			int cnt = 1;
			d[(j+i)%4+1] = c[j];
			for(int k = 0; k <= 5; k++) {
				if(a[k]!= d[k]) cnt = false;
			}
			if(cnt) {
				ans = true;
				return;
			}
		}
		
	}
}
int main() {
	int flag = 1;
	while(~scanf("%s",s)) {
		if(!flag) cout<<endl;
		flag = 0; 
		ans = false;
		for(int i =0;i<=5;i++) {
			a[i] = s[i];
		}
		for(int i = 6; i <= 11; i++) {
			b[i-6] = s[i];
		}
//		for(int i = 0; i<= 5;i++)
//			cout<<a[i];
		for(int i = 0; i <= 5; i++) {
			for(int j = 0; j <= 5; j++) {
				c[j] = b[fuck[i][j]];
			}
//			for(int j = 0; j <= 5; j++) {
//				cout<<c[j]<<" ";
//				
//			}
//			cout<<endl;
			solve();
		}
		if(ans) cout<<"TRUE";
		else cout<<"FALSE";
	}
	return 0;
}

