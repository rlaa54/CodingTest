#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string ms;
    for(auto s : myStr){
        if(s == 'a' || s == 'b' || s == 'c'){
            answer.push_back(ms);
            ms = "";
        }
        else {
            ms += s;
        }        
    }
    answer.push_back(ms);
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == ""){
            answer.erase(answer.begin()+i);
            i--;
        }
    }
    if(answer.empty()){
        answer.push_back("EMPTY");
    }
    return answer;
}