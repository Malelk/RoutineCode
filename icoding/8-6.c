#include <stdio.h>
#include <stdlib.h>

char map[11][11];
int isMap(int i, int j)
{
    if (i < 1 || i > 10 || j < 1 || j > 10)
        return 0;
    if (map[i][j] != '.')
        return 0;
    else
        return 1;
}
void print()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%c", map[i][j]);
        }
        printf("\n");
        /* code */
    }
    printf("\n");
}
int main()
{
    //   time_t t;
    //  srand((unsigned) time(&t));
    int nx = 1, ny = 1;
    int cnt = 0;
    /*上下左右
    */
    int dx[4] = {-1, 1, 0, 0},
        dy[4] = {0, 0, -1, 1};
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 11; j++)
            map[i][j] = '.';
    while (cnt < 26)
    {
        // print();
        map[nx][ny] = 'A' + cnt;
        cnt++;
        if (cnt == 26)
            break;
        int flag[4] = {0, 0, 0, 0};
        int ct = 0;
        int tmpX, tmpY;
        while (ct < 4)
        {

            //      printf("de");
            int f = rand() % 4;
            tmpX = nx + dx[f],
            tmpY = ny + dy[f];
            if (!isMap(tmpX, tmpY))
            {
                ct += (1 - flag[f]);
                flag[f] = 1;
                continue;
            }
            nx = tmpX;
            ny = tmpY;
            break;
        }
        if (ct == 4)
            break;
        //     printf("1");
    }
    print();
    return 0;
}