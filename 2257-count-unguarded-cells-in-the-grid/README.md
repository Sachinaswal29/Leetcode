<h2><a href="https://leetcode.com/problems/count-unguarded-cells-in-the-grid/">2257. Count Unguarded Cells in the Grid</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integers <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code> representing a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> grid. You are also given two 2D integer arrays <code style="user-select: auto;">guards</code> and <code style="user-select: auto;">walls</code> where <code style="user-select: auto;">guards[i] = [row<sub style="user-select: auto;">i</sub>, col<sub style="user-select: auto;">i</sub>]</code> and <code style="user-select: auto;">walls[j] = [row<sub style="user-select: auto;">j</sub>, col<sub style="user-select: auto;">j</sub>]</code> represent the positions of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> guard and <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> wall respectively.</p>

<p style="user-select: auto;">A guard can see <b style="user-select: auto;">every</b> cell in the four cardinal directions (north, east, south, or west) starting from their position unless <strong style="user-select: auto;">obstructed</strong> by a wall or another guard. A cell is <strong style="user-select: auto;">guarded</strong> if there is <strong style="user-select: auto;">at least</strong> one guard that can see it.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the number of unoccupied cells that are <strong style="user-select: auto;">not</strong> <strong style="user-select: auto;">guarded</strong>.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/10/example1drawio2.png" style="width: 300px; height: 204px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 4, n = 6, guards = [[0,0],[1,1],[2,3]], walls = [[0,1],[2,2],[1,4]]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> The guarded and unguarded cells are shown in red and green respectively in the above diagram.
There are a total of 7 unguarded cells, so we return 7.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/10/example2drawio.png" style="width: 200px; height: 201px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 3, guards = [[1,1]], walls = [[0,1],[1,0],[2,1],[1,2]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The unguarded cells are shown in green in the above diagram.
There are a total of 4 unguarded cells, so we return 4.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= guards.length, walls.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= guards.length + walls.length &lt;= m * n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">guards[i].length == walls[j].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= row<sub style="user-select: auto;">i</sub>, row<sub style="user-select: auto;">j</sub> &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= col<sub style="user-select: auto;">i</sub>, col<sub style="user-select: auto;">j</sub> &lt; n</code></li>
	<li style="user-select: auto;">All the positions in <code style="user-select: auto;">guards</code> and <code style="user-select: auto;">walls</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>