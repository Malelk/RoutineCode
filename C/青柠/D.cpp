#include <iostream>
#include <queue>
#include<cstring>
using namespace std;

int dire, sx, sy, ex, ey;
int dx[4] = {-1, 0, 1, 0},
    dy[4] = {0, 1, 0, -1}; //向右转！，上，右，下，左
int mmp[45][45];
pair<pair<int, int>, int> make(int x, int y, int cnt)
{
    return make_pair(make_pair(x, y), cnt);
}
void solve()
{
    memset(mmp, 0, sizeof(mmp));
    int m, n;
    cin >> n >> m;
    char c;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%c",&c);
            if (c == '#')
                mmp[i][j] = 1;
            if (c == '.')
                mmp[i][j] = 2;
            if (c == 'S')
            {
           //     cout << "start " << i << endl;
                sx = i;
                sy = j;
                mmp[i][j] = 2;
            }
            if (c == 'E')
            {
                ex = i;
                ey = j;
                mmp[i][j] = 3;
            }
        }
    }

    if (mmp[sx][sy - 1] == 1 && mmp[sx][sy + 1] == 1 && mmp[sx + 1][sy] == 0)
        dire = 0;
    if (mmp[sx][sy - 1] == 1 && mmp[sx][sy + 1] == 1 && mmp[sx - 1][sy] == 0)
        dire = 2;
    if (mmp[sx - 1][sy] == 1 && mmp[sx + 1][sy] == 1 && mmp[sx][sy - 1] == 0)
        dire = 1;
    if (mmp[sx - 1][sy] == 1 && mmp[sx + 1][sy] == 1 && mmp[sx][sy + 1] == 0)
        dire = 3;
    int nx = sx, ny = sy;
    int flag = 1;
    int cnt1 = 0;

    //向左
    while (!(nx == ex && ny == ey))
    {
        cnt1++;
        dire = (dire + 3) % 4;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
        dire = (dire + 1) % 4;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
        dire = (dire + 1) % 4;
        //  cout<<dire<<"OOK"<<endl;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
        dire = (dire + 1) % 4;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
    }
    cout << ++cnt1 << " ";
    cnt1 = 0;
    nx = sx;
    ny = sy;
    while (!(nx == ex && ny == ey))
    {
        // cout<<dire<<endl;
        //  cout<<nx<<" "<<ny<<endl;
        cnt1++;
        dire = (dire + 1) % 4;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
        dire = (dire + 3) % 4;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
        dire = (dire + 3) % 4;
        //  cout<<dire<<"OOK"<<endl;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
        dire = (dire + 3) % 4;
        if (mmp[nx + dx[dire]][ny + dy[dire]] != 1 && mmp[nx + dx[dire]][ny + dy[dire]] != 0)
        {
            nx += dx[dire];
            ny += dy[dire];
            continue;
        }
    }
    cout << ++cnt1 << " ";
    cnt1 = 0;
    queue<pair<pair<int, int>, int>> q;
    q.push(make(sx, sy, 1));
    int book[45][46];
    memset(book, 0, sizeof(book));
    int ans = 1;
    while (!q.empty())
    {
        int nowx = q.front().first.first;
        int nowy = q.front().first.second;
        
        book[nowx][nowy] = 1;
        int now = q.front().second;
       // cout<<nowx<<" "<<nowy<<" "<<now<<" "<<endl;
        if(nowx==ex&&nowy==ey) {
            ans = now;
            break;
        }
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nex = nowx +dx[i],
                ney = nowy+dy[i];
            if(nex<1||nex>m||ney<1||ney>n||mmp[nex][ney] == 1 ||book[nex][ney]) continue;
      //      cout<<nex<<" "<<ney<<endl;
            q.push(make(nex,ney,now+1));
        }
     //   cout<<q.size()<<endl;
    }
    // for(int i =1;i<=n;i++) {
    //     for(int j =1;j<=m;j++) {
    //         cout<<mmp[i][j];
    //     }
    //     cout<<endl;
    // }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
