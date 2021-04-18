
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
