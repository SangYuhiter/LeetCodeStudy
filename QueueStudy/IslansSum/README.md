#岛屿的个数
##给定一个由 '1'（陆地）和 '0'（水）组成的的二维网格，计算岛屿的数量。一个岛被水包围，并且它是通过水平方向或垂直方向上相邻的陆地连接而成的。你可以假设网格的四个边均被水包围。


###示例1：
```C++
输入：
11110
11010
11000
00000
输出：1
```

###示例2：
```C++
输入：
11000
11000
00100
00011
输出：3
```

###解题思想：
####使用深度搜索方法，先对每个点进行遍历，若为1，则深度搜索它周围的点全改为0，若已全为0，则查找下一个，并进行计数