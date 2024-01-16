# C++11__uniform initialization(一致性初始化)
# C++11__initializer_list(初值列)
### C++11引入了一致性初始化，面对任何初始化动作，都可以使用相同语法，即使用大括号初始化。
### int a{};int b={7.5};int* c={},int d[3]{1,2,3};//a=0,b=7,c=nullptr,d[0]=1,d[1]=2,d[2]=3;
### 为了支持“用户自定义类型初始列”，C++11提供了 class temple std::initializer_list<>，用来支持一系列值的初始化。
### initializer_list<int>提供了begin()和end()方法，可以用于迭代器的初始化。 

