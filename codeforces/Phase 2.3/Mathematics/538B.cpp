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
    string n;cin>>n;
    int arr[n.size()];
    for (int i = 0; i <n.size() ; ++i) {
        arr[i]=n.at(i)-'0';
    }
    string Zero(n.size(),'0');
    vector<string>ans;
    bool Done{false};
    while (!Done) {
        Done=true;
        string tmp=Zero;
        for (int i = 0; i < n.size(); ++i) {
            if (arr[i])
                Done=false,--arr[i],tmp.at(i)='1';
        }
        if (!Done)
            ans.push_back(tmp);
    }
    cout<<ans.size()<<endl;
    for (const auto& x:ans) {
        cout<<stoll(x)<<" ";
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}