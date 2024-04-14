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
    string s;cin>>s;
    if (accumulate(s.begin(),s.begin()+n,0)==accumulate(s.begin()+n,s.end(),0)){
        outCondtion(false);
        return;
    }
    map<int,int>mp1,mp2;
    for (int i = 0; i < n; ++i) {
        ++mp2[s.at(n+i)-'0'];
        ++mp1[s.at(i)-'0'];
    }
    mp2[1000];
    mp2[-1];
    mp1[1000];
    mp1[-1];
    bool Done{true};
    for (int i = 0; i < n; ++i) {
        auto& tmp=*mp2.upper_bound(s.at(i)-'0');
        if (tmp.first==1000||tmp.first==-1){
            Done=false;
            break;
        }
        --tmp.second;
        if (tmp.second==0)
            mp2.erase(tmp.first);
    }
    if (Done){
        outCondtion(true);
        return;
    }
    mp1.swap(mp2);
    for (int i = 0; i < n; ++i) {
        auto& tmp=*mp2.upper_bound(s.at(n+i)-'0');
        if (tmp.first==1000||tmp.first==-1){
            outCondtion(false);
            return;
        }
        --tmp.second;
        if (tmp.second==0)
            mp2.erase(tmp.first);
    }
    outCondtion(true);
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}