<h2><a href="https://leetcode.com/problems/count-the-number-of-fair-pairs/">2563. Count the Number of Fair Pairs</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> of size <code style="user-select: auto;">n</code> and two integers <code style="user-select: auto;">lower</code> and <code style="user-select: auto;">upper</code>, return <em style="user-select: auto;">the number of fair pairs</em>.</p>

<p style="user-select: auto;">A pair <code style="user-select: auto;">(i, j)</code> is <b style="user-select: auto;">fair </b>if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i &lt; j &lt; n</code>, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">lower &lt;= nums[i] + nums[j] &lt;= upper</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,7,4,4,5], lower = 3, upper = 6
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> There are 6 fair pairs: (0,3), (0,4), (0,5), (1,3), (1,4), and (1,5).
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,7,9,2,5], lower = 11, upper = 11
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> There is a single fair pair: (2,3).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;"><font face="monospace" style="user-select: auto;">-10<sup style="user-select: auto;">9</sup></font>&nbsp;&lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;"><font face="monospace" style="user-select: auto;">-10<sup style="user-select: auto;">9</sup>&nbsp;&lt;= lower &lt;= upper &lt;= 10<sup style="user-select: auto;">9</sup></font></code></li>
</ul>
</div>