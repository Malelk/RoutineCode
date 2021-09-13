#include<bits/stdc++.h>
using namespace std;
char c;
bool tool = 1;
int main() {
  //  freopen("tt.in","r",stdin);
    while((c=getchar())!=EOF) {
        if(c=='"') {
    //        cout<<tool<<endl;
            if(tool) {
                cout<<"``";
                tool = false;
            }
            else {
                cout<<"''";
                tool = true;
            }
            
            
        }
        else cout<<c;

    }
    return 0;
}