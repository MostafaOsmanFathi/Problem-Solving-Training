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
    char arr[n+2][m+2];
    for (int i = 0; i <n+2; ++i) {
        for (int j = 0; j < m+2; ++j) {
            arr[i][j]='.';
        }
    }
    for (int i = 1; i <=n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin>>arr[i][j];
        }
    }
    int ans{0};
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <= m; ++j) {
            bool isHeEat{false};
            if (arr[i][j]=='W'){
                if (arr[i-1][j]=='P'){
                    arr[i-1][j]='.';
                    ++ans;
                    isHeEat= true;
                }else if (arr[i][j-1]=='P'){
                    arr[i][j-1]='.';
                    ++ans;
                    isHeEat= true;
                }else if (arr[i+1][j]=='P'&&arr[i][j+1]=='P'){
                    int cntW1=(arr[(i+1)+1][(j)]=='W')+(arr[(i+1)-1][(j)]=='W')+(arr[(i+1)][(j)+1]=='W')+(arr[(i+1)][(j)-1]=='W');
                    int cntW2=(arr[(i)+1][(j+1)]=='W')+(arr[(i)-1][(j+1)]=='W')+(arr[(i)][(j+1)+1]=='W')+(arr[(i)][(j+1)-1]=='W');
                    if (cntW1<cntW2){
                        arr[i+1][j]='.';
                        ++ans;
                    }else{
                        arr[i][j+1]='.';
                        ++ans;
                    }
                    isHeEat= true;
                }else if (arr[i+1][j]=='P'){
                    arr[i+1][j]='.';
                    ++ans;
                    isHeEat= true;
                }else if (arr[i][j+1]=='P'){
                    arr[i][j+1]='.';
                    ++ans;
                    isHeEat= true;
                }
                if (isHeEat){
                    arr[i][j]='.';
                }
            }
        }
    }
//    for (int i = 1; i <= n ; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cout<<arr[i][j];
//        }
//        cout<<endl;
//    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
        solve();

    return 0;
}