// Problem name: number of islands
// Date: THU DEC 26 2024

#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector < pair<int, int> > directions = { {0,1}, {1,0}, {-1,0}, {0,-1} };
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (grid[row][col] == '1') {
                    count++;
                    grid[row][col] = '0';
                    // Perform BFS
                    queue<pair<int, int>> q;
                    q.push({ row,col });
                    while (!q.empty()) {
                        auto current = q.front();
                        q.pop();
                        for (auto dir : directions) {
                            int new_row = current.first + dir.first;
                            int new_col = current.second + dir.second;
                            
                            if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && grid[new_row][new_col] == '1') {
                                grid[new_row][new_col] = '0';
                                q.push({ new_row, new_col });
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};

