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
    int n,m;cin>>n>>m;
    map<string,string>ipToName;
    for (int i = 0; i < n; ++i) {
        string s;cin>>s;
        string s2;cin>>s2;
        ipToName[s2]=s;
    }
    map<string,queue<string>>command;
    queue<string>q;
    for (int i = 0; i < m; ++i) {
        string s;cin>>s;
        string s2;cin>>s2;
        s2.pop_back();
        command[s].push(s2);
        q.push(s);
    }
    while (!q.empty()){
        auto& tmp=command[q.front()];
        cout<<q.front()<<" "<<tmp.front()<<"; #"<<ipToName[tmp.front()]<<endl;

        tmp.pop();
        q.pop();
    }


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}