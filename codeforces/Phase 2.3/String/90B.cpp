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
    int n,m;cin>>n>>m;
    bool IsRepeated[n][m];
    mSet(IsRepeated,false);
    string arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k <n ; ++k) {
                if(arr[k][j]==arr[i][j] and i!=k){
                    IsRepeated[i][j]=true;
                    break;
                }
            }
            for (int k = 0; k <m ; ++k) {
                if(arr[i][k]==arr[i][j] and j!=k){
                    IsRepeated[i][j]=true;
                    break;
                }
            }
        }
    }
    string ans;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            if (not IsRepeated[i][j])
                ans.push_back(arr[i][j]);
        }
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}