<h2><a href="https://leetcode.com/problems/valid-arrangement-of-pairs/">2097. Valid Arrangement of Pairs</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">pairs</code> where <code style="user-select: auto;">pairs[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code>. An arrangement of <code style="user-select: auto;">pairs</code> is <strong style="user-select: auto;">valid</strong> if for every index <code style="user-select: auto;">i</code> where <code style="user-select: auto;">1 &lt;= i &lt; pairs.length</code>, we have <code style="user-select: auto;">end<sub style="user-select: auto;">i-1</sub> == start<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;"><strong style="user-select: auto;">any</strong> valid arrangement of </em><code style="user-select: auto;">pairs</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> The inputs will be generated such that there exists a valid arrangement of <code style="user-select: auto;">pairs</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pairs = [[5,1],[4,5],[11,9],[9,4]]
<strong style="user-select: auto;">Output:</strong> [[11,9],[9,4],[4,5],[5,1]]
<strong style="user-select: auto;">Explanation:
</strong>This is a valid arrangement since end<sub style="user-select: auto;">i-1</sub> always equals start<sub style="user-select: auto;">i</sub>.
end<sub style="user-select: auto;">0</sub> = 9 == 9 = start<sub style="user-select: auto;">1</sub> 
end<sub style="user-select: auto;">1</sub> = 4 == 4 = start<sub style="user-select: auto;">2</sub>
end<sub style="user-select: auto;">2</sub> = 5 == 5 = start<sub style="user-select: auto;">3</sub>
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pairs = [[1,3],[3,2],[2,1]]
<strong style="user-select: auto;">Output:</strong> [[1,3],[3,2],[2,1]]
<strong style="user-select: auto;">Explanation:</strong>
This is a valid arrangement since end<sub style="user-select: auto;">i-1</sub> always equals start<sub style="user-select: auto;">i</sub>.
end<sub style="user-select: auto;">0</sub> = 3 == 3 = start<sub style="user-select: auto;">1</sub>
end<sub style="user-select: auto;">1</sub> = 2 == 2 = start<sub style="user-select: auto;">2</sub>
The arrangements [[2,1],[1,3],[3,2]] and [[3,2],[2,1],[1,3]] are also valid.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pairs = [[1,2],[1,3],[2,1]]
<strong style="user-select: auto;">Output:</strong> [[1,2],[2,1],[1,3]]
<strong style="user-select: auto;">Explanation:</strong>
This is a valid arrangement since end<sub style="user-select: auto;">i-1</sub> always equals start<sub style="user-select: auto;">i</sub>.
end<sub style="user-select: auto;">0</sub> = 2 == 2 = start<sub style="user-select: auto;">1</sub>
end<sub style="user-select: auto;">1</sub> = 1 == 1 = start<sub style="user-select: auto;">2</sub>
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= pairs.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pairs[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">start<sub style="user-select: auto;">i</sub> != end<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">No two pairs are exactly the same.</li>
	<li style="user-select: auto;">There <strong style="user-select: auto;">exists</strong> a valid arrangement of <code style="user-select: auto;">pairs</code>.</li>
</ul>
</div>