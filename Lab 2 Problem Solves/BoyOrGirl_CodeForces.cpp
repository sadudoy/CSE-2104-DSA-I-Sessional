#include <iostream>
using namespace std;

int main() 
{
    string a;
    cin>>a;
    int count = 0;

    for (int i = 0; i < a.size(); i++) {
        int isDistinct = 1;   
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDistinct = 0;   
                break;                
            }
        }
        if (isDistinct == 1) {
            count++;
        }
    }
    if(count %2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}

   