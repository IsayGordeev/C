#include <iostream>
#include <stack>


using namespace std;

int isnum(char& a){
    if (a- 0 > 0 and a- 0 < 9){
        int x = a - '0';
        cout << x;
        return x;}
    return 0;
}

int main(){
    stack<int> st;
    string s;
    cin >> s;
    cout << s << endl;
    for(int i = 0; i < s.size(); ++i){
        int x = isnum(s[i]);
        st.push(x);
        int b = st.top();
        st.pop();
        int a = st.top();
        st.pop();
        if (s[i] == '+')
            x = a + b;
//        if (s == "-")
//            x = a - b;
//        if (s == "*")
//            x = a * b;
//        if (s == "/")
//            x = a / b;

    }
    cout << st.top();


    return 0;
}