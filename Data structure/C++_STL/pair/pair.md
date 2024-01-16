# Pair(对组)
## 构造
| 构造                                                  |                               说明                               |
| :---------------------------------------------------- | :--------------------------------------------------------------: |
| pair();                                               |                默认构造函数，即创建空的 pair 对象                |
| pair (const first_type& a, const second_type& b)      |               直接使用 2 个元素初始化成 pair 对象                |
| template<class U, class V> pair (const pair<U,V>& pr) | 拷贝（复制）构造函数，即借助另一个 pair 对象，创建新的 pair 对象 |
| template<class U, class V> pair (pair<U,V>&& pr);     | 移动（移动）构造函数，即通过另一个 pair 对象，创建新的 pair 对象 |
| template<class U, class V> pair (U&& a, V&& b);       |                 使用右值引用参数，创建 pair 对象                 |
## 方法
| 方法                                                  |                               说明                               |
| :---------------------------------------------------- | :--------------------------------------------------------------: |
| first() const                                         |                  返回第一个元素的引用（const）                  |
| second() const                                        |                  返回第二个元素的引用（const）                  |

