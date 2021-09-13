//A C G T
//T G C A
#include<bits/stdc++.h>
using namespace std;
int t,m,n;
char a;
int mmp[1005][5], flag[1005], mx[1005],cnt;
// int turn1(char a) {
//     if(a=='T') return 1;
//     if(a=='G') return 2;
//     if(a=='C') return 3;
//     if(a=='A') return 4;
// }
// char turn2(int i) {
//     if(i==1) return 'T';
//     if(i==2) return 'G';
//     if(i==3) return 'C';
//     if(i==4) return 'A';
// }
int main() {
    cin>>t;
    while(t--) {
        memset(mmp,0,sizeof(mmp));
        memset(flag,0,sizeof(flag));
        memset(mx,0,sizeof(mx));
        cnt = 0;
        cin>>m>>n;
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j<= n;j++) {
          //      cout<<"running"<<endl;
                a = getchar();
                if(a==' '||a=='\n') j--;
                int woc;
                if(a=='T') woc =  1;
                if(a=='G') woc = 2;
                if(a=='C') woc = 3;
                if(a=='A') woc = 4;
                mmp[j][woc]++;
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= 4; j++) {
                if(mmp[i][j]>= mx[i]) {
                    flag[i] = j;
                    mx[i] = mmp[i][j];
                }
            }
        }
  //      cout<<"running"<<endl;
 //       for(int i = 1;i <= n;i++) cout<<flag[i]<<" ";
        for(int i = 1; i <= n; i++) {
            cnt +=mmp[i][flag[i]];
        }
        for(int i = 1; i <= n; i++) {
            char cc;
            if(flag[i]==1) cc =  'T';
            if(flag[i]==2) cc = 'G';
            if(flag[i]==3) cc = 'C';
            if(flag[i]==4) cc = 'A';

            printf("%c",cc);
        }
        printf("\n%d\n",m*n-cnt);
    }
    return 0;
}