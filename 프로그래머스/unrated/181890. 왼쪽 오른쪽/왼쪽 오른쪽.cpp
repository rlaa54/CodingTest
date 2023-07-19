#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    bool fr = false, islr = false;
    for(auto s : str_list){
        answer.push_back(s);
        if (s == "l" && !fr){
            answer.pop_back();
            islr = true;
            break;
        }
        else if (s == "r" && !fr){
            answer.clear();
            fr = true;
        }
    }
    if (!islr && !fr) { answer = {};}
    return answer;
}