<h2><a href="https://leetcode.com/problems/maximum-average-pass-ratio/">1792. Maximum Average Pass Ratio</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array <code style="user-select: auto;">classes</code>, where <code style="user-select: auto;">classes[i] = [pass<sub style="user-select: auto;">i</sub>, total<sub style="user-select: auto;">i</sub>]</code>. You know beforehand that in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> class, there are <code style="user-select: auto;">total<sub style="user-select: auto;">i</sub></code> total students, but only <code style="user-select: auto;">pass<sub style="user-select: auto;">i</sub></code> number of students will pass the exam.</p>

<p style="user-select: auto;">You are also given an integer <code style="user-select: auto;">extraStudents</code>. There are another <code style="user-select: auto;">extraStudents</code> brilliant students that are <strong style="user-select: auto;">guaranteed</strong> to pass the exam of any class they are assigned to. You want to assign each of the <code style="user-select: auto;">extraStudents</code> students to a class in a way that <strong style="user-select: auto;">maximizes</strong> the <strong style="user-select: auto;">average</strong> pass ratio across <strong style="user-select: auto;">all</strong> the classes.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">pass ratio</strong> of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The <strong style="user-select: auto;">average pass ratio</strong> is the sum of pass ratios of all the classes divided by the number of the classes.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> possible average pass ratio after assigning the </em><code style="user-select: auto;">extraStudents</code><em style="user-select: auto;"> students. </em>Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual answer will be accepted.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> classes = [[1,2],[3,5],[2,2]], <code style="user-select: auto;">extraStudents</code> = 2
<strong style="user-select: auto;">Output:</strong> 0.78333
<strong style="user-select: auto;">Explanation:</strong> You can assign the two extra students to the first class. The average pass ratio will be equal to (3/4 + 3/5 + 2/2) / 3 = 0.78333.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> classes = [[2,4],[3,9],[4,5],[2,10]], <code style="user-select: auto;">extraStudents</code> = 4
<strong style="user-select: auto;">Output:</strong> 0.53485
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= classes.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">classes[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= pass<sub style="user-select: auto;">i</sub> &lt;= total<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= extraStudents &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>