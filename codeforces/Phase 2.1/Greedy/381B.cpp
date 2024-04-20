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
    priority_queue<int>pq;
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        pq.push(tmp);
    }
    deque<int>ans;
    ans.push_back(pq.top());
    pq.pop();
    while (!pq.empty()){
        if (!pq.empty() and pq.top()<ans.front()){
            ans.push_front(pq.top());
            pq.pop();
        }
        if (!pq.empty() and pq.top()<ans.back() ){
            ans.push_back(pq.top());
            pq.pop();
        }
        if (!pq.empty() and pq.top()>=ans.back() and pq.top()>=ans.front() ){
            pq.pop();
        }
    }
    cout<<ans.size()<<endl;
    for (auto& x:ans) {
        cout<<x<<" ";
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}