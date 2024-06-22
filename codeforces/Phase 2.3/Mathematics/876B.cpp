#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"Yes":"No")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,k,m;cin>>n>>k>>m;
    map<int,vector<int>>mp;
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        mp[tmp%m].push_back(tmp);
    }
    for (const auto& x:mp) {
        if (x.second.size()>=k){
            outCondtion(true)
            for (int i = 0; i <k ; ++i) {
                cout<<x.second.at(i)<<" ";
            }
            return;
        }
    }
    outCondtion(false);

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}