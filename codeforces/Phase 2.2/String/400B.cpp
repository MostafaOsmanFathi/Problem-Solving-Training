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
bool cmp(int x){
    return x<0;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    int arr[n][m+1];
    memset(arr,0,sizeof arr);
    set<int>st;
    for (int i = 0; i < n; ++i) {
        string s;cin>>s;
        stack<int>sta;
        for (int j = 0; j < s.size(); ++j) {if (s.at(j)=='S')sta.push(j);}
        for (int j = 0; j < m; ++j) {
            char tmp=s.at(j);
            if (tmp=='G') {
                if (sta.empty() or sta.top()<j){
                    cout<<-1<<endl;
                    return;
                }
                ++arr[i][j], st.insert(sta.top()-j),sta.pop();
            }
            else if (tmp=='S')
                --arr[i][j];
        }
    }
    int ans{0};
    for (int i = 0; i < n; ++i) {
        partial_sum(arr[i],arr[i]+m+1,arr[i]);


        if (count_if(arr[i],arr[i]+m,cmp) or arr[i][m]!=0){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<st.size()<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}