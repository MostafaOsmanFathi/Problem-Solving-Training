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
    int n;cin>>n;
    string s;cin>>s;
    if (n==3 or n==2){
        cout<<s;
        return;
    }
    if (n&1){
        cout<<s.substr(0,3)<<'-';
        s=s.substr(3);
    }
    for (int i = 0; i < s.size(); ++i) {
        cout<<s.at(i);
        if (i&1 and i!=s.size()-1)
            cout<<'-';
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}