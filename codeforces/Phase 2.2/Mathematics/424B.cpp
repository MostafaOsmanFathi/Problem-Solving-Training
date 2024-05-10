#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,k;cin>>n>>k;
    vector<pair<ld,int>>vc;
    for (int i = 0; i <n ; ++i) {
        int a,b,c;cin>>a>>b>>c;
        vc.push_back({sqrt((a*a)+(b*b)),-c});
    }
    sort(vc.begin(),vc.end());
    int i = 0;
    for (; i < n and k<1e6; ++i) {
        k+=-vc.at(i).second;
    }
    --i;
    if (k<1e6)
        cout<<-1;
    else
        cout<<vc.at(i).first;
///==================================================
}
signed main() {MOSTAFAOSMAN()
    cout<<fixed<<setprecision(7);
//    tloop
    solve();

    return 0;
}