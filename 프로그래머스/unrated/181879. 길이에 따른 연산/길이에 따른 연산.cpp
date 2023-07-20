#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int val = 1;
    for(auto n : num_list) {
        if(num_list.size() >= 11){
            answer += n;
        }
        else{
            val *= n;
            answer = val;
        }
    }
    return answer;
}