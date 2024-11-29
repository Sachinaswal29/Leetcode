<h2><a href="https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid/">2577. Minimum Time to Visit a Cell In a Grid</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">grid</code> consisting of <b style="user-select: auto;">non-negative</b> integers where <code style="user-select: auto;">grid[row][col]</code> represents the <strong style="user-select: auto;">minimum</strong> time required to be able to visit the cell <code style="user-select: auto;">(row, col)</code>, which means you can visit the cell <code style="user-select: auto;">(row, col)</code> only when the time you visit it is greater than or equal to <code style="user-select: auto;">grid[row][col]</code>.</p>

<p style="user-select: auto;">You are standing in the <strong style="user-select: auto;">top-left</strong> cell of the matrix in the <code style="user-select: auto;">0<sup style="user-select: auto;">th</sup></code> second, and you must move to <strong style="user-select: auto;">any</strong> adjacent cell in the four directions: up, down, left, and right. Each move you make takes 1 second.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> time required in which you can visit the bottom-right cell of the matrix</em>. If you cannot visit the bottom-right cell, then return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2023/02/14/yetgriddrawio-8.png" style="user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,1,3,2],[5,1,2,5],[4,3,8,6]]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> One of the paths that we can take is the following:
- at t = 0, we are on the cell (0,0).
- at t = 1, we move to the cell (0,1). It is possible because grid[0][1] &lt;= 1.
- at t = 2, we move to the cell (1,1). It is possible because grid[1][1] &lt;= 2.
- at t = 3, we move to the cell (1,2). It is possible because grid[1][2] &lt;= 3.
- at t = 4, we move to the cell (1,1). It is possible because grid[1][1] &lt;= 4.
- at t = 5, we move to the cell (1,2). It is possible because grid[1][2] &lt;= 5.
- at t = 6, we move to the cell (1,3). It is possible because grid[1][3] &lt;= 6.
- at t = 7, we move to the cell (2,3). It is possible because grid[2][3] &lt;= 7.
The final time is 7. It can be shown that it is the minimum time possible.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2023/02/14/yetgriddrawio-9.png" style="width: 151px; height: 151px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,2,4],[3,2,1],[1,0,4]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There is no path from the top left to the bottom-right cell.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= m, n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">4 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= grid[i][j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[0][0] == 0</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<style type="text/css" style="user-select: auto;">.spoilerbutton {display:block; border:dashed; padding: 0px 0px; margin:10px 0px; font-size:150%; font-weight: bold; color:#000000; background-color:cyan; outline:0; 
}
.spoiler {overflow:hidden;}
.spoiler > div {-webkit-transition: all 0s ease;-moz-transition: margin 0s ease;-o-transition: all 0s ease;transition: margin 0s ease;}
.spoilerbutton[value="Show Message"] + .spoiler > div {margin-top:-500%;}
.spoilerbutton[value="Hide Message"] + .spoiler {padding:5px;}
</style>
</div>