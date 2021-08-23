#include <vector>
#include <queue>
#include <iostream>
int i, j, k, n, m, num = 1, path_len = 100, cell;
std::vector <std::vector<int>> labirint(200);
int a[20][20];
std::queue <std::pair<int, int>> step;
std::queue <int> q;
std::vector<int> v;
int pred[20];
int dist[20];
int passed[20];

bool is(int x) {
    if (cell == x) {
        return true;
    }
    for (auto r : labirint[cell]) {
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
        cell = a[i][j];
        for (int k = i; k <= n; k++) {
            if (a[k][j] == 1) {

                break;
            }
            else if (a[k + 1][j] == 1 && (a[k][j] >= 3 || a[k][j] == 0)) {
                if (a[k][j] == 0) {
                    step.push({ k, j });
                    labirint[cell].push_back(++num);
                    a[k][j] = num;
                }
                else if(!is(a[k][j])){
                    labirint[cell].push_back(a[k][j]);
                }
                break;
            }
            else if (a[k + 1][j] == 2) {
                labirint[cell].push_back(++num);
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
                    labirint[cell].push_back(++num);
                    a[k][j] = num;
                }
                else if(!is(a[k][j])){
                    labirint[cell].push_back(a[k][j]);
                }
                break;
            }
            else if (a[k - 1][j] == 2) {
                labirint[cell].push_back(++num);
                a[k][j] = num;
                v.push_back(num);
                break;
            }
        }

        for (int k = j; k <= m; k++) {
            if (a[i][k] == 1) {

                break;
            }
            else if (a[i][k + 1] == 1 && (a[i][k] == 0|| a[i][k] >= 3)) {
                if (a[i][k] == 0) {
                    step.push({ i, k });
                    labirint[cell].push_back(++num);
                    a[i][k] = num;
                }
                else if(!is(a[i][k])){
                    labirint[cell].push_back(a[i][k]);
                }
                break;
            }
            else if (a[i][k + 1] == 2) {
                labirint[cell].push_back(++num);
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
                    labirint[cell].push_back(++num);
                    a[i][k] = num;
                }
                else if (!is(a[i][k])){
                    labirint[cell].push_back(a[i][k]);
                }
                break;
            }
            else if (a[i][k - 1] == 2) {
                labirint[cell].push_back(++num);
                a[i][k] = num;
                v.push_back(num);
                break;
            }
        }
    }
}

void fill(int x) {
    passed[x] = true;
    pred[x] = -1;
    q.push(x);
    while (!q.empty()) {
        int st = q.front();
        q.pop();
        for (auto r : labirint[st]) {
            if (!passed[r]) {
                passed[r] = true;
                dist[r] = dist[st] + 1;
                pred[r] = st;
                q.push(r);
            }
        }
    }
}
void path(int st) {
    std::deque<int> way;
    k = 0;
    while (st != -1) {
        if (st == 0) {
            break;
        }
        k++;
        st = pred[st];
    }
    if (st == -1) {
        path_len = std::min(k, path_len);
    }
}

int main() {
    std::cin >> n >> m;
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
            std::cin >> a[i][j];
        }
    }
    step.push({ 1, 1 });
    wander();
    fill(3);
    for (auto r : v) {
        path(r);
    }
    std::cout << path_len - 1;
}