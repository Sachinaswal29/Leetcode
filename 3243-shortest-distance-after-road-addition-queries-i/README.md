<h2><a href="https://leetcode.com/problems/shortest-distance-after-road-addition-queries-i/">3243. Shortest Distance After Road Addition Queries I</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">n</code> and a 2D integer array <code style="user-select: auto;">queries</code>.</p>

<p style="user-select: auto;">There are <code style="user-select: auto;">n</code> cities numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. Initially, there is a <strong style="user-select: auto;">unidirectional</strong> road from city <code style="user-select: auto;">i</code> to city <code style="user-select: auto;">i + 1</code> for all <code style="user-select: auto;">0 &lt;= i &lt; n - 1</code>.</p>

<p style="user-select: auto;"><code style="user-select: auto;">queries[i] = [u<sub style="user-select: auto;">i</sub>, v<sub style="user-select: auto;">i</sub>]</code> represents the addition of a new <strong style="user-select: auto;">unidirectional</strong> road from city <code style="user-select: auto;">u<sub style="user-select: auto;">i</sub></code> to city <code style="user-select: auto;">v<sub style="user-select: auto;">i</sub></code>. After each query, you need to find the <strong style="user-select: auto;">length</strong> of the <strong style="user-select: auto;">shortest path</strong> from city <code style="user-select: auto;">0</code> to city <code style="user-select: auto;">n - 1</code>.</p>

<p style="user-select: auto;">Return an array <code style="user-select: auto;">answer</code> where for each <code style="user-select: auto;">i</code> in the range <code style="user-select: auto;">[0, queries.length - 1]</code>, <code style="user-select: auto;">answer[i]</code> is the <em style="user-select: auto;">length of the shortest path</em> from city <code style="user-select: auto;">0</code> to city <code style="user-select: auto;">n - 1</code> after processing the <strong style="user-select: auto;">first </strong><code style="user-select: auto;">i + 1</code> queries.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">n = 5, queries = [[2,4],[0,2],[0,4]]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[3,2,1]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation: </strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2024/06/28/image8.jpg" style="width: 350px; height: 60px; user-select: auto;"></p>

<p style="user-select: auto;">After the addition of the road from 2 to 4, the length of the shortest path from 0 to 4 is 3.</p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2024/06/28/image9.jpg" style="width: 350px; height: 60px; user-select: auto;"></p>

<p style="user-select: auto;">After the addition of the road from 0 to 2, the length of the shortest path from 0 to 4 is 2.</p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2024/06/28/image10.jpg" style="width: 350px; height: 96px; user-select: auto;"></p>

<p style="user-select: auto;">After the addition of the road from 0 to 4, the length of the shortest path from 0 to 4 is 1.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">n = 4, queries = [[0,3],[0,2]]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[1,1]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2024/06/28/image11.jpg" style="width: 300px; height: 70px; user-select: auto;"></p>

<p style="user-select: auto;">After the addition of the road from 0 to 3, the length of the shortest path from 0 to 3 is 1.</p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2024/06/28/image12.jpg" style="width: 300px; height: 70px; user-select: auto;"></p>

<p style="user-select: auto;">After the addition of the road from 0 to 2, the length of the shortest path remains 1.</p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= queries[i][0] &lt; queries[i][1] &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt; queries[i][1] - queries[i][0]</code></li>
	<li style="user-select: auto;">There are no repeated roads among the queries.</li>
</ul>
</div>