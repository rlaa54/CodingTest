#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer.resize(my_string.length());
    for(int i = 0; i < my_string.length(); i++) {
        answer[i] = my_string[i];
        // 0, 1, <= ,2, 3, 4, 5, 6, <= 7, 8, 9
        if (i >= s && i < s + overwrite_string.length()){
            // 0, 1, 2, 3, 4, 5             
            answer[i] = overwrite_string[i - s];
        }
    }
    return answer;
}