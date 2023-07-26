#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string ms = "";
    for(auto s : myString){
        if(s == 'x' && ms != ""){
            answer.push_back(ms);
            ms = "";
        }
        else if(s != 'x'){
            ms += s;
        }
    }
    if(ms != ""){
        answer.push_back(ms);
    }
    sort(answer.begin(), answer.end());
    return answer;
}