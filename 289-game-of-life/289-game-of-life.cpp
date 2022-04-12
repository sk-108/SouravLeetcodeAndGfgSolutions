class Solution {
public:
    bool check(int x,int y,int n,int m)
    {
        if((x>=0 && x<n)&&(y>=0 && y<m))
        {
            return true;
        }
        else return false;
    }
    void gameOfLife(vector<vector<int>>& board) {
        queue<pair<int,int>>p;
        vector<vector<int>>ans(board);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                int count = 0;
                int x = i;
                int y = j;
            if(check(x,y+1,board.size(),board[0].size()))
            {
                if(board[x][y+1] == 1)count++;
            }
            if(check(x+1,y,board.size(),board[0].size()))
            {
                if(board[x+1][y] == 1)count++;
            }
             if(check(x-1,y,board.size(),board[0].size()))
            {
                if(board[x-1][y] == 1)count++;
            }
             if(check(x,y-1,board.size(),board[0].size()))
            {
                if(board[x][y-1] == 1)count++;
            }
             if(check(x+1,y+1,board.size(),board[0].size()))
            {
                if(board[x+1][y+1] == 1)count++;
            }
             if(check(x-1,y-1,board.size(),board[0].size()))
            {
                if(board[x-1][y-1] == 1)count++;
            }
             if(check(x-1,y+1,board.size(),board[0].size()))
            {
                 cout<<x-1<<" "<<y+1<<" "<<x<<" "<<y<<" "<<board[x-1][y+1]<<endl;
                if(board[x-1][y+1] == 1)count++;
            }
             if(check(x+1,y-1,board.size(),board[0].size()))
            {
                if(board[x+1][y-1] == 1)count++;
            }
                // cout<<count<<endl;
            if(count < 2){
                if(board[x][y] == 1)
                    ans[x][y] = 0;
            }
            if(count == 2 || count ==3)
            {
                if(board[i][j] ==1 )continue;
                // else board[i][j] = 1;
            }
            if(count > 3){ 
                if(board[x][y] ==1 )
                    ans[x][y] = 0;
            }
            if(count == 3){
                if(board[x][y] == 0)
                    ans[x][y] = 1;
            }
           
        }
    }
        board = ans;
        // while(!p.empty())
        // {
        //     int x = p.front().first;
        //     int y = p.front().second;
            // int count = 0;
            // if(check(x,y+1,board.size(),board[0].size()))
            // {
            //     if(board[x][y+1] == 1)count++;
            // }
            // if(check(x+1,y,board.size(),board[0].size()))
            // {
            //     if(board[x+1][y] == 1)count++;
            // }
            //  if(check(x-1,y,board.size(),board[0].size()))
            // {
            //     if(board[x-1][y] == 1)count++;
            // }
            //  if(check(x,y-1,board.size(),board[0].size()))
            // {
            //     if(board[x][y-1] == 1)count++;
            // }
            //  if(check(x+1,y+1,board.size(),board[0].size()))
            // {
            //     if(board[x+1][y+1] == 1)count++;
            // }
            //  if(check(x-1,y-1,board.size(),board[0].size()))
            // {
            //     if(board[x-1][y-1] == 1)count++;
            // }
            // if(count < 2){
            //     if(board[x][y] == 1)
            //         board[x][y] = 0;
            // }
            // if(count > 3){ 
            //     if(board[x][y] ==1 )
            //         board[x][y] = 0;
            // }
            // if(count == 3){
            //     if(board[x][y] == 0)
            //         board[x][y] = 1;
            // }
            // p.pop();
        // }
    }
};