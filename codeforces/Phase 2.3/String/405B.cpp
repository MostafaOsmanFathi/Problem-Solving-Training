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
    bool vis[s.size()];
    mSet(vis,false);
    int ans{0};
    for (int i = 0; i < n; ++i) {
        if (s.at(i)=='L'){
            for (int j = i; j >=0 ; --j) {
                if (s.at(j)=='R' or vis[j])
                    break;
                vis[j]=true;
            }
        }else if (s.at(i)=='R'){
            int tmp{1};
            for (int j = i; j <n ; ++j,++tmp) {
                if (s.at(j)=='L'){
                    ans+=tmp&1;
                    vis[j]=true;
                    break;
                }
                vis[j]=true;
            }
        }
    }

    cout<<(n- accumulate(vis,vis+n,0))+ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}