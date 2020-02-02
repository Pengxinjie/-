# Markdown Grammar
## Part One
### 1.语法之标题  
	# 一级标题
	## 二级标题
	### 三级标题
	###.. 以此类推
	小坑：注意井号和标题名中需要空格!  
***效果：***
# 一级标题
## 二级标题
### 三级标题
---  

**一级标题的等价写法：**  

	一级标题:  
	===  
**二级标题的等价写法：**  

	二级标题：
	---。
上述两种不建议使用。  

### 2.语法之段落
	如何换行？
	行末加两个空格：space+space+enter.
---
### 3.语法之强调  
	- 斜体 			*强调*
	- 粗体 			**强调**
	- 斜体+粗体 	 	***强调***
	上述三种中的*可用_替代。
	- 删除线 	 	~~删除线~~  
***效果：***  
- 斜体 			*强调*
- 粗体 			**强调**
- 斜体+粗体 	 	***强调***  
上述三种中的*可用_替代。
- 删除线 	 	~~删除线~~ 
---
### 4.列表
	无序列表
	List_1:(*可用-替代)
	 * 无序
	 * 列表  
	
	有序列表
	List_2:（会自动重排）  
	1. 有序  
	3. 列表
	2. 演示	  
	多级列表
	List_3:（每次缩进两个空格）
	- 一级
	  - 二级
	    - 三级
## Part Two
### 1.语法之链接
**①.内嵌式链接**  
  
    - 外部链接：[链接名称](链接地址)  

	- 内部链接：  
	 - 1.链接本文档的其他部分：eg.[Part-one](#part-one)  
	 - 2.在同一目录下的其他文件：[链接名](相对路径)  

**②.引用式链接**  
	
	外部链接：
	- 1.[链接名]
	...
	文末：[链接名]:链接地址
	- 2.[链接名](别名)
	...
	文末：[别名]:链接地址  
	
	内部链接：
	处理方式同内部链接
**③.图片链接**  

	内嵌式
	外部图片  
	格式：![图片内容描述，图像无法显示时出现](图片地址 "置于图片上的文本")
	内部图片  
	格式：![可缺省](images/Neymar.jpg "内马尔")  
  
    引用式
	格式：![图片内容描述][别名]
	...
	文末：[别名]:外部链接 or 相对路径
---
### 2.语法之引用  

	>这是一段引用  
	>>这是嵌套引用
	>>>这是三层引用
***效果：***
>这是一段引用  
>>这是嵌套引用
>>>这是三层引用
---
### 2.语法之代码块  
	- 行内代码
	是这样声明变量的`int a;`  
***效果：***  
是这样声明变量的`int a;`  

	- 块式代码（另一种写法：每行前+4空格）
	```java(这里放代码类型)
	int a;
	System.out.print("HiWorld!")
	```
***效果：***  
```java
int a;
System.out.print("HiWorld!")
```

---
### 3.语法之分割线  
	1.---
	2.***
	3.___(这是三个下划线)
	注意哦，都是英文的符号。
***效果：***  
***
---
___  

### 4.语法之嵌入HTML代码
	1.文字居中
	<p align='center'>HelloWorld!</p>  
***效果：***
<p align='center'>HelloWorld!</p>  
	  
	2.块注释  
	<!--
	这些文字会被忽略。
	-->
	  
	3.表格
	制表(表格内容各种语法依然适用，也能装图片)
	(:控制对齐方式，第一行表头，第二行起分割作用)
	|姓名 |力量 |盘带 |  
	|:---:|:---:|:---:|  
	| ***njr*** | 65 | 98 |  
	|***messi***| 58|99|  
***效果：***  

|姓名 |力量 |盘带 |  
|:---|:---|:---|  
| ***njr*** | 65 | 98 |  
|***messi***| 58|99|  

## Part Three  
### GFM(Github Flavored Markdown)
***大白话：github版本的markdown***

	1.Task list(填上x效果其实是打上√)  
	- [e] item_1
	- [ ] item_2
	- [x] item_3  
***效果：***  
Task list  
- [x] item_1  
- [ ] item_2  
- [x] item_3  


	2.emoji(有趣的东西来了)
	格式：       :表情名:
	eg.  :smile::cry::laugh:  
***效果：***  
:smile::cry::laugh:
