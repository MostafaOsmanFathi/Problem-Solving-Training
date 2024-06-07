#include <bits/stdc++.h>
#define max_val INT_MAX
#define min_val INT_MIN
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define forloop(n) for (int i = 0; i < n; ++i)
#define int long long
#define endl "\n"
#define MOSTAFAOSMAN()    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arthmaticSum(a1,an,n) (((a1+an)*n)/(double)2)
#define geomatricSum(a,r,n) static_cast<long double>((a*(1-pow(r,n)))/(1-r))
#define ncr(n,r) (tgamma(n+1) / (tgamma(r+1) * tgamma(n-r+1)))
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define PI (3.14159265358979323846)
#define sinDeg(degrees) sin(degrees * (PI/180.0))
#define cosDeg(degrees) cos(degrees * (PI/180.0))
#define IN()  freopen("galactic.in", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout) ;
using namespace std;
const int SZ{100000};
const int SZZ{10000000};
//int frq[SZZ]{0};
bool cmp(const pair<int,int>& a,const pair<int,int>& b){
    int mn1= min(a.first*2,a.second),mnC1=min(a.first,a.second);
    int mn2= min(b.first*2,b.second),mnC2=min(b.first,b.second);
    return (mn1-mnC1)>(mn2-mnC2);
}

void solve() {
///=======================================
    int n,q;cin>>n>>q;
    vector<pair<int,int>>vc(n);
    forloop(n)cin>>vc.at(i).first>>vc.at(i).second;
    sort(vc.begin(),vc.end(),cmp);
    int ans{0};
    forloop(n){
        ans+=min(vc.at(i).first*((q-->0)?2:1),vc.at(i).second);
    }
    cout<<ans;
///======================================
}
signed main() {MOSTAFAOSMAN()
    //tloop
    solve();



    return 0;
}