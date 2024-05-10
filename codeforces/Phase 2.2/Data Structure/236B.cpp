#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
//#define int long long
using namespace std;
int getNumOfDivs(int n){
    int ans{0};
    for (int i = 1; i*i <=n ; ++i) {
        if (n%i==0){
            ++ans;
            if (i!=n/i)++ans;
        }
    }
    return ans;
}
const int mod=1073741824;
void solve(){
///==================================================
    int a,b,c;cin>>a>>b>>c;
    unordered_map<int,int>mp;
    ll ans{0};
    for (int i = 1; i <=a ; ++i) {
        for (int j = 1; j <=b ; ++j) {
            for (int k = 1; k <=c ; ++k) {
                int tmp=i*j*k;
                if (!mp.count(tmp))
                    mp[tmp]= getNumOfDivs(tmp);
                ans=((ans%mod)+(mp[tmp]%mod))%mod;
            }
        }
    }
    cout<<ans;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}