
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
