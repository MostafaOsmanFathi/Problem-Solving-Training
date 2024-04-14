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
    int n,t;cin>>n>>t;
    string s;cin>>s;
    while (t--){
        for (int i = 0; i < n-1; ++i) {
            if (s.at(i)=='B' and s.at(i+1)=='G' )
                swap(s.at(i),s.at(i+1)),++i;
        }
    }
    cout<<s<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}