#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int j = 0, k = 0;
    for(int i = 0; i < myString.size(); i++){
        j = i + pat.size();
        if(j > myString.size()){
            break;
        }
        if(pat == string(myString.begin() + i, myString.begin() + j)){
            answer++;
        }
    }
    return answer;
}