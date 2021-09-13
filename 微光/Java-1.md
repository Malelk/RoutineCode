# Java-01：简单的入门
>之前没接触过Java，今天晚上简单接触了一下= =  可能有不对的地方请指正  
>鞠躬了捏^ ^

这是[我的学习笔记](https://www.cnblogs.com/lizinuo/p/15253400.html) ~给博客加点流量~  
## 我遇到的一些困难
1. 我发现：比如我创建一个Hello.java,一开始能正常编译。把类的名字改了之后就报错。后来发现大概是类的名字必须和文件名一样？不懂。
2. 我的vscode一开始能正常使用javac和java等指令，后来突然不能用了，显示没有指令。但是cmd里面又是正常的。今天回寝室又突然能用了？太迷了
3. 在某OJ上试着用Java提交了一道题，一开始编译错误。后来试出来必须用`Main`当做名称
## 第一题
``` java
import java.util.Scanner; 
public class test {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int a = cin.nextInt();
        int ans = 0;
        for(int i = 1; i <= a; i++) {
            int cnt = 1;
            for(int j = 1;j <= i; j++) {
                cnt*=j;
            }
            ans+=cnt;
        }
        System.out.println(ans);
    }
}
```
### **CMD**截图  
![截图](https://images.cnblogs.com/cnblogs_com/lizinuo/2029033/o_210910153725QQ%E6%88%AA%E5%9B%BE20210910233507.png)
### 做题感想 
虽然前面导包和C语言各有不同，但是写到中间主体部分感觉Java和C差不多。~~就像回到家一样~~  
## 第二题
### 我发现的一些问题
- Java居然没有直接读入char的方法 比如~~nextChar~~
- 在输出时，如果a(第一个数字)和c（运算符号) 之间没有空格 ， 会输出a和c的ascll码之和......
- Java好像没有%运算
- 如果Scanner不关闭会被警告= = 
### 代码
``` Java
import java.util.*;
public class jisuanqi {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int a = cin.nextInt(); 
        String s = cin.next();
        char c = (char)s.charAt(0);
        int b = cin.nextInt();
        if(c == '+') {
            System.out.println(a+" "+c+" "+b+" "+"="+ (a+b));
        }
        if(c == '-') System.out.println(a+" "+c+" "+b+" "+"="+(a-b));
        if(c == '*') System.out.println(a+" "+c+" "+b+" "+"="+a*b);
        if(c == '/') 
            if(a*(a/b)!=a) System.out.println(a+" "+c+" "+b+" "+"="+a/b+"......"+(a-a*(a/b)));
            else System.out.println(a+" "+c+" "+b+" "+"="+a/b);
        if(c == '%') System.out.println(a+" "+c+" "+b+" "+"="+(a-a*(a/b)));
    }
}

```
### 运行截图
![](.\QQ截图20210911094516.png)
## 第三题
