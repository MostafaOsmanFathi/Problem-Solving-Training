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
    vector<int>vc(14);
    int ans{0};
    for (int i = 0; i <14 ; ++i) {
     cin>>vc.at(i);
        if (vc.at(i)%2==0)ans+=vc.at(i);
    }
    for (int i = 0; i <14 ; ++i) {
        vector<int>vcTmp=vc;
        int inc=vc.at(i)/14;
        int rem=vc.at(i)%14;
        vcTmp.at(i)=0;
        for (int j = 1; j <=rem ; ++j) {
            ++vcTmp.at((i+j)%14);
        }
        int res{0};
        for (int j = 0; j <14 ; ++j) {
            vcTmp.at(j)+=inc;
            if (vcTmp.at(j)%2==0)
                res+=vcTmp.at(j);
        }
        ans= max(res,ans);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}