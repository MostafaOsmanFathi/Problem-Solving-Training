#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define int long long
using namespace std;
int cmp(const deque<char>&src,deque<char>&str){
    int ans{-1};
    for (int i = 0; i <str.size() ; ++i) {
        if (src==str and ans==-1){
            ans=i;
        }
        str.push_back(str.front());
        str.pop_front();
    }

    return ans;
}
void solve(){
///==================================================
    int n;cin>>n;
    vector<deque<char>>vc(n);
    for (int i = 0; i <n ; ++i) {
        string tmp;cin>>tmp;
        for (auto& x:tmp) {
            vc.at(i).push_back(x);
        }
    }
    int ans{inf};
    for (int i = 0; i <=vc.front().size() ; ++i) {
        bool tmp{true};
        int res{0};
        for (int j = 1; j < n; ++j) {
            int tt= cmp(vc.front(),vc.at(j));
            if (tt==-1){
                tmp=false;
                break;
            }else
                res+=tt;
        }
        if (tmp)
            ans=min(res+i,ans);
        vc.front().push_back(vc.front().front());
        vc.front().pop_front();
    }
    if (ans==inf)ans=-1;
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}