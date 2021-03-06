// IslansSum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <vector>
using namespace std;
//深度搜索四周的节点
void dfs(vector<vector<char>>& grid, int x, int y) {
	if (x<0 || x>grid.size() - 1 || y<0 || y>grid[0].size() - 1 || grid[x][y] != '1') {
		return;
	}
	grid[x][y] = '0';
	dfs(grid, x - 1, y);
	dfs(grid, x + 1, y);
	dfs(grid, x, y - 1);
	dfs(grid, x, y + 1);
}

int numIslands(vector<vector<char>>& grid) {
	int count = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			if (grid[i][j] == '0') {
				continue;
			}
			++count;
			dfs(grid, i, j);
		}
	}
	return count;
}

int main()
{
	vector<vector<char>> grid = { {'1','1','0','0','0'},
		{'1','1','0','0','0'},
		{'0','0','1','0','0'},
		{'0','0','0','1','1'} };
	cout << "小岛个数为：" << numIslands(grid) << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
