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
    int a,b,c;cin>>a>>b>>c;
    if ((a+b+c)&1){
        cout<<"Impossible\n";
        return;
    }
    for (int i = 0; i <=a ; ++i) {
        if ((b-i)==(c-(a-i)) and (b-i)>=0 and (c-(a-i)>=0)){
            cout<<i<<" "<<(b-i)<<" "<<a-i;

            return;
        }
    }
    cout<<"Impossible\n";
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}