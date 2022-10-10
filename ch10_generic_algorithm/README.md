# Generic algorithm

泛型算法：算法通过迭代器实现，迭代器令算法不依赖于容器，算法运行于迭代器之上而不会执行容器操作，带来了一个惊讶但必要的假定：算法永远不会改变底层容器的大小。

泛型算法一般定义于 algorithm、numeric

## 只读算法
```Cpp
//find
vector<int> vec(10, 2);
auto result = find(vec.cbegin(), vec.cend(), val); // return an iteration

//count
int val = 1;
auto cont = count(vec.cbegin(), vec.cend(), val);

//accumulate
int a = accumulate(vec.cbegin(), vec.cend(), 0);
double a = accumulate(vec_dou.cbegin(), vec_dou.cend(), double(0));
string a = accumulate(vec_string.cbegin(), vec_string.cend(), string(""));

```

## 写元素的算法
```Cpp
// copy
int a1[] = {0, 1, 2, 3, 4};
int a2[sizeof(a1)/sizeof(*a1)];            // 与a1大小一样
auto ret = copy(begin(a1), end(a1), a2);   // 把a1的内容拷贝给a2
// ret指向a2尾元素之后的位置

// replace
// 将序列所有0替换成42
replace(v.begin(), v.end(), 0, 42);

//fill
fill(v.begin(), v.end(), 0);    // 将每个元素置为0
fill_n(v.begin(), v.size(), 0); // 将指定个数的元素置为0

//sort
sort(vec.begin(), vec.end()); 

//unique
// 将相邻的重复"消除"，不重复的排列在前面，返回一个指向不重复区域之后的一个迭代器
auto end_unique = unique(words.begin(), words.end());
```

## lambda （待填坑）