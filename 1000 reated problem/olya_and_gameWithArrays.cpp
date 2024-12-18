# include<iostream>
#include <bits\std.c++>
# include  <vector>

using namespace std;

void solve(const std::vector<std::vector<unsigned>>& a ){
        const size_t n = a.size();

        std:: vector<std::pair<unsigned, unsigned>> s(n , std:: make_pair(~0u , ~0u));
        for(size_t i = 0; i <n ;  ++i){
                for(unsigned x : a[i]){
                        if( x < s[i].first){
                                std::swap(x , s[i].first);
                        }
                        if(x < s[i].second){
                                std::swap(x ,s[i].second)
                        }
                }
        }
}
void test_case(){

        size_t n ;
        std::cin >> n;

        std::vector<std::vector<unsigned>> a(n);
        for(size_t i = 0; i < n; ++i){
                size_t m;
                std::cin >> m;

                a[i].resize(m);
                std::cin >> a[i];
        }


        solve();
}

int main(){
        std::cin.tie(nullptr)->sync_with_stdio(false);

        size_t t;
        std:: cin >> t;

        while( t-- >0){
                test_case();
        }
        return 0;
}