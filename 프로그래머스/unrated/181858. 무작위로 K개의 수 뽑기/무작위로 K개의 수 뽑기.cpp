#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    bool isIn = false;
    for(int i = 0; i < arr.size(); i++){
        isIn = false;
        for(int j = 0; j < answer.size(); j++){
            if(arr[i] == answer[j]){
                isIn = true;
                break;
            }
        }
        if(!isIn && answer.size() < k){
            answer.push_back(arr[i]);    
        }
    }
    while(answer.size() < k){
        answer.push_back(-1);
    }
    return answer;
}