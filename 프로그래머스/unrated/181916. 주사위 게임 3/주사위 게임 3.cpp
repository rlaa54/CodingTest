#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int cnt = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int o = 0;
    bool three = false, two = false, one = false, doubleT = false, doubleO = false;
    // cnt == 1
    // 1. 네 개가 모두 다를 경우 (one)
    // cnt == 2
    // 2. 두 개가 같고 나머지 두 개가 같은 경우 (doubleT)
    // 3. 두 개가 같고 나머지 두 개가 서로 다를 경우 (two && one)
    // cnt == 3
    // 4. 세 개가 같고 나머지 한 개가 다른 경우 (three && one)
    // cnt == 4
    // 5. 네 개 전부 같을 경우 (four)
    for (int i = 1; i < 7; i++) {
        cnt = 0;
        p = i;
        if (i == a){cnt++;}
        if (i == b){cnt++;}
        if (i == c){cnt++;}
        if (i == d){cnt++;}
        if (cnt == 0) { continue; }
        else if (cnt == 4) { 
            answer = p * 1111;
            break;
        }
        else if (cnt == 3) { 
            three = true; 
            o = i;
        }
        else if (cnt == 2) { 
            if(two) {
                doubleT = true;
            }
            else if (!one){
                q = i;
            }
            two = true; 
        }
        // 3 1 error! p==q==i
        else if (cnt == 1) { 
            if (one) {
                doubleO = true;
                r = i;
            }else {
                q = i;    
            }
            one = true; 
        }
        if (three && one) {
            answer = pow(10 * o + q, 2);
            break;
        }
        else if (doubleT){
            answer = (p + q) * abs(p - q);
            break;
        }
        else if(doubleO && two){
            answer = q * r;
            break;
        }
        answer = min(min(a,b),min(c,d));         
    }
    return answer;
}