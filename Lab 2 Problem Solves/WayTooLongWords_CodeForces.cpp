//Problem Name: A - Way Too Long Words
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int cas;
    cin>>cas;
    vector <string> name;
    for(int i = 0; i<cas; i++){
        string n;
        cin>>n;
        name.push_back(n);
    }
    for (int i = 0; i < cas; i++) {
        int size = name[i].size();
        if(size <= 10){
            cout<<name[i]<<endl;
        }
        else{
            cout<<name[i][0]<<(size - 2)<<name[i][size - 1]<<endl;
        }

    }
}
