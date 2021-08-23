#include <iostream>
#include <vector>
#include <set>

using namespace std;

void wander(int node_index, vector<set<int>> tree, vector<bool> &used, vector<int> &ans)
{
    used[node_index] = true;
    for (auto i : tree[node_index])
    {
        if (!used[i]) wander(i, tree, used, ans);
    }
    ans.push_back (node_index);

}

bool is(int node_index, const vector<set<int>> &tree, vector<bool> used)
{
    used[node_index] = true;
    for (auto i : tree[node_index])
    {
        if (used[i])
        {
            return false;
        }
        bool check = is(i, tree, used);
        if (!check) return false;
    }
    return true;
}

void topological_sort(const vector<set<int>>& tree, vector<bool> &used, vector<int> &ans)
{
    for (auto && i : used)
    {
        i = false;
    }
    ans.clear();
    for (int i = 0; i < tree.size(); i++)
    {
        if (!used[i])
            wander(i, tree, used, ans);
    }

    for (int i = 0; i < tree.size(); i ++)
    {
        cout << ans[tree.size() - 1 - i] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<set<int>> tree (n);
    for (int i = 0; i < n; i++) tree[i] = {};
    vector<bool> used (n, false);
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        tree[a].insert(b);
    }

    bool is_it_Dag = true;
    for (int i = 0; i < n; i++)
    {
        if (!is(i, tree, used))
        {
            is_it_Dag = false;
            break;
        }
    }

    vector<int> ans;
    if (!is_it_Dag)
        cout << "NO";
    else
    {
        topological_sort(tree, used, ans);
    }

    return 0;
}