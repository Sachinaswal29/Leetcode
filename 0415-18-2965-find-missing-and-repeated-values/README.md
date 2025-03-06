<h2> 415 18
2965. Find Missing and Repeated Values</h2><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> 2D integer matrix <code style="user-select: auto;"><font face="monospace" style="user-select: auto;">grid</font></code> of size <code style="user-select: auto;">n * n</code> with values in the range <code style="user-select: auto;">[1, n<sup style="user-select: auto;">2</sup>]</code>. Each integer appears <strong style="user-select: auto;">exactly once</strong> except <code style="user-select: auto;">a</code> which appears <strong style="user-select: auto;">twice</strong> and <code style="user-select: auto;">b</code> which is <strong style="user-select: auto;">missing</strong>. The task is to find the repeating and missing numbers <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a <strong style="user-select: auto;">0-indexed </strong>integer array </em><code style="user-select: auto;">ans</code><em style="user-select: auto;"> of size </em><code style="user-select: auto;">2</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">ans[0]</code><em style="user-select: auto;"> equals to </em><code style="user-select: auto;">a</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">ans[1]</code><em style="user-select: auto;"> equals to </em><code style="user-select: auto;">b</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,3],[2,2]]
<strong style="user-select: auto;">Output:</strong> [2,4]
<strong style="user-select: auto;">Explanation:</strong> Number 2 is repeated and number 4 is missing so the answer is [2,4].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[9,1,7],[8,9,2],[3,4,6]]
<strong style="user-select: auto;">Output:</strong> [9,5]
<strong style="user-select: auto;">Explanation:</strong> Number 9 is repeated and number 5 is missing so the answer is [9,5].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n == grid.length == grid[i].length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= grid[i][j] &lt;= n * n</code></li>
	<li style="user-select: auto;">For all <code style="user-select: auto;">x</code> that <code style="user-select: auto;">1 &lt;= x &lt;= n * n</code> there is exactly one <code style="user-select: auto;">x</code> that is not equal to any of the grid members.</li>
	<li style="user-select: auto;">For all <code style="user-select: auto;">x</code> that <code style="user-select: auto;">1 &lt;= x &lt;= n * n</code> there is exactly one <code style="user-select: auto;">x</code> that is equal to exactly two of the grid members.</li>
	<li style="user-select: auto;">For all <code style="user-select: auto;">x</code> that <code style="user-select: auto;">1 &lt;= x &lt;= n * n</code> except two of them there is exatly one pair of <code style="user-select: auto;">i, j</code> that <code style="user-select: auto;">0 &lt;= i, j &lt;= n - 1</code> and <code style="user-select: auto;">grid[i][j] == x</code>.</li>
</ul>
</div>