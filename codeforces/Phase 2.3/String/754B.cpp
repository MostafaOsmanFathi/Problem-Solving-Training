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
string grid[4];
bool validPoss(int x,int y){
    return x>=0 and x<4  and y>=0 and y<4;
}
bool Check(){
    int tmp3{0};
    int tmp4{0};

    for (int i = 0; i < 4; ++i) {
        int tmp1{0};
        int tmp2{0};
        for (int j = 0; j < 4; ++j) {
            if (grid[i][j]=='x')
                ++tmp1;
            else
                tmp1=0;

            if (grid[j][i]=='x')
                ++tmp2;
            else
                tmp2=0;
            if (tmp1>2 or tmp2>2){
                return true;
            }
        }
        if (grid[i][i]=='x')
            ++tmp3;
        else
            tmp3=0;

        if (grid[i][3-i]=='x')
            ++tmp4;
        else
            tmp4=0;

        if (tmp3>2 or tmp4>2){
            return true;
        }
    }

    for (int i = 0; i < 4; ++i) {
        int x{0},y{i};
        int tmp{0};
        while (validPoss(x,y)){
            if (grid[x][y]=='x')++tmp;
            else tmp=0;
            if (tmp>2)return true;
            ++x,++y;
        }
        x=0,y=i;
        tmp=0;
        while (validPoss(x,y)){
            if (grid[x][y]=='x')++tmp;
            else tmp=0;
            if (tmp>2)return true;
            ++x,--y;
        }
    }
    for (int i = 1; i < 4; ++i) {
        int x{i},y{3};
        int tmp{0};
        while (validPoss(x,y)){
            if (grid[x][y]=='x')++tmp;
            else tmp=0;
            if (tmp>2)return true;
            ++x,--y;
        }

        x=i,y=0;
        tmp=0;
        while (validPoss(x,y)){
            if (grid[x][y]=='x')++tmp;
            else tmp=0;
            if (tmp>2)return true;
            ++x,++y;
        }

    }

    return false;
}
void solve(){
///==================================================
//    string grid[4];
    for (int i = 0; i <4 ; ++i) {
        cin>>grid[i];
    }
    for (auto& x:grid) {
        for (auto& xx:x) {
            if (xx=='.'){
                xx='x';
                if (Check()){
                    outCondtion(true);
                    return;
                }
                xx='.';
            }
        }
    }
    outCondtion(false);

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}