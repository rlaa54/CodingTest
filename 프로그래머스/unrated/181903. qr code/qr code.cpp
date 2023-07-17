#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int i = 0; i < code.size(); i++) {
        if(i % q == 0){
            if (!(i+r > code.size() - 1)){
                answer += code[i + r];    
            }
        }
    }
    return answer;
    
}