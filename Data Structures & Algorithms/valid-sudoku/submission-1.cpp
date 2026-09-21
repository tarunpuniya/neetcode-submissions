class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        
        unordered_map<int, unordered_map<char, int>> rowFreq;
        unordered_map<int, unordered_map<char, int>> colFreq;
        unordered_map<int, unordered_map<char, int>> boxFreq;

        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                int box = (row/3)*3 + (col/3);
                if(board[row][col]=='.') continue;
                char num = board[row][col];
                rowFreq[row][num]++;

                // Column mein frequency
                colFreq[col][num]++;

                // Box mein frequency
                boxFreq[box][num]++;

                // Duplicate check
                if(rowFreq[row][num] > 1)
                    return false;

                if(colFreq[col][num] > 1)
                    return false;

                if(boxFreq[box][num] > 1)
                    return false;

            }
           
            
            
        }
       
        
        return true;
        
    }
};
