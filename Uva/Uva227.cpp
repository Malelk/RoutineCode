#include<bits/stdc++.h>
using namespace std;
char mmp[105][105]; 
char cmd;
int x,y,cnt,f,nx,ny;
int fx[5] = {-1,1,0,0};
int fy[5] = {0,0,-1,1};
bool pd(int i,int j) {
    if(i<1||j<1||i>5||j>5) return false;
    else return true;
}
int main() {
 //   cout<<"ow"<<endl;
    while(1) {
        
     //   cout<<"www"<<endl;
        memset(mmp,0,sizeof(mmp));
        for(int i = 1; i<=5; i++) 
            for(int j = 1; j<=5; j++) {
                mmp[i][j] = getchar();
                if(mmp[i][j]=='\n') j--;
                if(mmp[i][j]=='Z') return 0;
                if(cnt&&i==1&&j==1) cout<<endl;
                if(mmp[i][j]==' ') {
                    x=i;
                    y=j;
 //                   cout<<"woc"<<endl;
                }
            }
 //       cout<<x<<" "<<y<<endl;
        int woc = 1;
       while(1) {
           char c;
           
           c= getchar();
           if(c=='\n') continue;
           if(c=='0') break;
           if(c=='A') f = 0;
           if(c=='B') f = 1;
           if(c=='L') f = 2;
           if(c=='R') f = 3;
           nx = x + fx[f];
           ny = y + fy[f];
           if(!pd(nx,ny)) {
               woc = 0;
            //   printf("Puzzle #%d:\n",++cnt);
           }
           if(!woc) continue;
           swap(mmp[nx][ny],mmp[x][y]);
           x = nx;
           y = ny;
       
   //     cout<<"11"<<endl;
        }
        // if(!woc) continue;
       printf("Puzzle #%d:\n",++cnt); 
       if(!woc) {

           cout<<"This puzzle has no final configuration."<<endl;
           continue;
       }
       
        for(int i = 1 ;i<=5;i++) {
            for(int j = 1; j<=4;j++) {
                printf("%c ",mmp[i][j]);
            }
            printf("%c\n",mmp[i][5]);
        }
  //      char c = getchar();
    }
}