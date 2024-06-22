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
const int dx[]={+0,+0,+1,-1,-1,+1,-1,+1};
const int dy[]={-1,+1,+0,+0,+1,+1,-1,-1};
const char dir[] = {'L', 'R', 'D', 'U'};
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    string grid[n];
    for (int i = 0; i < n;++i) {
        cin>>grid[i];
    }
    int arr[n][m];
    mSet(arr,0);
    for (int i = 0; i < n;++i) {
        for (int j = 0; j <m ; ++j) {
            if (grid[i][j]=='*'){
                for (int k = 0; k < 8; ++k) {
                    int nx{i+dx[k]},ny{j+dy[k]};
                    if (nx>=0 and nx<n and ny>=0 and ny<m){
                        ++arr[nx][ny];
                    }
                }
            }
        }
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((grid[i][j]=='.' and arr[i][j]!=0) or (isdigit(grid[i][j]) and arr[i][j]!=grid[i][j]-'0')){
                outCondtion(false);
                return;
            }
        }
    }
    outCondtion(true);
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}