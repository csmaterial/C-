

 
![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/1.png)
![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/2.png)


以二分查找法为例
对于有序数列才能使用二分查找法
1.	用l和r来设定边界；l= 0，r = n-1；//在[l,…r]的范围里寻找target
2.	While( l < = r) //当l ==r 时，区间[l，r]依然有效
3.	当target>arr[mid]时，对于l = mid+1；//target在[mid+1,r]中

原则：固定原则：

1.	明确变量的含义。
2.	循环不变量（更新数值，维护含义）
3.	小数据量调试
4.	大数据量测试

Leetcode 283
给定一个数组nums，写一个函数，将数组所有0挪到数组的末尾，维持其他非零元素的相对位置。
思路1：读取数组，非零元素存储到数组a中，将数组a的后面加上零。
时间复杂度和空间复杂度均为O（n）
改进思路1：设定一个指针，当读取到非零元素时，将该元素放在当前指针位置，指针向前一位。当无非零元素时，指针后的元素均设为零。
改进思路2：设定一个指针，当读取到非零元素时，将该元素和当前指针位置互换位置，指针向前一位。继续向后读取，直至读取到结尾。

27 Remove Element
提问，明确问题，如何定义删除？剩余元素排列是否要保证原有顺序？是否有空间复杂度要求？
26 对数组中元素去重，使得原数组的每个元素只有一个


75 sort colors 给定一个有n元素数组，取值只有0，1，2，为数组排序。
计数排序：分别统计0，1，2元素个数

能否仅遍历一次？
改进思路1：三路快排，定义好零区（左为0，右为zero位置）一区（左为zero，右为i位置）二区（左为two，右为n-1位置）


167. two sum
给定有序整型数组和一个整数target，在其中寻找两个元素，使其和为target，返回这两个数的索引。
如果无解怎么办？如果有多个解怎么办？
最简单：暴力解法，双层遍历，O（n2）
缺点：没有利用有序
补充：利用二分搜索。查找target – nums[i]  O（nlogn）
 ![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/3.png)

I++
 ![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/4.png)

j—
 改进思路：对撞指针，两路快排。
回文，同样可以用类似对撞指针

11题，


双索引技术（滑动窗口）
子数组：数组中可以不连续的数组
暴力解：遍历所有连续子数组，计算其和sum，验证sum>=s，O(n2)包含大量重复计算
优化：
 ![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/5.png)

当数组和不足，j向右，当数组和过大，i向右。

在此过程中，我们一直保持着一个窗口，即为滑动窗口
Nums[l..r]

3.字符串中找到无重复字母的最长字串
（ANSCII码为256个）

438 Find all anagram
 ![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/6.png)
![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/7.png)

查找问题：
 
 ![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/8.png)
![数组程序如何正确写出](https://github.com/csmaterial/phototest/blob/master/photo/9.png)


349 Intersection of two arrays
Set中不存重复元素，故多次insert相同元素依然只存在一个元素。

Set读取每个元素,并存入vector的方法：
for( set<int>::iterator iter = Set.begin() ; iter != Set.end() ; iter ++ )
	vector.push_back( *iter ) ;

350 给定两个数组nums，求两个数组的交集。出现顺序可任意，而出现的次数需记录
Map：

