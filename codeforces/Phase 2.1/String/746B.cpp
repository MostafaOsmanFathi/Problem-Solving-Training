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
    string s;cin>>s;
    list<int>ls;
    auto it=ls.begin();
    int mid=((n/2)+n%2)-1;
    for (int i = 0; i <n ; ++i) {
        ls.push_back(i);
        if (i==mid)
            it=--ls.end();
    }
    vector<int>decode;
    bool turns=n&1;
    while (!ls.empty()){
        auto it2=it;
        decode.push_back(*it);
        if (turns)
            --it;
        else
            ++it;
        turns=!turns;
        ls.erase(it2);
    }
    string tmp("-",n);
    for (int i = 0; i < n; ++i) {
        tmp.at(decode.at(i))=s.at(i);
    }
    cout<<tmp;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}