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

int main(){

    vector<int> list = {1,2,3,4,4,5,6,7,8,9};

    int sum1 =0, sum2=0;

    for(auto it:list){
        sum1 = sum1 + it;
    }

    int n = 9;

    sum2 = (n*(n+1))/2;

    cout<<"welcome to the website sir"<<endl;

    cout<< "The number occuring twice is " <<sum1-sum2<<endl;


    return 0;
}