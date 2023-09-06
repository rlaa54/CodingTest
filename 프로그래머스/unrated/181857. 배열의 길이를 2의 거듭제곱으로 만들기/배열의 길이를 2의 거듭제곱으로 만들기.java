class Solution {
    public int[] solution(int[] arr) {
        
        int i = 1, j = 0;
        while(i < arr.length){
            i *= 2;
        }
        int[] answer = new int[i];
        for(int k = 0; k < i; k++){
            if(k > arr.length - 1) answer[k] = 0;
            else answer[k] = arr[k];
        }
        return answer;
    }
}