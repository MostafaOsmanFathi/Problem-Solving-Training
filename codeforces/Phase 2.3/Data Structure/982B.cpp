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
    int arr[n];
    set<pair<int,int>>st0,st1;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        st0.insert({arr[i],i+1});
    }
    string tmp;cin>>tmp;
    for (const auto& x:tmp) {
        if (x=='0'){
            if (!st0.empty()){
                cout<<st0.begin()->second<<" ";
                st1.insert(*st0.begin());
                st0.erase(st0.begin());
            }else{
                cout<<st1.begin()->second<<" ";
                st1.erase(st1.begin());
            }
        }else{
            if (!st1.empty()){
                auto it=(--st1.end());
                cout<<it->second<<" ";
                st1.erase(it);
            }else{
                auto it=(--st0.end());
                cout<<it->second<<" ";
                st1.insert(*it);
                st0.erase(it);
            }
        }

    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}