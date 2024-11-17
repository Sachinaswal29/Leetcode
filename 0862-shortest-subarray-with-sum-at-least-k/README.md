<h2><a href="https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/">862. Shortest Subarray with Sum at Least K</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the length of the shortest non-empty <strong style="user-select: auto;">subarray</strong> of </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> with a sum of at least </em><code style="user-select: auto;">k</code>. If there is no such <strong style="user-select: auto;">subarray</strong>, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a <strong style="user-select: auto;">contiguous</strong> part of an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1], k = 1
<strong style="user-select: auto;">Output:</strong> 1
</pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2], k = 4
<strong style="user-select: auto;">Output:</strong> -1
</pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,-1,2], k = 3
<strong style="user-select: auto;">Output:</strong> 3
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>