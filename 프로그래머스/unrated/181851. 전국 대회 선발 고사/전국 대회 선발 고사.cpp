#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;  
    int arr[101];
    fill_n(arr, 100, 101);
    vector<int> abc;
    int a[2] = {101, 101}, b[2] = {101, 101}, c[2] = {101, 101};
    for(int i = 0; i < rank.size(); i++){
        if(attendance[i] == true){
            arr[i] = rank[i];
        }
    }
    
    for(int i = 0; i < 101; i++){
        if(a[1] > arr[i]){
            a[0] = i;
            a[1] = arr[i];
            cout << a[0] << ", " << a[1] << '\n';
        }
    }
    arr[a[0]] = 101;
    
    for(int i = 0; i < 101; i++){
        if(b[1] > arr[i]){
            b[0] = i;
            b[1] = arr[i];
        }
    }
    arr[b[0]] = 101;
    
    for(int i = 0; i < 101; i++){
        if(c[1] > arr[i]){
            c[0] = i;
            c[1] = arr[i];
        }
    }
    arr[c[0]] = 101;
    
    answer = 10000 * a[0] + 100 * b[0] + c[0];
    return answer;
}