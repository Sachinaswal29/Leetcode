<h2><a href="https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/">2981. Find Longest Special Substring That Occurs Thrice I</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> that consists of lowercase English letters.</p>

<p style="user-select: auto;">A string is called <strong style="user-select: auto;">special</strong> if it is made up of only a single character. For example, the string <code style="user-select: auto;">"abc"</code> is not special, whereas the strings <code style="user-select: auto;">"ddd"</code>, <code style="user-select: auto;">"zz"</code>, and <code style="user-select: auto;">"f"</code> are special.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest special substring</strong> of </em><code style="user-select: auto;">s</code> <em style="user-select: auto;">which occurs <strong style="user-select: auto;">at least thrice</strong></em>, <em style="user-select: auto;">or </em><code style="user-select: auto;">-1</code><em style="user-select: auto;"> if no special substring occurs at least thrice</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous <strong style="user-select: auto;">non-empty</strong> sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aaaa"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The longest special substring which occurs thrice is "aa": substrings "<u style="user-select: auto;"><strong style="user-select: auto;">aa</strong></u>aa", "a<u style="user-select: auto;"><strong style="user-select: auto;">aa</strong></u>a", and "aa<u style="user-select: auto;"><strong style="user-select: auto;">aa</strong></u>".
It can be shown that the maximum length achievable is 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcdef"
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There exists no special substring which occurs at least thrice. Hence return -1.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcaba"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The longest special substring which occurs thrice is "a": substrings "<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>bcaba", "abc<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>ba", and "abcab<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>".
It can be shown that the maximum length achievable is 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= s.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only lowercase English letters.</li>
</ul>
</div>