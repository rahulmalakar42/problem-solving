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
#define sortd(v) sort(v.rbegin(), v.rend())


int main()
{
    
    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    vi v;
    for(int i=0; i<a; i++){
        int b; cin>>b;
        if(b==1){
            v.eb(i);
        }
    }
    
    int ans=1;
    for(int i=1; i<v.size(); i++){
        if(v[i]-v[i-1]<=2){
            ans+=v[i]-v[i-1];
        }
        else{
            ans+=2;
        }

    }
    if(v.size()){
        cout<<ans<<endl;
    }
    else{
        cout<<ans-1<<endl;
    }


    return 0;
}