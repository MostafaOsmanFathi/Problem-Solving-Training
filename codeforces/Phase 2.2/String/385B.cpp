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
    string s;cin>>s;
    int frq[s.size()];
    int frq2[s.size()];
    memset(frq,0,sizeof frq);
    memset(frq2,0,sizeof frq2);
    for (int i = 0; i < s.size(); ++i) {
        if (s.substr(i,4)=="bear")
            ++frq[i+3],frq2[i]=1;
    }
    partial_sum(frq,frq+s.size(),frq);
    partial_sum(frq2,frq2+s.size(),frq2);
    int ans{0};
    for (int i = 0; i <s.size() ; ++i) {
        for (int j = i+1; j <s.size() ; ++j) {
            int tmp=frq[j]-((i==0)?0:frq2[i-1]);
            if (tmp>0) {
//                cout<<"("<<i+1<<","<<j+1<<")"<<endl<<flush;
                ++ans;
            }
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