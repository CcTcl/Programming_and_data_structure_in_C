# Lab 3-1 结构体定义、地址传参和最大最小

  学生期末成绩的信息包括Name和 Chinese, Math, English, Physics, Chemistry五个科目的成绩。试定义一个结构体管理学生成绩，打印输出所有学生中总成绩的最高分和最低分，以及各单科成绩的最高分和最低分，要求如下：
 1. 在main函数中定义（自定义类型）数组，要求只能使用一个数组；
 2. 通过传地址方式调用函数，从键盘输入学生信息或随机产生信息；
 3. 修改课件上三种方法对应的minMax函数，以传值方式传入科目信息，使之能够正确计算各个单科成绩的最低和最高成绩；
 4. 输出格式, 其中蓝色部分作为可选输出学生姓名：

| Subject | max | Name(Optimal) | min | Name(Optimal) |
| :-----: | :-: | :-----------: | :-: | :-----------: |
| Chinese | max: 98 | Zhangsan | min: 63 |Wangwu |
| Math | max: 100 | Lisi | min: 65 | Dalin |
| English | max: 99 | Liuda | min: 90 | Fengda |
| Physics | max: 99 | Liuda | min: 90 | Liuda |
| Chemistry | max: 99 | Liuda | min: 90 | Liuda |
| Total | max: 99 | Liuda | min: 90 | Liuda |

# Lab 3-2  抽象数据类型

实现复数的抽象数据类型，要求支持复数的+,-,\*,/运算和打印功能，要求：
1. 在`complex.h`中定义复数类型和接口；
2. 在`complex.c`或`complex.cpp`中实现所有接口；
3. 在`main.c`或`main.cpp`中通过`#include <complex.h>`引入复数抽象数据类型并使用；
4. 程序要求打印信息如下：
```
Complex a= 1+2i
Complex b = 3+4i
Complex a+b = 4+6i
Complex a-b = -2-2i
Complex a*b = -5+10i
Complex a/b = 1.8+0.4i
```

# Lab 3-3 栈

用数组实现栈，并利用栈实现一个应用。

栈实现要求：
1. 在`mystack.h`中定义栈及其接口；
2. 在`mystack.cpp`中实现所有接口；

## 应用一
恰当使用mystack.h，从键盘输入带括弧的表达式，判断括弧是否配对
```
(3*(2+5)+4)*3   yes
(3*(2+5)+4*3    no
```

## 应用二
恰当使用mystack.h,从键盘输入十进制整数，输出其八进制表示
```
3421 = 6535o
```
## 应用三
恰当使用mystack.h,从键盘输入带括弧的表达式，输出其后缀表达式和值
```
(1+2)*(3-4)    1 2 + 3 4 - *    -3
```
