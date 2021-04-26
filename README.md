
## 对象

## 函数

### 函数的参数

```c++
void swap (string, string); // 对象（值）作为函数参数

void swap (string *, string *); // 对象指针作为函数参数

void swap (int[]); // 对象指针作为函数参数

void swap1 (string&, string&); // 引用作为函数参数

void _practiceDisplay (string, string = "", string = ""); // 为函数设置默认值

void _change(const string&); // 使用 const 保护数据
```
### 函数的返回值

```c++
int& _functionReturn(int); // 返回引用

float* _functionReturnInput(int& n); // 返回指针

string _functonReturnValue(const int); // 返回对象（值）

inline int isnumber(const char); // 内联函数
```

### 函数重载
```c++
double _max(double, double);
int _max(int, int);
int _max(int, int, int);
char _max(char, char);


// int _max(int, int = 0, int = 0) // 会报错
// 使用联默认参数，既不能对少于参数个数的函数进行重载
// 另外，仅有函数返回值不同也是区分不了重载函数
```

### 函数模版

语法1：
```c++
template <class T>
T functionName(function params) {
    // statement
}
```
语法2：
```c++
template <typename T>
T functionName(function params) {
    // statement
}
```

举例：
```c++
template <class T>
T _maxTemplate(T m1, T m2) {
    return (m1 > m2) ? m1 : m2;
}

template <typename  T>
T min(T m1, T m2) {
    return (m1 < m2) ? m1 : m2;
}

```

调用：
```
_maxTemplate('a', 'b')

min<float>(2.3, 3.3)
```

## 对象
### 面向对象的标记图（UML）
![UML类的标记图]("./images/UML类的标记图.png")
![UML对象的标记图]("./images/UML对象的标记图.png")

### 对象的结构和连接
1. 对象的关联关系
  - 对象结构是指对象之间的分类（继承）和组成（聚合）关系，统称为关联关系

2. 对象的连接
  - 对象之间的静态关系是通过对象属性之间的连接反映的，称为实例连接。
  - 对象行为之间的动态关系是通过对象行为（消息）之间的依赖关系表现的，称为消息连接
  - 实例连接和消息连接统称为连接
