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
    int c1,c2,c3,c4;cin>>c1>>c2>>c3>>c4;
    int n,m;cin>>n>>m;
    unordered_map<int,int>mp1,mp2;
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        mp1[i]=tmp;
    }
    for (int i = 0; i < m; ++i) {
        int tmp;cin>>tmp;
       mp2[i]=tmp;
    }
    int tmp1{0},tmp2{0};
    for (const auto& [a,b]:mp1) {
        tmp1+= min(b*c1,c2);
    }for (const auto& [a,b]:mp2) {
            tmp2+= min(b*c1,c2);
    }
    tmp1= min(c3,tmp1);
    tmp2= min(c3,tmp2);
    cout<<min(tmp1+tmp2,c4)<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}