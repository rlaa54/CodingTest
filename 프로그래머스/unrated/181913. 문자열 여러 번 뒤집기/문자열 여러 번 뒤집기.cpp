#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    char temp;
    int f = 0, e = 0, c = 0;
    for(auto n : queries){
        f = n[0];
        e = n[1];
        c = ceil(static_cast<float>(n[0]+n[1])/2);
        cout << c << endl;
        for(int i = f, j = e; i < c; i++, j--){
            temp = my_string[j];
            my_string[j] = my_string[i];
            my_string[i] = temp;
        }
    }
    answer = my_string;
    return answer;
    
}