class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        unordered_map<int, unordered_map<char, int>> freq;

        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                int box = (row/3)*3 + (col/3);
                if(board[row][col]=='.') continue;
                freq[box][board[row][col]]++;
                 if(freq[box][board[row][col]] > 1) return false;
            }
           
            
            
        }
       
        
        return true;
        
    }
};
