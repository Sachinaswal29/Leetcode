<h2><a href="https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/">2461. Maximum Sum of Distinct Subarrays With Length K</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>. Find the maximum subarray sum of all the subarrays of <code style="user-select: auto;">nums</code> that meet the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The length of the subarray is <code style="user-select: auto;">k</code>, and</li>
	<li style="user-select: auto;">All the elements of the subarray are <strong style="user-select: auto;">distinct</strong>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum subarray sum of all the subarrays that meet the conditions</em><em style="user-select: auto;">.</em> If no subarray meets the conditions, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;"><em style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous non-empty sequence of elements within an array.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,5,4,2,9,9,9], k = 3
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> The subarrays of nums with length 3 are:
- [1,5,4] which meets the requirements and has a sum of 10.
- [5,4,2] which meets the requirements and has a sum of 11.
- [4,2,9] which meets the requirements and has a sum of 15.
- [2,9,9] which does not meet the requirements because the element 9 is repeated.
- [9,9,9] which does not meet the requirements because the element 9 is repeated.
We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,4,4], k = 3
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The subarrays of nums with length 3 are:
- [4,4,4] which does not meet the requirements because the element 4 is repeated.
We return 0 because no subarrays meet the conditions.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>