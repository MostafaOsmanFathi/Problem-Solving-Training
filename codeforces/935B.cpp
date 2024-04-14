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
    int x{0},y{0};
    int ans{0};
    int PrevKingDom{0};
    bool Check{false};
    while (n--){
        char tmp;cin>>tmp;
        if (tmp=='U'){
            ++x;
        }else{
            ++y;
        }
        int CurKingDom=((x>y)?1:2);
        if (Check){
            if (CurKingDom!=PrevKingDom)
                ++ans;
            Check=false;
        }
        if (x!=y)
            PrevKingDom=CurKingDom;
        if (x==y){
            Check= true;
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