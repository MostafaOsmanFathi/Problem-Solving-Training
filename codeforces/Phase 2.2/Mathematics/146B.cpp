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
int mask(int n){
    if (n==0)
        return 0;
    if (n%10==4||n%10==7)
        return n%10+ mask(n/10)*10;
    else
        return mask(n/10);
}
void solve(){
///==================================================
    int a,b;cin>>a>>b;
    for (int i = a+1; i <=1e8 ; ++i) {
        if (mask(i)==b){
            cout<<i;
            break;
        }
    }


///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}