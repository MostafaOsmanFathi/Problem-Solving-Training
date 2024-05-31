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
    set<int>st[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 6; ++j) {
            int tmp;cin>>tmp;
            st[i].insert(tmp);
        }
    }
    for (int i = 1; i <1000 ; ++i) {
        vector<int>vc;
        int tmp{i};
        while (tmp){
            vc.push_back(tmp%10);
            tmp/=10;
        }
        sort(st,st+n);
        bool fl{true};
        do {
            fl= true;
            for (int j = 0; j < n and j<vc.size(); ++j) {
                if (!st[j].count(vc.at(j))){
                    fl=false;
                    break;
                }
            }
            if (fl)break;
        } while (next_permutation(st,st+n));
        if (fl)continue;
        cout<<i-1<<endl;
        return;
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}