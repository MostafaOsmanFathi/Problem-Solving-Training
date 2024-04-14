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

int getMin(const string& s1,const deque<char>&s2){
    int res{0};
    for (int i = 0; i < s1.size(); ++i) {
        if (s1.at(i)==s2.at(i))++res;
    }
    return s1.size()-res;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    string tmp=t.substr(0,s.size());
    deque<char>dq(tmp.size());
    for (int i = 0; i < tmp.size(); ++i) {
        dq.at(i)=tmp.at(i);
    }
    int ans{getMin(s,dq)},poss{0};

    for (int i = s.size(); i <t.size() ; ++i) {
        dq.pop_front();
        dq.push_back(t.at(i));
        int tmp= getMin(s,dq);
        if (ans>tmp){
            ans=tmp;
            poss=i-s.size()+1;
        }
    }
    cout<<ans<<endl;
    tmp=t.substr(poss,s.size());
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i)!=tmp.at(i))
            cout<<i+1<<" ";
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
        solve();

    return 0;
}