#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
//#define int long long
using namespace std;

void solve(){
///==================================================
    int n,k;cin>>n>>k;
    string s;cin>>s;
    unordered_map<char,pair<int,int>>mp;
    for (char i = 'A'; i <='Z' ; ++i) {
        mp[i]={n+1,-1};
    }
    for (int i = 0; i <n ; ++i) {
        auto& tmp=mp[s.at(i)];
        tmp={min(tmp.first,i), max(tmp.second,i)};
    }
    int partialSum[n+1];
    mSet(partialSum,0);
    for (auto x:mp) {
        if (x.second.first<=n and x.second.second!=-1) {
            ++partialSum[x.second.first];
            --partialSum[x.second.second + 1];
        }
    }
    partial_sum(partialSum,partialSum+n+1,partialSum);
    outCondtion(*max_element(partialSum,partialSum+n+1)>k)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}