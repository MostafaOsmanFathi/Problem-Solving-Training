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
    string s1,s2;cin>>s1>>s2;
    vector<int>ans;
    for (int i = 0; i <s1.size() ; ++i) {
        if (s1.at(i)==s2.at(i))continue;
        int tmp=s1.find(s2.at(i),i);
        if (tmp==string::npos){
            cout<<-1<<endl;
            return;
        }
        for (int j =tmp-1 ; j >=i ; --j) {
            ans.push_back(j+1);
            swap(s1.at(j),s1.at(j+1));
        }
    }
    cout<<ans.size()<<endl;
    for (auto x:ans) {
        cout<<x<<" ";
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}