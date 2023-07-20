#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int f = 0, e = 0;
    for(auto q : queries){
        f = q[0];
        e = q[1];
        for(int i = 0; i < arr.size(); i++){
            if(i >= f && i <= e){
                arr[i]++;    
            }
        }
    }
    answer = arr;
    return answer;
}