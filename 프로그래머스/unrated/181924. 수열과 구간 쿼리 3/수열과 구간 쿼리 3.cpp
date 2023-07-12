#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int idx1 = 0;
    int idx2 = 0;
    
    int temp = 0;
    for(int i = 0; i < queries.size(); i++) {
        idx1 = queries[i][0];
        idx2 = queries[i][1];
        temp = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[idx2] = temp;
    }
    answer = arr;
    return answer;
}