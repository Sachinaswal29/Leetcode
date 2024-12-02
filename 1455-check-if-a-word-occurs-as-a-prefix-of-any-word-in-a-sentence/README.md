<h2><a href="https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/">1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">sentence</code> that consists of some words separated by a <strong style="user-select: auto;">single space</strong>, and a <code style="user-select: auto;">searchWord</code>, check if <code style="user-select: auto;">searchWord</code> is a prefix of any word in <code style="user-select: auto;">sentence</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the index of the word in </em><code style="user-select: auto;">sentence</code><em style="user-select: auto;"> (<strong style="user-select: auto;">1-indexed</strong>) where </em><code style="user-select: auto;">searchWord</code><em style="user-select: auto;"> is a prefix of this word</em>. If <code style="user-select: auto;">searchWord</code> is a prefix of more than one word, return the index of the first word <strong style="user-select: auto;">(minimum index)</strong>. If there is no such word return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">prefix</strong> of a string <code style="user-select: auto;">s</code> is any leading contiguous substring of <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentence = "i love eating burger", searchWord = "burg"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> "burg" is prefix of "burger" which is the 4th word in the sentence.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentence = "this problem is an easy problem", searchWord = "pro"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentence = "i am tired", searchWord = "you"
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> "you" is not a prefix of any word in the sentence.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sentence.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= searchWord.length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentence</code> consists of lowercase English letters and spaces.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">searchWord</code> consists of lowercase English letters.</li>
</ul>
</div>