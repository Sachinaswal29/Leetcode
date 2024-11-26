<h2><a href="https://leetcode.com/problems/find-champion-ii/">2924. Find Champion II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> teams numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> in a tournament; each team is also a node in a <strong style="user-select: auto;">DAG</strong>.</p>

<p style="user-select: auto;">You are given the integer <code style="user-select: auto;">n</code> and a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">edges</code> of length <code style="user-select: auto;"><font face="monospace" style="user-select: auto;">m</font></code> representing the <strong style="user-select: auto;">DAG</strong>, where <code style="user-select: auto;">edges[i] = [u<sub style="user-select: auto;">i</sub>, v<sub style="user-select: auto;">i</sub>]</code> indicates that there is a directed edge from team <code style="user-select: auto;">u<sub style="user-select: auto;">i</sub></code> to team <code style="user-select: auto;">v<sub style="user-select: auto;">i</sub></code> in the graph.</p>

<p style="user-select: auto;">A directed edge from <code style="user-select: auto;">a</code> to <code style="user-select: auto;">b</code> in the graph means that team <code style="user-select: auto;">a</code> is <strong style="user-select: auto;">stronger</strong> than team <code style="user-select: auto;">b</code> and team <code style="user-select: auto;">b</code> is <strong style="user-select: auto;">weaker</strong> than team <code style="user-select: auto;">a</code>.</p>

<p style="user-select: auto;">Team <code style="user-select: auto;">a</code> will be the <strong style="user-select: auto;">champion</strong> of the tournament if there is no team <code style="user-select: auto;">b</code> that is <strong style="user-select: auto;">stronger</strong> than team <code style="user-select: auto;">a</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the team that will be the <strong style="user-select: auto;">champion</strong> of the tournament if there is a <strong style="user-select: auto;">unique</strong> champion, otherwise, return </em><code style="user-select: auto;">-1</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Notes</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">A <strong style="user-select: auto;">cycle</strong> is a series of nodes <code style="user-select: auto;">a<sub style="user-select: auto;">1</sub>, a<sub style="user-select: auto;">2</sub>, ..., a<sub style="user-select: auto;">n</sub>, a<sub style="user-select: auto;">n+1</sub></code> such that node <code style="user-select: auto;">a<sub style="user-select: auto;">1</sub></code> is the same node as node <code style="user-select: auto;">a<sub style="user-select: auto;">n+1</sub></code>, the nodes <code style="user-select: auto;">a<sub style="user-select: auto;">1</sub>, a<sub style="user-select: auto;">2</sub>, ..., a<sub style="user-select: auto;">n</sub></code> are distinct, and there is a directed edge from the node <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> to node <code style="user-select: auto;">a<sub style="user-select: auto;">i+1</sub></code> for every <code style="user-select: auto;">i</code> in the range <code style="user-select: auto;">[1, n]</code>.</li>
	<li style="user-select: auto;">A <strong style="user-select: auto;">DAG</strong> is a directed graph that does not have any <strong style="user-select: auto;">cycle</strong>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img height="300" src="https://assets.leetcode.com/uploads/2023/10/19/graph-3.png" width="300" style="user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, edges = [[0,1],[1,2]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation: </strong>Team 1 is weaker than team 0. Team 2 is weaker than team 1. So the champion is team 0.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><img height="300" src="https://assets.leetcode.com/uploads/2023/10/19/graph-4.png" width="300" style="user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, edges = [[0,2],[1,3],[1,2]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> Team 2 is weaker than team 0 and team 1. Team 3 is weaker than team 1. But team 1 and team 0 are not weaker than any other teams. So the answer is -1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">m == edges.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= m &lt;= n * (n - 1) / 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= edge[i][j] &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i][0] != edges[i][1]</code></li>
	<li style="user-select: auto;">The input is generated such that if team <code style="user-select: auto;">a</code> is stronger than team <code style="user-select: auto;">b</code>, team <code style="user-select: auto;">b</code> is not stronger than team <code style="user-select: auto;">a</code>.</li>
	<li style="user-select: auto;">The input is generated such that if team <code style="user-select: auto;">a</code> is stronger than team <code style="user-select: auto;">b</code> and team <code style="user-select: auto;">b</code> is stronger than team <code style="user-select: auto;">c</code>, then team <code style="user-select: auto;">a</code> is stronger than team <code style="user-select: auto;">c</code>.</li>
</ul>
</div>