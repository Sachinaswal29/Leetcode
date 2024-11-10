<h2><a href="https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/">3097. Shortest Subarray With OR at Least K II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">nums</code> of <strong style="user-select: auto;">non-negative</strong> integers and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">An array is called <strong style="user-select: auto;">special</strong> if the bitwise <code style="user-select: auto;">OR</code> of all of its elements is <strong style="user-select: auto;">at least</strong> <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">shortest</strong> <strong style="user-select: auto;">special</strong> <strong style="user-select: auto;">non-empty</strong> <span data-keyword="subarray-nonempty" style="user-select: auto;">subarray</span> of</em> <code style="user-select: auto;">nums</code>, <em style="user-select: auto;">or return</em> <code style="user-select: auto;">-1</code> <em style="user-select: auto;">if no special subarray exists</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [1,2,3], k = 2</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">1</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The subarray <code style="user-select: auto;">[3]</code> has <code style="user-select: auto;">OR</code> value of <code style="user-select: auto;">3</code>. Hence, we return <code style="user-select: auto;">1</code>.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [2,1,8], k = 10</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">3</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The subarray <code style="user-select: auto;">[2,1,8]</code> has <code style="user-select: auto;">OR</code> value of <code style="user-select: auto;">11</code>. Hence, we return <code style="user-select: auto;">3</code>.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [1,2], k = 0</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">1</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The subarray <code style="user-select: auto;">[1]</code> has <code style="user-select: auto;">OR</code> value of <code style="user-select: auto;">1</code>. Hence, we return <code style="user-select: auto;">1</code>.</p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>