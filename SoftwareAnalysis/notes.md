# Program Analysis

- termination有出口
- soundness不报假正
- completeness

## Dynamic Analysis

- unsound(may miss errors)-- False negatives

## Static Analysis

- incomplete(may report spurious errors) --False positives

### Invariant

- Invariant Analysis: 不管采取什么分支，变量的值不变/一些语句一定执行

### Control-flow graph

![1553053064633](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553053064633.png)

## Who needs program analysis

- Compilers
- Software Quality Tools: tester, debugger
- IDEs

# Testing

## Pre and post- condition

- Pre-condition: the condition assumed to hold before a function executed
- post-condition: the condition expected to hold after the execution of a function under the case that pre-condition holds
- ![1553065171647](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553065171647.png)

## approaches to measure the quality of test suite：如何衡量测试集的质量

### Code coverage

- 当前测试集下，代码被执行的比例

### Mutation analysis

![1553082091388](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553082091388.png)

- 改变一些代码，则在原先的测试集上，结果会产生错误

## Random testing -fuzzing

-  Testing = regular testing + random testing

- 给一只猴子足够的时间，他能在打字机上敲出莎士比亚的全文

- 从一些有规则地分布中获取输入
- 用这些随机生成的输入去测试，看程序是否崩掉或者出现异常
- 对安全、移动和并发测试很有效
- 是对系统性正规测试的补充，而不是替代
- **必须要从一个合理的分布里面得到输入**
- 对多层系统，可能效果并不好

### Categories of fuzzing

- Unix Program fuzz(U wisc):  fuzz on input

- MS Cuzz(fuzz on thread scheduler): automatically在每条语句前+sleep()

  - Bug Depth：找到Bug需要满足的语句顺序的约束数量:一般来说关注1、2层的bug depth就完全足够了
  - Probablisitic guarantee
  - ![1553147513192](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553147513192.png)

  - ![1553147532822](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553147532822.png)

## Systematic Testing - Korat

- Test-generation research

## Feedback-directed random testing- randoop

- Combine fuzzing and Korat



# Analysis

## Data-flow analysis!!!!并未理解透彻！！

### Control-flow graph

### chaotic iteration algorithm

- Static analysis reasoning about the flow of data in program- 
- always operate on a suitable intermediate representation of a program
- sacrifices completeness. 
- But guarantee sound: will report all facts that could occur in actual runs
- 即：错误一定会被报告，但报告出来的不一定是错误

## **Application of data-flow analysis**

- **Reaching Definition Analysis:达到性分析，寻找未初始化的变量**
  - Forward May analysis
- **Very Busy Expressions Analysis：JIT**
  - Backward Must analysis
- **Available Expressions Analysis：避免表达式的重新计算**
  - Forward Must analysis
- **Live Variables Analysis：更有效地分配寄存器**
  - Backward May analysis
- ！！！Overall pattern for 4 analysis:
  - ![1553659498754](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553659498754.png)
  - 

## Reaching Definition Analysis(RDA)

![1553594536893](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553594536893.png)

![1553594606552](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553594606552.png)

- Overall Pattern

![1553659169551](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553659169551.png)



## Very Busy Expression Analysis

- 之后一定会被用到的expr
- ![1553663840328](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553663840328.png)

![1553657492499](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553657492499.png)

## Available expression analysis

- **目的**：找到被所有path使用的expr（在其中的变量被改变之前)

![1553658571756](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553658571756.png)



![1553658062935](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553658062935.png)

## Live variable analysis

![1553658117135](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553658117135.png)

- 之后会用到的，并且没有在用到之前被重定义的

## Pointer Analysis

- May-Alias analysis = Pointer Analysis
- 也有must-alias analysis  但是应用范围不广
- 指针分析是不可决定的undecidable
- 我们要牺牲completeness来成全效果：永远不报false negative(宁可错杀不可放过)

- Abstracting the heap: **Point-to Graph** 

  - ![1553668870295](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553668870295.png)
  - 同一类实例抽象成一个node
  - Flow Insensitivity:
    - ![1553669046425](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553669046425.png)

- Rules

  - Rule for Object Allocation sites:

      ![1553670354046](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553670354046.png)

    只针对allocation语句（即new语句）:变量名->allocated type

  - Rule for object copy
    ![1553670455365](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553670455365.png)

    只累积、不删除

  - Rule for Field Write

     ![1553670519532](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553670519532.png)

  - Rule for Field Read

    ![1553671313310](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553671313310.png)

  - Read, Write都是红箭头。allocation是蓝箭头

  - weak-update:只增和改，不删

### Classifying Pointer Analysis Algorithms

- Is is flow-sensitive?
- is is context-sensitive?
- What heap abstaction scheme is used?
- How are aggregate data types modeled.

### Flow sensitivity

- concerns: How to model control-flow **within** a procedure:Intra-procedure Control-flow
- 2 kinds: flow-sensitivity VS flow-insensitivity
- Flow-insensitive  ==  **weak updates(只增改,不减少)**：一般用于may-alias analysis
- Flow-sensitive  ==  strong updates；一般用于must-alias analysis

### Context Sensitivity

- concern:How to model control-flow across procedures(Inter-procedural Control flow)
- 2 kinds: context-sensitive VS context-insensitive
- context-insensitive: analyze each procedure only once(不管其他部分多少次调用该procedure)
- context-sensitive: 调用一次就分析一次、

### Heap Abstraction

- concern: abstracting program data

- ![1553674253376](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553674253376.png)

- 测试是must分析

- 类型检查是may分析

- Types of Schemes

  - Allocation site-based:
    ![1553677153385](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553677153385.png)

    一个分配点对应一个抽象对象

  - Type-based

    ![1553677309451](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553677309451.png)

  - Heap-Insensitive Scheme

    ![1553683046595](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553683046595.png)

  - tradeoffs

    ![1553696521802](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553696521802.png)


###  Modelling aggregat Data type

- Array
  ![1553840387123](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553840387123.png)

- Record 

![1553840318704](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1553840318704.png)

- 我们做的就是may-alias analysis：（会带来false positive）



# Constraint-based analysis

- concern about the specification of analysis, not the implementation
- Program analsysis = specification(what) + implementation(how)

# Steensgaard Analysis

![1554002479502](C:\Users\10421\AppData\Roaming\Typora\typora-user-images\1554002479502.png)