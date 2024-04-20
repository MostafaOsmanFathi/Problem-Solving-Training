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
    int prev{INT_MAX};
    while (n--){
        int a,b;cin>>a>>b;
        if (b<a)swap(a,b);
        if (b<=prev)
            prev=b;
        else if (a<=prev)
            prev=a;
        else{
            outCondtion(false)
            return;
        }
    }
    outCondtion(true)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}