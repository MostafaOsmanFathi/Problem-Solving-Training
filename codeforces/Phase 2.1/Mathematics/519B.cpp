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
    int n;cin>>n;
   map<int,int>mp,mp2;
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        ++mp[tmp];
    }for (int i = 0; i < n-1; ++i) {
        int tmp;cin>>tmp;
        ++mp2[tmp];
    }
    for (auto& x:mp) {
        int tmp=x.second-mp2[x.first];
        while (tmp--){
            cout<<x.first<<endl;
            --x.second;
            goto label1;
        }
    }
    label1:
    mp2.clear();
    for (int i = 0; i < n-2; ++i) {
        int tmp;cin>>tmp;
        ++mp2[tmp];
    }
    for (auto& x:mp) {
        int tmp=x.second-mp2[x.first];
        while (tmp--){
            cout<<x.first<<endl;
            --x.second;
            goto label2;
        }
    }
    label2:
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}