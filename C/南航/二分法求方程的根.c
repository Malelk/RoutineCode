#include <stdio.h>

// 2x^{3} - 4x^{2} + 3x - 6 = 02x

int judge(double x)
{
    if (2 * (x * x * x) - 4 * x * x + 3 * x - 6 > 0)
        return 1;
    else
        return 0;
}

int main()
{
    double l = -15, r = 15;
    while (r - l > 0.0001) {
        if (judge((r + l) / 2))
            r = ((r+l)/2);
        else
            l = ((r + l) / 2);
    }
        
    printf("%.3lf",l); 
}