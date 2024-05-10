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
map<char,pair<int,int>>mp{
        {'S',{0,-1}}
        ,{'N',{0,+1}}
        ,{'E',{+1,0}}
        ,{'W',{-1,0}}
};
void solve(){
///==================================================
    int n,sx,sy,ex,ey;cin>>n>>sx>>sy>>ex>>ey;
    string tmp;cin>>tmp;
    int dist= abs(sx-ex)+ abs(ey-sy);
    int ans{0};
    for (const auto& x:tmp) {
        pair<int,int>&pa=mp[x];
        int tmpX=sx+pa.first;
        int tmpY=sy+pa.second;
        int dist2= abs(tmpX-ex)+ abs(tmpY-ey);
        if (dist2<dist){
            sx+=pa.first;
            sy+=pa.second;
            dist=dist2;
        }
        ++ans;
        if (sx==ex and sy==ey)break;
    }
    if (!(sx==ex and sy==ey))ans=-1;


    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}