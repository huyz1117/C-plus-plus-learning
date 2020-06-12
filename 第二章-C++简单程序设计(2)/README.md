# 第2章 C++简单程序设计（二）

## 选择结构

### if 语句

- 语法形式：
  - `if (表达式) 语句`，如`if (x > y) cout x;`
  - `if`后面表达式一定要加括号

### switch语句

- 有多个选择分支，使用`if`语句太麻烦，

- 如果都没有匹配上，则实行`default`语句

## 循环结构

### while语句

### do while

- 先做第一次循环，然后在判断条件

### for语句

- `for(初始语句;表达式1;表达式2)语句` 
- 初始语句：循环前先求解
- 表达式1：为true时执行循环体
- 表达式2：每次执行完循环体后求解

### 自定义类型

- 类型别名：为已有类型另外命名
  - `typedef 已有类型名 新类型名表`
  - `using 新类型名 = 已有类型名`

-  **枚举类型**（自定义类型）
  
  - 语法形式：`enum 枚举类型名 {变量值列表}`
  - `enum Weekday {SUN, MON, TUE, WED, THU, FRI, SAT}`
  - 默认情况下：`SUN=0, MON=1, ..., SAT=6`
  - 也可以在声明时另行指定枚举元素的值，如：`enum Weekday {SUN=7, MON=1, TUE, WED, THU, FRI, SAT}`
  - 枚举值可以进行关系运算
  
- `auto`类型与`decltype`类型

  - `auto`：编译器通过初始值自动推断变量的类型，如：`auto val = val1 + val2`
    - 如果`val1 + val2`是`int`类型，则`val`是`int`类型
    - 如果`val1 + val2`是`double`类型，则`val`是`double`类型

  - `decltype`：定义一个变量与某一表达式类型相同，但并不用该表达式初始化变量，如`decltype(i) j = 2`
    - 表示`j`以2作为初始值，类型与`i`一致