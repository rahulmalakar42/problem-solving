//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        int a, aa, b, bb; cin>>a>>aa>>b>>bb;
        if(a*a + aa*aa == b*b + bb*bb){
            cout<<"EQUAL"<<endl;
        }
        else if(a*a + aa*aa > b*b + bb*bb){
            cout<<"ALEX"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }
    }

    return 0;
}