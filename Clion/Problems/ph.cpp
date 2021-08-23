#include <iostream>
#include <string>

using namespace std;

string reverses(string& s3){
    string s1;
    for(int i = 0; i < s3.size(); ++i){
        s1.push_back(s3[s3.size()-1-i]);
    }
    return s1;
}




int main()
{
    string s1, s2, s3;
    int a = 0;
    int b = 0;
    int m, M;
    cin >> s1 >> s2;
    M = max(s1.size(), s2.size());
    m = min(s1.size(), s2.size());
    if (s1.size() == m)
        swap(s1,s2);
    for (int i = M - 1 ; i >= 0; i--){
        if(M - i <= m){ // правильное ли условие?
            a = (s1[i]) + (s2[i-M+m]) - 2*'0'+ b;
            if (a == 0){
                s3.push_back('0');//push_back
                b = 0;
            }
            if (a == 1){
                s3.push_back('1');;//push_back
                b = 0;
            }
            if (a == 2){
                s3.push_back('0');//push_back
                if(i == 0) {
                    s3.push_back('1');
                }
                else b = 1;
            }
            if (a == 3){
                s3.push_back('1');//push_back
                if(i == 0) {
                    s3.push_back('1');
                }
                else b = 1;
            }
        }
        else{
                if (b == 1){
                    a = s1[i] - '0'+ b;
                    if (a == 0){
                        s3.push_back('0');//push_back
                        b = 0;
                    }
                    if (a == 1){
                        s3.push_back('1');;//push_back
                        b = 0;
                    }
                    if (a == 2){
                        s3.push_back('0');//push_back
                        if(i == 0) {
                            s3.push_back('1');
                        }
                        else b = 1;

                    }
                }
                else{
                    s3.push_back(s1[i]);
                }

        }
    }

    cout << reverses(s3);


    return 0;
}