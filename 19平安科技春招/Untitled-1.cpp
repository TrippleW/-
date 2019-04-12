#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";
    int arr[30];
    for(int i=0; i<30; i++) arr[i] = 0;
    for(int i=0; i<s.size(); i++) {
        int index = s[i] - 'a';
        if(arr[index] == 0) {
            res += s[i];
            arr[index] = 1;
        }
        else arr[index]+=1;
    }
    cout << res << endl;
    return 0;
}