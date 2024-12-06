<h2><a href="https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/">2554. Maximum Number of Integers to Choose From a Range I</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">banned</code> and two integers <code style="user-select: auto;">n</code> and <code style="user-select: auto;">maxSum</code>. You are choosing some number of integers following the below rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The chosen integers have to be in the range <code style="user-select: auto;">[1, n]</code>.</li>
	<li style="user-select: auto;">Each integer can be chosen <strong style="user-select: auto;">at most once</strong>.</li>
	<li style="user-select: auto;">The chosen integers should not be in the array <code style="user-select: auto;">banned</code>.</li>
	<li style="user-select: auto;">The sum of the chosen integers should not exceed <code style="user-select: auto;">maxSum</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of integers you can choose following the mentioned rules</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> banned = [1,6,5], n = 5, maxSum = 6
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> You can choose the integers 2 and 4.
2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> You cannot choose any integer while following the mentioned conditions.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> banned = [11], n = 7, maxSum = 50
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> You can choose the integers 1, 2, 3, 4, 5, 6, and 7.
They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= banned.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= banned[i], n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= maxSum &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>