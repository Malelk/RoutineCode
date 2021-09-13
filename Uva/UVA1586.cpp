#include<bits/stdc++.h>

using namespace std;
int t,la;
const double nuke [10] = {0,12.01,1.008,16.00,14.01};
char a[105];
bool pd(int i) {
    if(i==la||(a[i]>='A'&&a[i]<='Z')) return 0;
    else return 1;
}//判断是否是数字
int main() {
    cin>>t;
    while(t--) {
        double ans = 0;
        memset(a,0,sizeof(a));
        scanf("%s",&a);
        la = strlen(a);
        int i = 0;
        while(i<la) {
          //  cout<<i<<endl;
            int flag;
            if(a[i]=='C') flag = 1;
            if(a[i]=='H') flag = 2;
            if(a[i]=='O') flag = 3;
            if(a[i]=='N') flag = 4;
            if(!pd(i+1)) {
                ans+=nuke[flag];
                i++;
            }
                else {
                        int count = 0;
                        if(pd(i+1)&&pd(i+2)) {
          //                  cout<<"我擦"<<endl;
          //                  cout<<i<<endl;
                            count+=10*(a[i+1]-'0');
                            count+=(a[i+2]-'0');
                            i+=3;
                        }
                        else {
                            count = (a[i+1]-'0');
                            i+=2;
                        }
            //            cout<<count<<endl;
                        ans+=(nuke[flag]*count);
                    }
                }
            printf("%.3f\n",ans);
            //cout<<ans<<endl;
        }
        return 0;
    }