#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int i = n;
    while(true){
        if(i % 6 == 0){
            if(i % n == 0){
                break;    
            }    
        }
        i++;
    }
    answer = i / 6;
    return answer;
}