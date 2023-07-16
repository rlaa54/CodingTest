#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string myStr = "";
    int myInt = 0;
    for(auto str : intStrs){
        myStr = "";
        myInt = 0;
        for(int i = s; i < s + l; i++){
            myStr += str[i];
        }
        myInt = stoi(myStr);
        if (myInt > k) answer.push_back(myInt);
    }
    return answer;
}