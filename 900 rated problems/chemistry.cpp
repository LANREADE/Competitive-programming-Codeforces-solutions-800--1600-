# include <iostream>
# include <bits\stdc++.h>
# include <string>

using namespace std;

void answer(bool v ){
        constexpr const char * s[2] = {"NO" , "YES"};
        std:: cout << s[v] << '\n';
}

void solve(const std::string & s, size_t k){
        unsigned A[26] = {}; // to initialize all the elements to 0
        for( const char c : s ){
                ++A[c - 'a'];
        }
        unsigned q = 0; // numbers of odd frequencies
        for(size_t i= 0; i < 26; ++i){
                q += A[i] % 2 ;
        }
        answer( q <= k+ 1 ); // checks if the odd frequencies  surpases the k integer 

}

void test_case(){
        size_t n ,k;
        std:: cin >> n >> k;

        std::string s ;
        std:: cin >> s;
        solve( s , k );
}

int main(){
        std::cin.tie(nullptr)->sync_with_stdio(false);

        size_t t;
        std:: cin >> t ;

        while(t-- > 0){
                test_case();
        }
        return 0;
}