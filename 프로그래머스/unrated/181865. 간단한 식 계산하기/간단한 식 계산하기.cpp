#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string ms;
    vector<string> vArr;
    for(auto s : binomial){
        if(s == ' '){
            vArr.push_back(ms);
            ms = "";
            continue;
        }
        ms += s;
    }
    vArr.push_back(ms);
    if(vArr[1] == "+"){
        answer = stoi(vArr[0]) + stoi(vArr[2]);
    }
    else if(vArr[1] == "-"){
        answer = stoi(vArr[0]) - stoi(vArr[2]);
    }
    else if(vArr[1] == "*"){
        answer = stoi(vArr[0]) * stoi(vArr[2]);
    }
    return answer;
}