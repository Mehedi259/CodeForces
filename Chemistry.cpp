#include<bits/stdc++.h>
using namespace std;

#ifdef LOCAL
    #include"debug.h"
#else
    #define dbg(...) 
#endif

#define all(x) begin(x),end(x)
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int tt;
    cin >> tt;
    while(tt--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int > cnt(26);
        for(int i =0 ;i<n;i++){
            cnt[s[i] - 'a']++;
        }
        int len = n - k;
        int odd = 0;
        for(int i =0 ;i<26;i++){
            if(cnt[i]&1) odd++;
        }
        dbg(odd);
        if(len&1){
            // if odd only one odd
            int need = max(0ll, odd - 1);
            if(k >= need ){
                cout <<"YES\n";
            } else{
                cout <<"NO\n";
            }
        } else{
            int need = odd;
            if(k >= need && (k - need)%2 == 0){
                cout <<"YES\n";
            } else{
                cout <<"NO\n";
            }
        }
    }

}