#include <iostream>
#include <vector>

using namespace std;

struct part{
    int index;
    int quit_num;
    int m;
};

int main()
{
    int n, m = 0;
    bool the_same = false;
    cin >> n;

    vector<part> ribs;
    part rib;

    rib.quit_num = 1;
    for (int i = 0; i < n; i++){
        int from, to , m1;
        cin >> from >> to >> m1;
        if (from > m){
            m = from;
        }
        for (auto & item : ribs){
            if (from == item.index){
                the_same = true;
                item.quit_num++;
                item.m += m1;
            }
        }
        if (!the_same){
            rib.index = from;
            rib.m = m1;
            ribs.push_back(rib);
        }
        the_same = false;
    }

    for (int i = 0; i <= m; i++){
        for (auto & j : ribs){
            if (j.index == i){
                cout << j.index << " " << j.quit_num << " " << j.m << endl;
            }
        }
    }


    return 0;
}
