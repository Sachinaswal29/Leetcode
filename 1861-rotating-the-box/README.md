<h2><a href="https://leetcode.com/problems/rotating-the-box/">1861. Rotating the Box</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> matrix of characters <code style="user-select: auto;">box</code> representing a side-view of a box. Each cell of the box is one of the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">A stone <code style="user-select: auto;">'#'</code></li>
	<li style="user-select: auto;">A stationary obstacle <code style="user-select: auto;">'*'</code></li>
	<li style="user-select: auto;">Empty <code style="user-select: auto;">'.'</code></li>
</ul>

<p style="user-select: auto;">The box is rotated <strong style="user-select: auto;">90 degrees clockwise</strong>, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravity <strong style="user-select: auto;">does not</strong> affect the obstacles' positions, and the inertia from the box's rotation <strong style="user-select: auto;">does not </strong>affect the stones' horizontal positions.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that each stone in <code style="user-select: auto;">box</code> rests on an obstacle, another stone, or the bottom of the box.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an </em><code style="user-select: auto;">n x m</code><em style="user-select: auto;"> matrix representing the box after the rotation described above</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/rotatingtheboxleetcodewithstones.png" style="width: 300px; height: 150px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> box = [["#",".","#"]]
<strong style="user-select: auto;">Output:</strong> [["."],
&nbsp;        ["#"],
&nbsp;        ["#"]]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/rotatingtheboxleetcode2withstones.png" style="width: 375px; height: 195px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> box = [["#",".","*","."],
&nbsp;             ["#","#","*","."]]
<strong style="user-select: auto;">Output:</strong> [["#","."],
&nbsp;        ["#","#"],
&nbsp;        ["*","*"],
&nbsp;        [".","."]]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/rotatingtheboxleetcode3withstone.png" style="width: 400px; height: 218px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> box = [["#","#","*",".","*","."],
&nbsp;             ["#","#","#","*",".","."],
&nbsp;             ["#","#","#",".","#","."]]
<strong style="user-select: auto;">Output:</strong> [[".","#","#"],
&nbsp;        [".","#","#"],
&nbsp;        ["#","#","*"],
&nbsp;        ["#","*","."],
&nbsp;        ["#",".","*"],
&nbsp;        ["#",".","."]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == box.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == box[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">box[i][j]</code> is either <code style="user-select: auto;">'#'</code>, <code style="user-select: auto;">'*'</code>, or <code style="user-select: auto;">'.'</code>.</li>
</ul></div>