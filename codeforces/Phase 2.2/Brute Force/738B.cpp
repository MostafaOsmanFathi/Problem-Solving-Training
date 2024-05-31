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

void solve(){
///==================================================
    int n,m;cin>>n>>m;
    bool arr[n][m],prefixRow[n][m],prefixColumn[n][m],suffixRow[n][m],suffixColumn[n][m];
    mSet(prefixRow,0);
    mSet(suffixRow,0);
    mSet(prefixColumn,0);
    mSet(suffixColumn,0);

    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>arr[i][j];
            prefixRow[i][j]|=arr[i][j];
            prefixColumn[i][j]|=arr[i][j];
            if (j)
                prefixRow[i][j]|=prefixRow[i][j-1];

            if (i)
                prefixColumn[i][j]|=prefixColumn[i-1][j];
        }
    }
    for (int i = n-1; i >=0 ; --i) {
        for (int j = m-1; j >= 0; --j) {
            suffixRow[i][j]|=arr[i][j];
            suffixColumn[i][j]|=arr[i][j];
            if (j!=m-1)
                suffixRow[i][j]|=suffixRow[i][j+1];
            if (i!=n-1)
                suffixColumn[i][j]|=suffixColumn[i+1][j];
        }
    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout<<suffix[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    int ans{0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!arr[i][j]){
                //r;
                if (j)
                    ans+=prefixRow[i][j-1];
                //l
                if (j!=m-1)
                    ans+=suffixRow[i][j+1];
                //up
                if (i)
                    ans+=prefixColumn[i-1][j];
                //down
                if (i!=n-1)
                    ans+=suffixColumn[i+1][j];
//                cout<<" "<<i<<" "<<j<<" "<<ans<<endl;
            }
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