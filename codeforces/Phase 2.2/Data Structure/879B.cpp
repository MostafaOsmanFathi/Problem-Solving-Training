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
    queue<pair<int,int>>q;
    int mx{0};
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        mx= max(mx,tmp);
        q.push({tmp,i+1});
    }
    if (k>n*n){
        cout<<mx<<endl;
        return;
    }
    int winner{-1},tmp{0};
    pair<int,int>CurP=q.front();q.pop();
    while (tmp!=k){
        pair<int,int>CurP2=q.front();q.pop();
        if (CurP.first>CurP2.first){
            q.push(CurP2);
            if (winner==CurP.second){
                ++tmp;
            }else{
                winner=CurP.second,tmp=1;
            }
        }else{
            q.push(CurP);
            CurP=CurP2;
            if (winner==CurP.second){
                ++tmp;
            }else{
                winner=CurP.second,tmp=1;
            }
        }
    }
    cout<<CurP.first<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}