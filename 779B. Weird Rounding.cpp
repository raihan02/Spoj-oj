#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{

    string s ;
    ll k;

    while(cin >> s >> k)
    {

         int x = count(s.begin(), s.end(), '0');
        if(x < k)
        {
            cout<< s.length() - 1 << endl;
            return 0;
        }
        int c,c1;
        if(s.length() - 1 == k)
        {
            int c= 0;
            for(int i = 1; i < s.length(); i++)
            {
                if(s[i] == '0')
                    c++;
            }
            if(c == k)
                cout<<0<< endl;
            return 0;
        }
        if(s.length()-1 < k)
        {
            cout<< s.length()-1<< endl;
            return 0;

        }

        c=c1= 0;
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.length(); i++)
        {
            if(c1 == k)
            {
                break;
            }
            if(s[i] != '0')
            {
                c++;

            }
            else
                c1++;

        }
        cout<<c<< endl;
    }



}
