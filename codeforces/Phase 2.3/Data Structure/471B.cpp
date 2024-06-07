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
    pair<int,int> arr[n];
    map<int,int>mp;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i].first;
        arr[i].second=i+1;
        ++mp[arr[i].first];
    }

    sort(arr,arr+n);
    int tmp{1};
    for (auto& x:mp) {
        if (x.second!=1)
            tmp*=x.second*(x.second-1);
        if (tmp>=3)break;
    }
    if (tmp<3){
        outCondtion(false);
        return;
    }
    outCondtion(true);
    int dontSwap[n];
    mSet(dontSwap,0);

    for (int i = 0; i <n ; ++i) {
        cout<<arr[i].second<<" ";
    }
    cout<<endl;
    bool sw{true};
    int poss{0};
    for (int i = 0; i <n ; ++i) {
        if (sw and arr[i].first==arr[i+1].first){
            sw=false,swap(arr[i],arr[i+1]);
            poss=i+1;
        }
        cout<<arr[i].second<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; ++i) {
        if (arr[i].first==arr[i-1].first and i!=poss) {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }
    for (auto x:arr) {
        cout<<x.second<<" ";
    }
///=================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}