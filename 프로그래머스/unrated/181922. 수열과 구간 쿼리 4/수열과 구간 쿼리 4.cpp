#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto q : queries) {
        int s = q[0];
        int e = q[1];
        int k = q[2];
        for(int i = s; i <= e; i++){
            if(i % k == 0) {
                cout << i << " ";
                arr[i]++;
            }
        }
    }
    answer = arr;
    return answer;
}