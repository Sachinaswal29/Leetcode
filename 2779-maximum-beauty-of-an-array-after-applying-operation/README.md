<h2><a href="https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/">2779. Maximum Beauty of an Array After Applying Operation</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">nums</code> and a <strong style="user-select: auto;">non-negative</strong> integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">In one operation, you can do the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose an index <code style="user-select: auto;">i</code> that <strong style="user-select: auto;">hasn't been chosen before</strong> from the range <code style="user-select: auto;">[0, nums.length - 1]</code>.</li>
	<li style="user-select: auto;">Replace <code style="user-select: auto;">nums[i]</code> with any integer from the range <code style="user-select: auto;">[nums[i] - k, nums[i] + k]</code>.</li>
</ul>

<p style="user-select: auto;">The <strong style="user-select: auto;">beauty</strong> of the array is the length of the longest subsequence consisting of equal elements.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> possible beauty of the array </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> after applying the operation any number of times.</em></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that you can apply the operation to each index <strong style="user-select: auto;">only once</strong>.</p>

<p style="user-select: auto;">A&nbsp;<strong style="user-select: auto;">subsequence</strong> of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the order of the remaining elements.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,6,1,2], k = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> In this example, we apply the following operations:
- Choose index 1, replace it with 4 (from range [4,8]), nums = [4,4,1,2].
- Choose index 3, replace it with 4 (from range [0,4]), nums = [4,4,1,4].
After the applied operations, the beauty of the array nums is 3 (subsequence consisting of indices 0, 1, and 3).
It can be proven that 3 is the maximum possible length we can achieve.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,1], k = 10
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> In this example we don't have to apply any operations.
The beauty of the array nums is 4 (whole array).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i], k &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>