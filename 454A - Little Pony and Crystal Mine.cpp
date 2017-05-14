#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 1; i <= (n / 2) + 1; i++)
        {
            for(int j = n / 2; j >= i; j--)
            {
                printf("*");
            }
            for(int k = 1; k < i * 2; k++)
            {
                printf("D");
            }
           for(int p = n / 2; p >= i; p--)
           {
               printf("*");
           }
           printf("\n");
        }
        for(int i = 1; i <= n / 2; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for(int k = i; k < n - i; k++)
            {
                printf("D");
            }
            for(int p = 1; p <= i; p++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
