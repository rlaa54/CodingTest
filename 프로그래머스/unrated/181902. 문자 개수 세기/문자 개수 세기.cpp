#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    answer.resize(52);
    for(auto s : my_string) {
        if(s == toupper(s)){
            answer[(int)s - 65]++;    
        } else {
            answer[(int)s - 71]++;
        }
    }
    return answer;
}