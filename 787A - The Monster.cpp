#include <bits/stdc++.h>
using namespace std;
int vis[10000000];
int main()
{
    int a, b;
    int c , d;
    cin >> a >> b;
    cin >>  c >> d;
    int x = 0;
    for(int i = b; i <= 10000000; i += a)
    {
        //cout<<i << endl;
        vis[i] = -1;

    }
    for(int i = d; i <= 10000000; i += c)
    {
          if(vis[i] == -1)
          {
              cout<<i << endl;
              return 0;
          }
    }
    cout<<-1;

}
