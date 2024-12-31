<h2> 1143 51
2641. Cousins in Binary Tree II</h2><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, replace the value of each node in the tree with the <strong style="user-select: auto;">sum of all its cousins' values</strong>.</p>

<p style="user-select: auto;">Two nodes of a binary tree are <strong style="user-select: auto;">cousins</strong> if they have the same depth with different parents.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the </em><code style="user-select: auto;">root</code><em style="user-select: auto;"> of the modified tree</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that the depth of a node is the number of edges in the path from the root node to it.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2023/01/11/example11.png" style="width: 571px; height: 151px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [5,4,9,1,10,null,7]
<strong style="user-select: auto;">Output:</strong> [0,0,0,7,7,null,11]
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
- Node with value 5 does not have any cousins so its sum is 0.
- Node with value 4 does not have any cousins so its sum is 0.
- Node with value 9 does not have any cousins so its sum is 0.
- Node with value 1 has a cousin with value 7 so its sum is 7.
- Node with value 10 has a cousin with value 7 so its sum is 7.
- Node with value 7 has cousins with values 1 and 10 so its sum is 11.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2023/01/11/diagram33.png" style="width: 481px; height: 91px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [3,1,2]
<strong style="user-select: auto;">Output:</strong> [0,0,0]
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
- Node with value 3 does not have any cousins so its sum is 0.
- Node with value 1 does not have any cousins so its sum is 0.
- Node with value 2 does not have any cousins so its sum is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">5</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>