#include <iostream>
using namespace std;


int n,a;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a<425)
            cout<<"See you next year!"<<endl;
        if(425<=a&&a<550)
             cout<<"Passed!"<<endl;
        if(a>=550)
            cout<<"Excellent!"<<endl;
    }
}