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

int fib(int n){
    if(n<=1){
        return 1;
    }
    n = n * fib(n-1);
}

int main()
{
    
    ios_base::sync_with_stdio(false);

    cout<<fib(5);

    return 0;
}