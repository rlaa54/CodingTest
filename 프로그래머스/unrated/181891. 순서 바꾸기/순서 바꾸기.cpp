#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    vector<int> test(num_list.begin() + n, num_list.end());
    num_list.erase(num_list.begin() + n, num_list.end());
    answer = test;
    for(auto n : num_list){
        answer.push_back(n);
    }
    return answer;
}