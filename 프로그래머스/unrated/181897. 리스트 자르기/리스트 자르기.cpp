#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int f = 0, e = 0, a, b ,c;
    a = slicer[0];
    b = slicer[1] + 1;
    c = 1;
    if(n == 1) {
        f = 0;
        e = b;
    }
    else if (n == 2) {
        f = a;
        e = num_list.size();
    }
    else if (n == 3) {
        f = a;
        e = b;
    }
    else if (n == 4) {
        f = a;
        e = b;
        c = slicer[2];
    }
    for(int i = f; i < e; i += c){
        answer.push_back(num_list[i]);
    }
    return answer;
}