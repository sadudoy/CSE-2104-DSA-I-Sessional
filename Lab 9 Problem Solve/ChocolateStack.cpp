vector<int> solution (int N, vector<int> C) {
    vector<int> res;
    stack<int> st;
    for(int i = 0; i<N; i++) {
        if(C[i] == 0) {
            res.push_back(st.top());
            st.pop();
        } 
        else  {
            st.push(C[i]);
        }
    }

    return res;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;  
    stack<int> st;

    vector<int> c;
    for(int i = 0; i<N; i++) {
        int k;
        cin>>k;
        c.push_back(k);
    }

    for(int i = 0; i<N; i++) {
        if(c[i] == 0) {
            cout<<st.top()<< " ";
            st.pop();
        } 
        else if(c[i] > 0) {
            st.push(c[i]);
        }
    }


}

*/


