<h2><a href="https://leetcode.com/problems/defuse-the-bomb/">1652. Defuse the Bomb</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a bomb to defuse, and your time is running out! Your informer will provide you with a <strong style="user-select: auto;">circular</strong> array <code style="user-select: auto;">code</code>&nbsp;of length of <code style="user-select: auto;">n</code>&nbsp;and a key <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">To decrypt the code, you must replace every number. All the numbers are replaced <strong style="user-select: auto;">simultaneously</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If <code style="user-select: auto;">k &gt; 0</code>, replace the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> number with the sum of the <strong style="user-select: auto;">next</strong> <code style="user-select: auto;">k</code> numbers.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">k &lt; 0</code>, replace the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> number with the sum of the <strong style="user-select: auto;">previous</strong> <code style="user-select: auto;">k</code> numbers.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">k == 0</code>, replace the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> number with <code style="user-select: auto;">0</code>.</li>
</ul>

<p style="user-select: auto;">As <code style="user-select: auto;">code</code> is circular, the next element of <code style="user-select: auto;">code[n-1]</code> is <code style="user-select: auto;">code[0]</code>, and the previous element of <code style="user-select: auto;">code[0]</code> is <code style="user-select: auto;">code[n-1]</code>.</p>

<p style="user-select: auto;">Given the <strong style="user-select: auto;">circular</strong> array <code style="user-select: auto;">code</code> and an integer key <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the decrypted code to defuse the bomb</em>!</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> code = [5,7,1,4], k = 3
<strong style="user-select: auto;">Output:</strong> [12,10,16,13]
<strong style="user-select: auto;">Explanation:</strong> Each number is replaced by the sum of the next 3 numbers. The decrypted code is [7+1+4, 1+4+5, 4+5+7, 5+7+1]. Notice that the numbers wrap around.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> code = [1,2,3,4], k = 0
<strong style="user-select: auto;">Output:</strong> [0,0,0,0]
<strong style="user-select: auto;">Explanation:</strong> When k is zero, the numbers are replaced by 0. 
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> code = [2,4,9,3], k = -2
<strong style="user-select: auto;">Output:</strong> [12,5,6,13]
<strong style="user-select: auto;">Explanation:</strong> The decrypted code is [3+9, 2+3, 4+2, 9+4]. Notice that the numbers wrap around again. If k is negative, the sum is of the <strong style="user-select: auto;">previous</strong> numbers.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == code.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n&nbsp;&lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= code[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-(n - 1) &lt;= k &lt;= n - 1</code></li>
</ul>
</div>