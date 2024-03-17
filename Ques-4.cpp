// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int> (n));
        int minr=0,minc=0;
        int maxr=n-1,maxc=n-1;
        int a = 1;
        while(minr<=maxr && minc<=maxc){
        // Right
            for(int j=minc;j<=maxc;j++){
                matrix[minr][j] = a++;
            }
            minr++;
            
            if(minr>maxr || minc>maxc) break;
            // Down
            for(int i=minr;i<=maxr;i++){
                matrix[i][maxc] = a++;
            }
            maxc--;
            
            if(minr>maxr || minc>maxc) break;
            // Left
            for(int j=maxc;j>=minc;j--){
                matrix[maxr][j] = a++;
            }
            maxr--;
            
            // Up
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                matrix[i][minc] = a++;
            }
            minc++;
        }
        return matrix;
    }
};