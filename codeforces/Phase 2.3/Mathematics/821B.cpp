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
int arthmaticSum(int n){
    return n*(n+1)/2;
}
int CountBanana(int a,int b){

    return (arthmaticSum(a)*(b+1))+(arthmaticSum(b)*(a+1));
}
void solve(){
///==================================================
    ld m,b;cin>>m>>b;
    int ans{0};
    for (int i = 0; i <=m*b ; ++i) {
        int tmp=(-i/m)+b;
        ans= max(ans,CountBanana(i,tmp));
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
        solve();

    return 0;
}