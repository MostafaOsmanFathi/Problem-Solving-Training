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
    string s;cin>>s;
    if (s.size()==1)cout<<(stoi(s)%4==0?4:0);
    else{
        cout<<(stoi(s.substr(s.size()-2,2))%4==0?4:0);
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}