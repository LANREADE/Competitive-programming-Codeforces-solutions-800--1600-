# include<iostream>
#include <bits\std.c++>
# include  <vector>

using namespace std;

void solve(std::vector<unsigned> &a , unsigned k){
        std:: vector<unsigned>dp(k);
        for(unsigned d = 0; d < k ; ++d){
                dp[(a[i] + d ) % k] = d;
        }

}
void test_case(){

        size_t n ;
        std::cin >> n ;

        unsigned k;
        std:: cin >> n;

        std::vector<unsigned> a(n);
        std:: cin >> a;
        solve(a , k);
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