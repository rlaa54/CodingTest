#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    for(int i = 0; i < my_string.size(); i++){
        if(is_prefix == my_string.substr(0, i)) return 1;
    }
    return answer;
}