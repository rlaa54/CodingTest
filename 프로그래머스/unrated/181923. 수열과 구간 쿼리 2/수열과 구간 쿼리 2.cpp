#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int s = 0;
    int e = 0;
    int k = 0;
    int min = 0;
    int idx = 0;
    bool first = false;
    for(auto q : queries) {
        s = q[0];
        e = q[1];
        k = q[2];
        min = arr[s];
        idx = s;
        first = false;
        for (int i = s; i <= e; i++){
            if(arr[i] > k) {
                if (!first) {
                    min = arr[i];
                    idx = i;
                    first = true;
                }
                if(min > arr[i]) {
                    min = arr[i];
                    idx = i;
                }
            }
        }
        // cout << "k:" << k << " ";
        if (min < k) {
            answer.push_back(-1);
        }
        else {
            answer.push_back(min);
        }
    }
    return answer;
}