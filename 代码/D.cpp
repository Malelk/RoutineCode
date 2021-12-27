#include<iostream>
#include<algorithm>
#include<cstdio>
#include<deque>
using namespace std;

int bullet[1005],cnt,l,r,hp,x,d,dps;
int Max = 1;
int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
        cin>>bullet[i];
    sort(bullet+1,bullet+1+n);
    cin>>l>>r>>hp>>dps>>x;
    int ran = r-l;
    for(int i =1;i<=n;i++)
    {
        if(bullet[i]+x>=l&&bullet[i]+x<=r) cnt++;
    
    }
    
    if(dps*cnt>=hp)
    {
        cout<<"YES"<<endl<<cnt<<endl;
        return 0;
    }
    for(int i =1;i<=n;i++)
    {
        for(int j = i;j<=n;j++)
        {
            if(bullet[j]-bullet[i]>ran)
                break;
            Max = max(Max,j-i+1);
        }
    }
    hp-=dps*cnt;
    int ans = 0;
    cout<<"NO"<<endl;
    //cout<<dps<<endl;
    while(hp>0)
    {
        hp-=Max*dps;
        ans++;
    }
    cout<<ans<<endl;
}