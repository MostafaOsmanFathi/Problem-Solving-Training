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
int dx[]{+2,+2,-2,-2};
int dy[]{+1,-1,+1,-1};
//bool arr[8][8];
bool Marked[8][8];
bool validPoss(int x,int y){
    return x<8 and  y<8 and x>=0 and y>=0;
}
bool cmp(int xx,int yy,int xx2,int yy2){
    return xx==xx2 and yy==yy2;
}
int x,y,x2,y2;
void markPosstion(int xx,int yy,bool mark){

    for (int i = 0; i < 4; ++i) {
        int nx=xx+dx[i],ny=yy+dy[i];
        if (validPoss(nx,ny)){
            Marked[nx][ny]= true;
        }
        nx=xx+dy[i],ny=yy+dx[i];

        if (validPoss(nx,ny)){
            Marked[nx][ny]= true;
        }
    }
}
void solve(){
///==================================================
    string tmp;
    cin>>tmp;
    x=tmp.front()-'a',y=tmp.back()-'1';
    cin>>tmp;
    x2=tmp.front()-'a',y2=tmp.back()-'1';

    Marked[x2][y2]=true;
    markPosstion(x,y, true);
    markPosstion(x2,y2, true);
    for (int i = 0; i <8 ; ++i) {
        Marked[x][i]=true;
        Marked[i][y]=true;
    }
    int ans{64};
    for (auto& xx:Marked) {
        ans-= accumulate(xx,xx+8,0);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}