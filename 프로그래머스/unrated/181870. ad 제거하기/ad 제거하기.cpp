#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    int e = -1, idx = 0;
    for(int idx = 0; idx < strArr.size(); idx++){
        e = -1;
        e = strArr[idx].find("ad");
        if(e >= 0){
            strArr.erase(strArr.begin()+idx);
            idx--;
        }
    }
    answer = strArr;
    return answer;
}