#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    int f = 0, e = 0;
    for(auto i : intervals) {
        f = i[0];
        e = i[1];
        for(int j = f; j <= e; j++){
            answer.emplace_back(arr[j]);    
        }
    }
    return answer;
}