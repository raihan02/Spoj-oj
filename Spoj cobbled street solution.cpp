/**
/// Raihan Chowdhury
/// International Islamic University Chittagong
/// Uva : raihan02
/// Codeforces: raihan022
/// Lightoj: Omar Faruk Apu
/// FaceBook : https://www.facebook.com/profile.php?id=100006579644699
/// Gmail: raihanraju02@gmail.com
**/
/** 
   comment:
  spoj cobbled street 
  strait forward mst 
  result = min_mst_cost * one pave furlong street
**/
#include<bits/stdc++.h>
using namespace std;

#define ll          long long int
#define sf          scanf
#define pf          printf
#define F           first
#define S           second
#define pb          push_back
#define GCD(a, b)   __gcd(a, b)
#define LCM(a, b)   ((a*b)/GCD(a, b))

#define MOD         1000000007
#define M           10000
#define deb(x) cerr << #x << " = " << x << endl;
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}


#define deb(x) cerr << #x << " = " << x << endl;
#define visited 1
#define unvisited -1
typedef pair<int ,int> pi;
typedef vector <pi> vc;
int arr[100005];
vc node[100005];
priority_queue <pi> pq;

template<class T>

inline bool fs(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}
void prims(int src)
{
    arr[src] = visited;
    for(int i = 0; i < node[src].size(); i++)
    {
        pi v = node[src][i];
        if(arr[v.first] == -visited)
        {
           pq.push(make_pair(-v.second , -v.first));
        }
    }
}
int main()
{
   int tes;
   fs(tes);
   while(tes--)
   {

       int p , n, m;
       fs(p);
       fs(n);
       fs(m);
       for(int i = 0; i < m; i++)
       {
           int u , v, w;
           cin >> u >> v >> w;
           node[u].pb(make_pair(v, w));
           node[v].pb(make_pair(u , w));
       }


       memset(arr , unvisited , sizeof arr);
       prims(1);
        int cost = 0;
       while(pq.size())
       {
           pi ff = pq.top();
           pq.pop();
           int x = -ff.first;
           int y = -ff.second;
           if(arr[y] == unvisited)
           {
               cost += x;
               prims(y);

           }

       }
      printf("%d\n", cost * p);
   }
}
