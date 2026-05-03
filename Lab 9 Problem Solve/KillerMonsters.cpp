#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;  

    for(int t = 0; t < N; t++) {
        int size;
        cin >> size;
        vector<int> vec;   

        for(int i = 0; i < size; i++) {
            int k;
            cin >> k;
            vec.push_back(k);
        }

        stack<int> mons; 
        int count = 0; 
        for(int i = 0; i < size; i++) {
            while(!mons.empty() && mons.top() <= vec[i]) {
                mons.pop();
                count--;
            }
            mons.push(vec[i]);
            count++;
            cout<<count<< " ";
        }
        cout <<endl;
    }
}