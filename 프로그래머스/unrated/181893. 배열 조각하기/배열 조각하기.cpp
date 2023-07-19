#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    int f = 0, e = 0;
    // cout << arr.size() << endl;
    // arr.resize(10);
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    for(int i = 0; i < query.size(); i++) {
        if(i % 2 == 0) {
            f = query[i] + 1;
            arr.resize(f);
        }
        else {
            f = 0;
            e = query[i];
            arr.erase(arr.begin()+f,arr.begin()+e);
        }
    }
    answer = arr;
    return answer;
}