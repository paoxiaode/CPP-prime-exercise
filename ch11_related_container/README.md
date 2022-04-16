# 关联容器

map 和 set的区别

* map 保存key-value对
* set 用于查询存在的值

关联容器的类型别名

```cpp
key_type             关键字类型
mapped_type          关键字关联的类型，只用于map
value_type           set:与key_type相同, map:pair<const key_type, mapped_type>
```

**添加元素**

```cpp
insert有两个版本
# set
set.insert(vec.begin(), vec.end())     接受一对iteration
set.insert({1, 2, 3})                  接受初始化列表
# map
map.insert({word, 1})
map.insert(make_pair(word, 1))
map.insert(pair(word, 1))

insert 返回值为pair<iteration, bool>
first成员指向对应元素，second成员表示是否插入成功
```

**删除元素**
```cpp
c.erase(key_value k)            删除关键字为k的元素，返回删除元素数量size_t
c.erase(iteration p)            删除迭代器p指定的元素，返回指向p之后的iter
c.erase(iter b, iter e)         删除迭代器b,e之间的元素
```

**map的下标操作**
```cpp
map&unordered_map
c[k]                             访问键值为k的元素，若k不在c中，则添加一个键值为k的元素并进行值初始化
// 如不想改变map，可以用find代替
c.at(k)                          访问键值为k的元素，若k不在c中，抛出异常
```

**访问元素**
```cpp
c.find(k)                        返回迭代器，指向第一个键值为k的元素
c.count(k)                       返回键值为k元素的数量
c.lower_bound(k)                 返回第一个关键字不小于k的元素的iter
c.upper_bound(k)                 返回第一个关键字大于k的元素的iter                
c.equal_range(k)                 返回iter pair，表示键值等于k的元素的范围
```