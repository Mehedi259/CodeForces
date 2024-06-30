#include <bits/stdc++.h>
#define A(a) (a).begin , (a).end()
#define K first 
#define V second 
#define M 1000000007
#define N 5010 
using namespace std;
ll dp[N][N];
ll ct[N];

#define DP dp[i][asc]
ll r(ll i , ll asc){
    if(asc<0) return -2;
    if(!i) return asc ? -2 : 0;
    if(~DP) return DP;
    if(ct[i]) DP = r(i-1 , asc-1); else DP = r(i-1 , asc);
    if(r(i-1,asc)!= -2 && r(i-1 , asc ) + ct[i] <= asc){
        if(DP == -2 || r(i-1 , asc ) + ct[i] < DP) DP = r(i-1 , asc )+ ct[i];
    }
    return DP;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    G(tc) while(tcc--){
        G(n) F(i , 0 , n+1 ) fill_n(dp[i] , n+1 , -1);
        F(i,0,n){ G(x) ct[x]++; }
        ll ans = n ;
        FD(i,n , -1) if(r(n,i) != -2 ) ans = i;
        cout<<ans<<endl;
        fill_n(ct,n+1,0ll);
}
}