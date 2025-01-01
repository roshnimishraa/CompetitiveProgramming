#include<iostream> 
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       bool Sorted = is_sorted(a.begin(), a.end());
        if(k>=2)
        {
            cout<<"YES"<<endl;
        }
        else{
            if(Sorted)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}
