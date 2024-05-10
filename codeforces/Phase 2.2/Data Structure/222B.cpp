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
    int n,m,q;cin>>n>>m>>q;
    int arr[n][m];
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>arr[i][j];
        }
    }
    int arrX[n],arrY[m];
    for (int i = 0; i < n; ++i) {
        arrX[i]=i;
    }
    for (int i = 0; i < m; ++i) {
        arrY[i]=i;
    }
    while (q--){
        char op;cin>>op;
        int x,y;cin>>x>>y;
        --x,--y;
        if (op=='r'){
            swap(arrX[x],arrX[y]);
        }else if (op=='c'){
            swap(arrY[x],arrY[y]);
        }else{
            cout<<arr[arrX[x]][arrY[y]]<<endl;
        }

    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}