#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n , m;
    cin >> n >> m;
    m--;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int j = 0; j <= n; j++)
    {
        if(j <= m)
        {
            m = m - j;

        }
        else
            break;
    }

    cout<<arr[m] << endl;
}
