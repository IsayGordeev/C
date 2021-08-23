#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;
using std::set;
using namespace std;
const long long inf = (long long)1e18 + 111;
const int iinf = (int)1e9 + 111;
const long long SIZE = 1e5 + 11;

int pred[2000];
int dist[2000];
int visited[2000];
vector <vector<int>> labirint(2000);
int a[2000][2000];
int i, j, k, l, n, m, num = 1, path_len = iinf, ind;
vector <pair<int, int>> endr;
std::queue <std::pair<int, int>> step;
std::queue <int> q;
vector<int> v;

bool is(int x) {
    if (ind == x) {
        return true;
    }
    for (auto r : labirint[ind]) {
        if (r == x) {
            return true;
        }
    }
    return false;
}

void wander() {
    a[1][1] = 3;
    num = 3;
    while (!step.empty()) {
        i = step.front().first;
        j = step.front().second;
        step.pop();
        ind = a[i][j];
        for (int k = i; k <= n; k++) {
            if (a[k][j] == 1) {
                break;
            }
            else if (a[k + 1][j] == 1 && (a[k][j] >= 3 || a[k][j] == 0)) {
                if (a[k][j] == 0) {
                    step.push({ k, j });
                    labirint[ind].push_back(++num);
                    a[k][j] = num;
                }
                else if (!is(a[k][j])) {
                    labirint[ind].push_back(a[k][j]);
                }
                break;
            }
            else if (a[k + 1][j] == 2) {
                labirint[ind].push_back(++num);
                a[k][j] = num;
                v.push_back(num);
                break;
            }
        }

        for (int k = i; k >= 1; k--) {
            if (a[k][j] == 1) {
                break;
            }
            else if (a[k - 1][j] == 1 && (a[k][j] >= 3 || a[k][j] == 0)) {
                if (a[k][j] == 0) {
                    step.push({ k, j });
                    labirint[ind].push_back(++num);
                    a[k][j] = num;
                }
                else if (!is(a[k][j])) {
                    labirint[ind].push_back(a[k][j]);
                }
                break;
            }
            else if (a[k - 1][j] == 2) {
                labirint[ind].push_back(++num);
                a[k][j] = num;
                v.push_back(num);
                break;
            }
        }

        for (int k = j; k <= m; k++) {
            if (a[i][k] == 1) {
                break;
            }
            else if (a[i][k + 1] == 1 && (a[i][k] == 0 || a[i][k] >= 3)) {
                if (a[i][k] == 0) {
                    step.push({ i, k });
                    labirint[ind].push_back(++num);
                    a[i][k] = num;
                }
                else if (!is(a[i][k])) {
                    labirint[ind].push_back(a[i][k]);
                }
                break;
            }
            else if (a[i][k + 1] == 2) {
                labirint[ind].push_back(++num);
                a[i][k] = num;
                v.push_back(num);
                break;
            }
        }

        for (int k = j; k >= 1; k--) {
            if (a[i][k] == 1) {
                break;
            }
            else if (a[i][k - 1] == 1 && (a[i][k] == 0 || a[i][k] >= 3)) {
                if (a[i][k] == 0) {
                    step.push({ i, k });
                    labirint[ind].push_back(++num);
                    a[i][k] = num;
                }
                else if (!is(a[i][k])) {
                    labirint[ind].push_back(a[i][k]);
                }
                break;
            }
            else if (a[i][k - 1] == 2) {
                labirint[ind].push_back(++num);
                a[i][k] = num;
                v.push_back(num);
                break;
            }
        }
    }
}
void bfs(int x) {
    visited[x] = true;
    pred[x] = -1;
    q.push(x);
    while (!q.empty()) {
        int st = q.front();
        q.pop();
        for (auto r : labirint[st]) {
            if (!visited[r]) {
                visited[r] = true;
                dist[r] = dist[st] + 1;
                pred[r] = st;
                q.push(r);
            }
        }
    }
}

void path(int st) {
    deque<int> way;
    k = 0;
    while (st != -1) {
        if (st == 0) {
            break;
        }
        k++;
        st = pred[st];
    }
    if (st == -1) {
        path_len = min(k, path_len);
    }
}

int main() {
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        a[i][0] = 1;
        a[i][m + 1] = 1;
    }
    for (j = 1; j <= m; j++) {
        a[0][j] = 1;
        a[n + 1][j] = 1;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    step.push({ 1, 1 });
    wander();
    bfs(3);
    for (auto r : v) {
        path(r);
    }
    cout << path_len - 1;
}