<h2><a href="https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/">3254. Find the Power of K-Size Subarrays I</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of integers <code style="user-select: auto;">nums</code> of length <code style="user-select: auto;">n</code> and a <em style="user-select: auto;">positive</em> integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">power</strong> of an array is defined as:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Its <strong style="user-select: auto;">maximum</strong> element if <em style="user-select: auto;">all</em> of its elements are <strong style="user-select: auto;">consecutive</strong> and <strong style="user-select: auto;">sorted</strong> in <strong style="user-select: auto;">ascending</strong> order.</li>
	<li style="user-select: auto;">-1 otherwise.</li>
</ul>

<p style="user-select: auto;">You need to find the <strong style="user-select: auto;">power</strong> of all <span data-keyword="subarray-nonempty" style="user-select: auto;">subarrays</span> of <code style="user-select: auto;">nums</code> of size <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Return an integer array <code style="user-select: auto;">results</code> of size <code style="user-select: auto;">n - k + 1</code>, where <code style="user-select: auto;">results[i]</code> is the <em style="user-select: auto;">power</em> of <code style="user-select: auto;">nums[i..(i + k - 1)]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [1,2,3,4,3,2,5], k = 3</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> [3,4,-1,-1,-1]</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">There are 5 subarrays of <code style="user-select: auto;">nums</code> of size 3:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">[1, 2, 3]</code> with the maximum element 3.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">[2, 3, 4]</code> with the maximum element 4.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">[3, 4, 3]</code> whose elements are <strong style="user-select: auto;">not</strong> consecutive.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">[4, 3, 2]</code> whose elements are <strong style="user-select: auto;">not</strong> sorted.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">[3, 2, 5]</code> whose elements are <strong style="user-select: auto;">not</strong> consecutive.</li>
</ul>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [2,2,2,2,2], k = 4</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[-1,-1]</span></p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [3,2,3,2,3,2], k = 2</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[-1,3,-1,3,-1]</span></p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n == nums.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n</code></li>
</ul>
</div>