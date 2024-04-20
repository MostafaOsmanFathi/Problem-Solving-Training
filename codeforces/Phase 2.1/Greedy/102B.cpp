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
    int sum= accumulate(s.begin(), s.end(),0)-(s.size()*'0');
    int ans{s.size()>1};
    while (sum>=10){
        ++ans;
        int tmp{sum};
        sum=0;
        while (tmp){
            sum+=tmp%10;
            tmp/=10;
        }
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}