#include <bits/stdc++.h>
using namespace std;

template <typename T>
double Ave(const T *n, const int &cnt)
{
    double sum = 0;
    for (int i = 1; i <= cnt; i++)
    {
        sum += n[i];
    }
    return sum / (double)cnt;
}
//对字符预处理
void work_1(int *num, int *cnt, const char *s)
{
    int now = 0;
    int ct = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            num[++ct] = now;
            now = 0;
        }
        else
            now = now * 10 + (s[i] - '0');
    }
    num[++ct] = now; //注意最后一个数字后没有逗号
    *cnt = ct;
    return;
}
void work_2(double *num, int *cnt, const char *s)
{
    double now1, now2, xiaoShu = 1;
    int ct;
    bool flag = true; //true表示当前正在记录整数，false表示记录小数
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            num[++ct] = now1 + now2;
            now1 = now2 = 0;
            flag = true;
            xiaoShu = 1;
            continue;
        }
        if (s[i] == '.')
        {
            flag = false;
            continue;
        }
        if (flag)
            now1 = now1 * 10 + (s[i] - '0');
        else
        {
            xiaoShu /= 10;
            now2 = now2 + xiaoShu * (s[i] - '0');
        }
    }
    num[++ct] = now1 + now2;
    *cnt = ct;
    return;
}
double solve(const char *s)
{
    double ans;
    bool flag = true; //默认为整数
    for (int i = 0; i <= strlen(s); i++)
        if (s[i] == '.')
        {
            flag = false;
            break;
        }
    if (flag)
    {
        int num[10000];
        int cnt = 0;
        double sum = 0;
        work_1(num, &cnt, s);
        return Ave<int>(num, cnt);
    }
    else
    {
        int cnt = 0;
        double num[10000];
        work_2(num, &cnt, s);
        return Ave<double>(num, cnt);
    }
    return -1;
}
int main()
{
    char s[10086];
    memset(s, 0, sizeof(s));
    cout << "输入数字，以逗号隔开，以回车结束" << endl;
    gets(s);
    cout << solve(s);
    return 0;
}