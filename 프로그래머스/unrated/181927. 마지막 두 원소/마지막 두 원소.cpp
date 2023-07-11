#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;
    int lastNum = 0;
    int preLastNum = 0;
    int calNum = 0;
    for (auto i : num_list) {
        lastNum = i;
        if(lastNum > preLastNum) {
            calNum = lastNum - preLastNum;
        }
        else {
            calNum = lastNum * 2;
        }
        preLastNum = i;
    }
    answer.push_back(calNum);
    return answer;
}