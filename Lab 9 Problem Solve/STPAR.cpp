#include<bits/stdc++.h>
using namespace std;

int main()
{   
    while (true) {
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> vec;
        stack<int> stack;   
        
        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            vec.push_back(k);
        }

        int expect = 1;
        for(int i = 0; i < n; i++) {
            if(vec[i] == expect) {
                expect++;
            } else {
                stack.push(vec[i]);
            }
            while (!stack.empty() && stack.top() == expect) {
                stack.pop();
                expect++;
            }
        }

        if(expect == n + 1) cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
}