#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
std::istream& operator >>(std::istream& input, std::vector<T>& v)
{
    for (T& a : v)
        input >> a;

    return input;
}

void answer(const std::vector<unsigned>& v)
{
    const char* separator = "";
    for (const unsigned x : v) {
        std::cout << separator << x; 
        separator = " ";
    }
    std::cout << '\n';
}

void solve(const std::vector<unsigned>& a)
{
    using integer = unsigned long long;

    const size_t n = a.size();

    std::vector<unsigned> b = a;
    std::sort(b.begin(), b.end());

    std::vector<integer> ps(1 + n);
    for (size_t i = 0; i < n; ++i)
        ps[i+1] = ps[i] + b[i];

    std::vector<unsigned> c(n);
    for (size_t i = 0; i < n; ++i) {
        auto it = std::lower_bound(b.begin(), b.end(), a[i] + 1);
        while (true) {
            c[i] = it - b.begin() - 1;

            const auto jt = std::lower_bound(b.begin(), b.end(), ps[c[i]+1] + 1);
            if (jt == it)
                break;

            it = jt;
        }
    }

    answer(c);
}

void test_case()
{
    size_t n;
    std::cin >> n;

    std::vector<unsigned> a(n);
    std::cin >> a;

    solve(a);
}

int main()
{
    std::cin.tie(nullptr)->sync_with_stdio(false);

    size_t t;
    std::cin >> t;

    while (t-- > 0)
        test_case();

    return 0;
}