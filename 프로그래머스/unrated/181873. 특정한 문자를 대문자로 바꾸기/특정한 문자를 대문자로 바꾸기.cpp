#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    string s;
    for(int i = 0; i < my_string.size(); i++){
        s = (1, my_string[i]);
        if(s == alp){
            my_string[i] = toupper(my_string[i]);
        }
    }
    answer = my_string;
    return answer;
}