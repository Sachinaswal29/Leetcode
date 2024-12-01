<h2><a href="https://leetcode.com/problems/check-if-n-and-its-double-exist/">1346. Check If N and Its Double Exist</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">arr</code> of integers, check if there exist two indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> such that :</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">i != j</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i, j &lt; arr.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr[i] == 2 * arr[j]</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [10,2,5,3]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,1,7,11]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no i and j that satisfy the conditions.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= arr.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">3</sup> &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">3</sup></code></li>
</ul>
</div>