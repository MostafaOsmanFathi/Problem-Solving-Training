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
#define int long long
using namespace std;

void solve(){
///==================================================
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp1,mp2;
    for (const auto& x:s1) {
        ++mp1[x];
    }
    for (const auto& x:s2) {
        ++mp2[x];
    }

    int ans1{0},ans2{0};
    for (auto& x:mp1) {
        int tmp= min(x.second,mp2[x.first]);
        ans1+=tmp;
        mp2[x.first]-=tmp;
        x.second-=tmp;
    }
    for (auto& x:mp1) {

        int tmp= min(x.second,mp2[(islower(x.first))?toupper(x.first): tolower(x.first)]);
        ans2+=tmp;
        mp2[(islower(x.first))?toupper(x.first): tolower(x.first)]-=tmp;
        x.second-=tmp;
    }
    cout<<ans1<<" "<<ans2<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}