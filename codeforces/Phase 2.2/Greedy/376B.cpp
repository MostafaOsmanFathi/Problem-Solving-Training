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
    int n,m;cin>>n>>m;
    int DeptOfEachNode[n+1];
    int IncomeForEachNode[n+1];
    mSet(DeptOfEachNode,0);
    mSet(IncomeForEachNode,0);
    for (int i = 0; i < m; ++i) {
        int a,b,c;cin>>a>>b>>c;
        DeptOfEachNode[a]+=c;
        IncomeForEachNode[b]+=c;
    }

    int ans{0};
    for (int i = 1; i <=n ; ++i) {
        int tmp=IncomeForEachNode[i]-DeptOfEachNode[i];
        if (tmp<0)ans+=tmp;
    }
    cout<<abs(ans)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}