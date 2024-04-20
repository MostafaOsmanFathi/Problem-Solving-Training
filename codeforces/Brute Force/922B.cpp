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
    int n,cnt{0};cin>>n;
    for (int i = 1; i <=n ; ++i) {
        for (int j = i+1; j <=n ; ++j) {
           int tmp=i^j;
            if(i+j>tmp and i+tmp>j and tmp+j>i and tmp<=n and tmp>j){
                ++cnt;
            }
        }
    }
    cout<<cnt<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}