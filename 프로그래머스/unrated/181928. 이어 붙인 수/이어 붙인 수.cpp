#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string even = "";
    string odd = "";
    for (auto n : num_list) {
        if (n % 2 == 0) {
            even += to_string(n);
        }
        else {
            odd += to_string(n);        
        }
    }
    answer = stoi(even) + stoi(odd);
    return answer;
}