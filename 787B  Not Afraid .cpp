#include <bits/stdc++.h>
using namespace std;
int arr[10005];
int freq[10005];
int main()
{
    int m , n;
    while(cin >> m >> n)
    {
        map <int , int> mp;
        bool f1 = false , f2 = false;

        for(int i = 0;  i < n; i++)
        {
           int x;
           cin >> x;
           f1 = false;
           while(x--)
           {
               int a;
               cin >> a;
               if(mp.find(-a) != mp.end())
               {
                   f1 = true;
               }
               mp[a] = 1;
           }
           if(f1 == false)
            f2 = true;
           mp.clear();

        }
        if(f2)
            cout<<"YES"<< endl;
        else
            cout<<"NO"<< endl;
    }
}
