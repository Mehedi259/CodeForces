#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]%2){
                i++;
            }
            else if(arr[j]%2 == 0){
                j--;
            }
            else{
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}