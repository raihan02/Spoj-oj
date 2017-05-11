#include <bits/stdc++.h>
using namespace std;
int divisor[10001];
typedef long long ll;
int main()
{
    ll n;
    int tes;
    cin >> tes;
    while(tes--)
    {
        cin >> n;
          ll sum = 0;

          if(n == 1){
            cout<<"0"<< endl;
            continue;
          }
        for(int i = 1; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                 sum += i;
                //vs.push_back(i);
                if(n / i == i || n / i == n)
                    continue;
                sum += n/i;
                //vs.push_back(n/i);
            }
        }
        cout<<sum<< endl;

    }
}
