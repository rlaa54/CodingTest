#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s1;
    for(auto s : my_string){
        if(s == ' '){
            answer.push_back(s1);
            s1 = "";
        }
        else {
            s1 += s;
        }                    
    }
    answer.push_back(s1);
    return answer;
}