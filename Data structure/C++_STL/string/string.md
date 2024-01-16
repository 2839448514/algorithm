# String(字符串格式的一个类)
### 1.构造函数
| 构造                                  | 说明                                                            |
| :------------------------------------ | :-------------------------------------------------------------- |
| string s;                             | 生成一个空字符串s                                               |
| string s(str) ;                       | 拷贝构造函数生成str的复制品                                     |
| string s(str, stridx);                | 将字符串str内"始于位置stridx"的部分当作字符串的初值             |
| string s(str, stridx, strlen) ;       | 将字符串str内"始于stridx且长度顶多strlen"的部分作为字符串的初值 |
| string s(cstr) ;                      | 将C字符串（以NULL结束）作为s的初值                              |
| string s(chars, chars_len) ;          | 将C字符串前chars_len个字符作为字符串s的初值。                   |
| string s(num, ‘c’) ;                  | 生成一个字符串，包含num个c字符                                  |
| string s(“value”);  string s=“value”; | 将s初始化为一个字符串字面值副本                                 |
| string s(begin, end);                 | 以区间begin/end(不包含end)内的字符作为字符串s的初值             |
| s.~string();                          | 销毁所有字符，释放内存                                          |
### 方法
| 方法                                        | 说明                                                                                                             |
| :------------------------------------------ | :--------------------------------------------------------------------------------------------------------------- |
| s.length();                                 | 返回字符串s的长度，即s中字符的个数                                                                               |
| s.find(char c);                             | 返回字符串s中字符c的第一次出现的位置，如果不存在则返回-1                                                         |
| s.find(char c, int pos);                    | 返回字符串s中字符c在从位置pos开始的字符串中第一次出现的位置，如果不存在则返回-1                                  |
| s.rfind(char c);                            | 返回字符串s中字符c的最后一次出现的位置，如果不存在则返回-1                                                       |
| s.rfind(char c, int pos);                   | 返回字符串s中字符c在从位置pos开始的字符串中最后一次出现的位置，如果不存在则返回-1                                |
| s.substr(int pos);                          | 返回字符串s中从位置pos开始的子字符串，不包含pos位置的字符                                                        |
| s.substr(int pos, int len);                 | 返回字符串s中从位置pos开始的子字符串，长度为len，不包含pos位置的字符                                             |
| s.append(str);                              | 将字符串str追加到字符串s的末尾，返回字符串s的引用                                                                |
| s.append(str, int pos, int len);            | 将字符串str中从位置pos开始的子字符串，长度为len，追加到字符串s的末尾，返回字符串s的引用                          |
| s.replace(str, str);                        | 将字符串str替换为字符串s中的子字符串，返回字符串s的引用                                                          |
| s.insert(int pos, str);                     | 将字符串str插入到字符串s中，从位置pos开始，返回字符串s的引用                                                     |
| s.insert(int pos, str, int pos2, int len);  | 将字符串str中从位置pos2开始的子字符串，长度为len，插入到字符串s中，从位置pos开始，返回字符串s的引用              |
| s.insert(int pos, char c);                  | 将字符c插入到字符串s中，从位置pos开始，返回字符串s的引用                                                         |
| s.insert(int pos, char c, int num);         | 将字符c插入到字符串s中，从位置pos开始，插入num个字符，返回字符串s的引用                                          |
| s.compare(str);                             |                                                                                                                  | 返回字符串s和str的比较结果。 |
| s.compare(str, int pos);                    | 返回字符串s和str的比较结果，从位置pos开始比较，如果s的前i个字符和str的前i个字符相等则返回0，否则返回1            |
| s.compare(str, int pos, int len);           | 返回字符串s和str的比较结果，从位置pos开始比较，长度为len，如果s的前i个字符和str的前i个字符相等则返回0，否则返回1 |
| s.compare(int pos, int len, str);           | 返回字符串s和str的比较结果，从位置pos开始比较，长度为len，如果s的前i个字符和str的前i个字符相等则返回0，否则返回1 |
| s.compare(int pos, int len, str, int pos2); | 返回字符串s和str的比较结果，从位置pos开始比较，长度为len，如果s的前i个字符和str的前i个字符相等则返回0，否则返回1 |
| s.c_str();                                  | 返回字符串s的C字符串，即指向s的指针，不包括末尾的NULL字符                                                        |
| s.c_str()[i]                                | 返回字符串s中第i个字符，即s.c_str()[i]，如果i大于s的长度则返回NULL字符                                           |


