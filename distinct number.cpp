#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define f(i,a,b) for (int i = a; i < b; i++)
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;

int main(int argc, char const *argv[])
{
    ll int n;
    cin>>n;
    set<int> s;
    f(i,0,n)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
    return 0;
}