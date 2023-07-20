#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int cnt = 0;
    for(auto n : num_list) {
        while(n != 1){
            if (n % 2 == 0) {
                n /= 2;
            }
            else {
                n = (n - 1) / 2;
            }
            cnt++;
        }
    }
    answer = cnt;
    return answer;
}