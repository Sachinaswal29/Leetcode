<h2><a href="https://leetcode.com/problems/most-beautiful-item-for-each-query/">2070. Most Beautiful Item for Each Query</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">items</code> where <code style="user-select: auto;">items[i] = [price<sub style="user-select: auto;">i</sub>, beauty<sub style="user-select: auto;">i</sub>]</code> denotes the <strong style="user-select: auto;">price</strong> and <strong style="user-select: auto;">beauty</strong> of an item respectively.</p>

<p style="user-select: auto;">You are also given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">queries</code>. For each <code style="user-select: auto;">queries[j]</code>, you want to determine the <strong style="user-select: auto;">maximum beauty</strong> of an item whose <strong style="user-select: auto;">price</strong> is <strong style="user-select: auto;">less than or equal</strong> to <code style="user-select: auto;">queries[j]</code>. If no such item exists, then the answer to this query is <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> of the same length as </em><code style="user-select: auto;">queries</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">answer[j]</code><em style="user-select: auto;"> is the answer to the </em><code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> query</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> items = [[1,2],[3,2],[2,4],[5,6],[3,5]], queries = [1,2,3,4,5,6]
<strong style="user-select: auto;">Output:</strong> [2,4,5,5,6,6]
<strong style="user-select: auto;">Explanation:</strong>
- For queries[0]=1, [1,2] is the only item which has price &lt;= 1. Hence, the answer for this query is 2.
- For queries[1]=2, the items which can be considered are [1,2] and [2,4]. 
  The maximum beauty among them is 4.
- For queries[2]=3 and queries[3]=4, the items which can be considered are [1,2], [3,2], [2,4], and [3,5].
  The maximum beauty among them is 5.
- For queries[4]=5 and queries[5]=6, all items can be considered.
  Hence, the answer for them is the maximum beauty of all items, i.e., 6.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> items = [[1,2],[1,2],[1,3],[1,4]], queries = [1]
<strong style="user-select: auto;">Output:</strong> [4]
<strong style="user-select: auto;">Explanation:</strong> 
The price of every item is equal to 1, so we choose the item with the maximum beauty 4. 
Note that multiple items can have the same price and/or beauty.  
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> items = [[10,1000]], queries = [5]
<strong style="user-select: auto;">Output:</strong> [0]
<strong style="user-select: auto;">Explanation:</strong>
No item has a price less than or equal to 5, so no item can be chosen.
Hence, the answer to the query is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= items.length, queries.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">items[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= price<sub style="user-select: auto;">i</sub>, beauty<sub style="user-select: auto;">i</sub>, queries[j] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>