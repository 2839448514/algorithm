# C++11__nullptr   
### C和C++中的NULL却不等价。NULL表示指针不指向任何对象，但是问题在于，NULL不是关键字，而只是一个宏定义(macro)。
### 在C中，NULL是一个宏定义，将NULL定义为void*指针值0。  #define NULL (void*)0  
### 在C++中，nullptr是一个关键字，nullptr表示一个空指针，它是一个常量表达式，而不是一个宏定义。
### nullptr在C++11中被引入，用于代替NULL。
=================================================
## nullptr用来表示一个pointer指向的所谓的no value（不同于拥有不确定的值）。
## nullptr会被转换为各种的pointer类型，比如int*，char*，double*等。但不会被转换为任何整数类型。