#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


int n, m, k, w;

const int maxn = 1e6 + 7;

std::vector<std::vector<int>> edges;

int p[maxn];

int getPrev(int v){
    if (v == p[v])
        return v;
    return p[v] = getPrev(p[v]) ;
}
//= getPrev(p[v])
bool join(int a, int b){
    a = getPrev(a);
    b = getPrev(b);
    if (a == b)
        return false;
    p[b] = a;
    return true;
}



int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b, c;
        std::cin >> a >> b >> c;
        edges.push_back({c, a - 1 , b - 1 });
    }
    for (auto i : edges){
        for (auto j : i){
            std::cout << j << " ";
        }
        std::cout << " ";
    }
    for (int i = 0; i < n; i++)
        p[i] = i;
    std::cin >> k;
    if (k != n - 1){
        std::cout << "NO" << '\n';
        return 0;
    }
    for (int i = 0; i < k; i++){
        int j;
        std::cin >> j;
        w += edges[j - 1][0];
        if (!join(edges[j - 1 ][1], edges[j - 1 ][2])){
            std::cout << "NO" << '\n';
            return 0;
        }
    }

    std::cout << w << '\n';
    for (int i = 0; i < n; i++)
        std::cout << p[i] << ":" << i << '\n';
    for (int i = 0; i < n; i++)
        p[i] = i;
    sort(edges.begin(), edges.end());
    for (auto i : edges){
        for (auto j : i){
            std::cout << j << " ";
        }
        std::cout << " ";
    }
    for (int i = 0; i < m; i++){
        if (join(edges[i][1], edges[i][2]))
            w -= edges[i][0];
    }
    for (int i = 0; i < n; i++)
        std::cout << p[i] << ":" << i << '\n';
    std::cout << w<< '\n';

    if (w > 0)
        std::cout << "NO" << '\n';
    else
        std::cout << "YES" << '\n';
    return 0;
}
