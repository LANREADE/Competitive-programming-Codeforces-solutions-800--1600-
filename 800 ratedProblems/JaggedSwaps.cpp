
#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        vector<int>a(n);
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        bool swapped;
        do{
            swapped = false;
            if(int i = 1 , i < n-1; ++i){
                if(a[i-1] < a[i] && a[i] > a[i +1 ]){
                    swap(a[i] , a[i + 1]);
                    swapped = true;
                }
            }
        }while(swapped);
        if (is_sorted(a.begin() , a.end())){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
