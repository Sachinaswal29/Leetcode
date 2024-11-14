<h2><a href="https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/">2064. Minimized Maximum of Products Distributed to Any Store</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">n</code> indicating there are <code style="user-select: auto;">n</code> specialty retail stores. There are <code style="user-select: auto;">m</code> product types of varying amounts, which are given as a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">quantities</code>, where <code style="user-select: auto;">quantities[i]</code> represents the number of products of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> product type.</p>

<p style="user-select: auto;">You need to distribute <strong style="user-select: auto;">all products</strong> to the retail stores following these rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">A store can only be given <strong style="user-select: auto;">at most one product type</strong> but can be given <strong style="user-select: auto;">any</strong> amount of it.</li>
	<li style="user-select: auto;">After distribution, each store will have been given some number of products (possibly <code style="user-select: auto;">0</code>). Let <code style="user-select: auto;">x</code> represent the maximum number of products given to any store. You want <code style="user-select: auto;">x</code> to be as small as possible, i.e., you want to <strong style="user-select: auto;">minimize</strong> the <strong style="user-select: auto;">maximum</strong> number of products that are given to any store.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum possible</em> <code style="user-select: auto;">x</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, quantities = [11,6]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> One optimal way is:
- The 11 products of type 0 are distributed to the first four stores in these amounts: 2, 3, 3, 3
- The 6 products of type 1 are distributed to the other two stores in these amounts: 3, 3
The maximum number of products given to any store is max(2, 3, 3, 3, 3, 3) = 3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, quantities = [15,10,10]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> One optimal way is:
- The 15 products of type 0 are distributed to the first three stores in these amounts: 5, 5, 5
- The 10 products of type 1 are distributed to the next two stores in these amounts: 5, 5
- The 10 products of type 2 are distributed to the last two stores in these amounts: 5, 5
The maximum number of products given to any store is max(5, 5, 5, 5, 5, 5, 5) = 5.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, quantities = [100000]
<strong style="user-select: auto;">Output:</strong> 100000
<strong style="user-select: auto;">Explanation:</strong> The only optimal way is:
- The 100000 products of type 0 are distributed to the only store.
The maximum number of products given to any store is max(100000) = 100000.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == quantities.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= quantities[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>