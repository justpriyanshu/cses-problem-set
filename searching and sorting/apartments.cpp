/*
╔═══════════════════════════════════════════════════════════╗

               ~*PRIYANSHU3011*~

╚═══════════════════════════════════════════════════════════╝
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define f(i,a,b) for (int i = a; i < b; i++)
#define fe(itr,a) for(auto itr:a) 
#define fr(i,n) for(int i=n;i>=0;i--)
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define W(t) int t; cin>>t; while(t--)
#define PI 3.141592653589793238462643383279
#define mii map<int,int>
#define mll map<long long , long long>
#define inp(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.pb(x);}
#define in(x) cin>>x


/*decimal to binary function*/

vector<int> getBinary(ll n) 
{
    if (n == 0) return {0}; 
    
    vi v;
    while (n > 0) 
    {
        v.pb(n & 1);
        n >>= 1;
    }
    v.pb(0);
    reverse(v.begin(),v.end());
    return v;
}

/*solve*/

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vll v,v1;
    inp(v,n);
    inp(v1,m);
    sort(v1.begin(),v1.end());
    sort(v.begin(),v.end());
    ll count=0;
    ll j=0;
    ll i=0;
    while (j<m and i<n)
    {
        if (v1[j]<v[i]-k)
        {
            j++;
        }
        else if (v1[j]>v[i]+k)
        {
            i++;
        }
        else
        {
            count++;
            j++;
            i++;
        }
        
        
        
    }
    
    
    cout<<count<<endl;

}

/*main*/

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // W(t)
    // {
        solve();
    // }
    
    return 0;
}