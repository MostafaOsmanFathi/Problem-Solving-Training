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
    int arr[m];
    priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int>pqMx;
    for (int i = 0; i < m; ++i) {
        cin>>arr[i];
        pq.push(arr[i]);
        pqMx.push(arr[i]);
    }
    int mn{0},mx{0};
    int nn{n};
    while (nn) {
        int tmp = min(nn, pq.top());
        int ttt=pq.top();
        if (tmp==pq.top())pq.pop();
        else{
            int tt=pq.top()-tmp;
            pq.pop();
            pq.push(tt);
        }
//        --tmp;
        mn += (ttt * (ttt + 1) / 2)-((ttt-tmp) * ((ttt-tmp) + 1) / 2);
        nn-=tmp;
    }

    while (n--){
        mx+=pqMx.top();
        if (pqMx.top()==1){
            pqMx.pop();
        }else{
            int tmp=pqMx.top();
            pqMx.pop();
            pqMx.push(tmp-1);
        }

    }
    cout<<mx<<" "<<mn;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}