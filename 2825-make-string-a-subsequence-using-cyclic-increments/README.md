<h2><a href="https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/">2825. Make String a Subsequence Using Cyclic Increments</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two <strong style="user-select: auto;">0-indexed</strong> strings <code style="user-select: auto;">str1</code> and <code style="user-select: auto;">str2</code>.</p>

<p style="user-select: auto;">In an operation, you select a <strong style="user-select: auto;">set</strong> of indices in <code style="user-select: auto;">str1</code>, and for each index <code style="user-select: auto;">i</code> in the set, increment <code style="user-select: auto;">str1[i]</code> to the next character <strong style="user-select: auto;">cyclically</strong>. That is <code style="user-select: auto;">'a'</code> becomes <code style="user-select: auto;">'b'</code>, <code style="user-select: auto;">'b'</code> becomes <code style="user-select: auto;">'c'</code>, and so on, and <code style="user-select: auto;">'z'</code> becomes <code style="user-select: auto;">'a'</code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible to make </em><code style="user-select: auto;">str2</code> <em style="user-select: auto;">a subsequence of </em><code style="user-select: auto;">str1</code> <em style="user-select: auto;">by performing the operation <strong style="user-select: auto;">at most once</strong></em>, <em style="user-select: auto;">and</em> <code style="user-select: auto;">false</code> <em style="user-select: auto;">otherwise</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> A subsequence of a string is a new string that is formed from the original string by deleting some (possibly none) of the characters without disturbing the relative positions of the remaining characters.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "abc", str2 = "ad"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Select index 2 in str1.
Increment str1[2] to become 'd'. 
Hence, str1 becomes "abd" and str2 is now a subsequence. Therefore, true is returned.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "zc", str2 = "ad"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Select indices 0 and 1 in str1. 
Increment str1[0] to become 'a'. 
Increment str1[1] to become 'd'. 
Hence, str1 becomes "ad" and str2 is now a subsequence. Therefore, true is returned.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "ab", str2 = "d"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> In this example, it can be shown that it is impossible to make str2 a subsequence of str1 using the operation at most once. 
Therefore, false is returned.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= str1.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= str2.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">str1</code> and <code style="user-select: auto;">str2</code> consist of only lowercase English letters.</li>
</ul>
</div>