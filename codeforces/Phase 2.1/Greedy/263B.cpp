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
    int n,k;cin>>n>>k;

    if (n<k){
        cout<<-1<<endl;
    }else{
        map<int,int>mp;
        for (int i = 0; i <n ; ++i) {
            int tmp;cin>>tmp;
            ++mp[tmp];
        }
        if (k==0){
            cout<<(--mp.end())->first+1<<" "<<(--mp.end())->first+1<<endl;
            return;
        }
        int cnt{0};
        for (auto it=mp.rbegin();it!=mp.rend();++it){
            cnt+=it->second;
            if (cnt==k){
                cout<<it->first<<" "<<it->first<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}