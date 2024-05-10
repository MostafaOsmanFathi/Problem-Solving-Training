#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,m,k;cin>>n>>m>>k;
    string arr[n];
    int cost[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>cost[i];
    }
    unordered_map<string,int>mpCosts;
    for (int i = 0; i <m ; ++i) {
        int mn{INT_MAX},poss{-1};
        int x;cin>>x;
        int tmpArr[x];
        for (int j = 0; j < x; ++j){
            cin>>tmpArr[j];;
            --tmpArr[j];
            if (cost[tmpArr[j]]<mn){
                mn= cost[tmpArr[j]];
                poss=tmpArr[j];
            }
        }
        for (auto& xx:tmpArr) {
            mpCosts[arr[xx]]=mn;
        }
    }
    int ans{0};
    for (int i = 0; i <k ; ++i) {
        string tmp;cin>>tmp;
        ans+=mpCosts[tmp];
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}