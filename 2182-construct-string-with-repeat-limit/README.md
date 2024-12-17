<h2><a href="https://leetcode.com/problems/construct-string-with-repeat-limit/">2182. Construct String With Repeat Limit</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> and an integer <code style="user-select: auto;">repeatLimit</code>. Construct a new string <code style="user-select: auto;">repeatLimitedString</code> using the characters of <code style="user-select: auto;">s</code> such that no letter appears <strong style="user-select: auto;">more than</strong> <code style="user-select: auto;">repeatLimit</code> times <strong style="user-select: auto;">in a row</strong>. You do <strong style="user-select: auto;">not</strong> have to use all characters from <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">lexicographically largest</strong> </em><code style="user-select: auto;">repeatLimitedString</code> <em style="user-select: auto;">possible</em>.</p>

<p style="user-select: auto;">A string <code style="user-select: auto;">a</code> is <strong style="user-select: auto;">lexicographically larger</strong> than a string <code style="user-select: auto;">b</code> if in the first position where <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> differ, string <code style="user-select: auto;">a</code> has a letter that appears later in the alphabet than the corresponding letter in <code style="user-select: auto;">b</code>. If the first <code style="user-select: auto;">min(a.length, b.length)</code> characters do not differ, then the longer string is the lexicographically larger one.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "cczazcc", repeatLimit = 3
<strong style="user-select: auto;">Output:</strong> "zzcccac"
<strong style="user-select: auto;">Explanation:</strong> We use all of the characters from s to construct the repeatLimitedString "zzcccac".
The letter 'a' appears at most 1 time in a row.
The letter 'c' appears at most 3 times in a row.
The letter 'z' appears at most 2 times in a row.
Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.
The string is the lexicographically largest repeatLimitedString possible so we return "zzcccac".
Note that the string "zzcccca" is lexicographically larger but the letter 'c' appears more than 3 times in a row, so it is not a valid repeatLimitedString.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aababab", repeatLimit = 2
<strong style="user-select: auto;">Output:</strong> "bbabaa"
<strong style="user-select: auto;">Explanation:</strong> We use only some of the characters from s to construct the repeatLimitedString "bbabaa". 
The letter 'a' appears at most 2 times in a row.
The letter 'b' appears at most 2 times in a row.
Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.
The string is the lexicographically largest repeatLimitedString possible so we return "bbabaa".
Note that the string "bbabaaa" is lexicographically larger but the letter 'a' appears more than 2 times in a row, so it is not a valid repeatLimitedString.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= repeatLimit &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>