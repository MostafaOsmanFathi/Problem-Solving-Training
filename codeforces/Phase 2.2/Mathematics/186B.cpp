#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define int long long
using namespace std;
bool cmp(pair<ld,int>&a,pair<ld,int>&b){
    if (a.first==b.first)
        return b.second>a.second;
    return a.first>b.first;
}
void solve(){
///==================================================
    ld n,l,r,k;cin>>n>>l>>r>>k;
    k=100-k;
    pair<ld,int>pa[(int)n];
    for (int i = 0; i < n; ++i) {
        int a,b;cin>>a>>b;
        pa[i].first= max(((a*l*(k/100.0))+r*b),((b*l*(k/100.0))+r*a));
        pa[i].second=i+1;
    }
    sort(pa,pa+(int)n,cmp);
    for (auto& x :pa) {
        cout<<x.second<<" "<<x.first<<endl;
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()
    cout<<fixed<<setprecision(2);
//    tloop
    solve();

    return 0;
}