
# 顺序容器

* vector: 可变大小数组
  * 优势：支持随机访问，尾部快速插入
  * 缺点：除尾部外插入/删除元素很慢
* deque：双端队列
  * 优势：支持随机访问，头部/尾部快速插入
* list：双端链表
  * 优势：任何位置快速插入、删除
  * 缺点：只支持双向顺序访问
* array：链表
  * 优势：任何位置快速插入、删除
  * 缺点：只支持单向顺序访问

**任何情况下应尽可能使用vector**

## 容器操作

```cpp
# 构造函数
C c;   
C c1(c2);           构造c2的拷贝c1
C c(b, e);          将迭代器b、e之间拷贝
C c{a, b, c};       列表初始化

# 大小
c.size()            c中元素数目
c.max_size()
c.empty()           若c非空返回false

# 获取迭代器
c.begin() c.end()
c.cbegin() c.cend()  返回const iter
c.rbegin() c.rend()  返回逆序iter

# 访问元素
c.back()              返回c末元素的引用
c.front()             返回c首元素的引用
c[n]                  返回下标为n元素的引用
c.at(n)               同上
```

## string

**数值转换**

```cpp
# int2string
to_string(val)

# string2int
stoi(s, p, b)           s string, p size_t指针, b 转换基数
stol(s, p, b)           long
stoul(s, p, b)          unsigned long
stoll(s, p, b)          long long

# string2float
stof(s, p)              float
stod(s, p)              double
stold(s, p)             long double            

```

## 容器适配器adaptor

标准库定义了三种顺序容器适配器：stack, queue, priority_queue

> 适配器：一种机制，使某件事物的行为看起来像另外一件事
> stack适配器接受顺序容器，使其操作像stack一样

### stack
默认由deque构造，也可用list、vector构造

```cpp
# 初始化
stack<int> s;
stack<string, vector<string>> s;


# 栈操作
s.pop();                  删除栈顶元素，不返回
s.push(item);             创建新元素压入栈顶
s.emplace(args);          由args构造
s.top();                  返回栈顶元素，不弹出
```

### queue/priority_queue
queue默认由deque（list、vector）实现，priority_queue默认由vector（deque）实现。
```cpp
# 初始化
stack<int> s;
stack<string, vector<string>> s;


# 队列操作
q.push(item);              创建新元素压入栈顶
q.pop();                   删除queue首元素，不返回

q.front();                 返回头元素，不弹出
q.back();                  返回末尾元素，不弹出

q.top();                   返回最高优先级元素，只适用于priority_queue
```










