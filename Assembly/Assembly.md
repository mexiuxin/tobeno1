# Assembly Language
 as -o hello.o hello.s
ld -s -o hello hello.o
0D回车 0A换行 
ELF格式的可执行程序通常划分为:
.text .data .bss
.text是只读的代码区
.data是可读可写的代码区
.bss是可读可写且没有初始化的数据区
代码区和数据区在ELF中统称为section
一个ELF可执行程序至少应该有一个.text部分
EAX：一般用作累加器
EBX：一般用作基址寄存器（Base）
ECX：一般用来计数（Count）
EDX：一般用来存放数据（Data）
ESP：一般用作堆栈指针（Stack Pointer）
EBP：一般用作基址指针（Base Pointer）
ESI：一般用作源变址（Source Index）
EDI：一般用作目标变址（Destinatin Index）



32位CPU所含有的寄存器有：

4个数据寄存器(EAX、EBX、ECX和EDX)

2个变址和指针寄存器(ESI和EDI) 2个指针寄存器(ESP和EBP)

6个段寄存器(ES、CS、SS、DS、FS和GS)

1个指令指针寄存器(EIP) 1个标志寄存器(EFlags)

寄存器EAX通常称为累加器(Accumulator)，用累加器进行的操作可能需要更少时间。可用于乘、 除、输入/输出等操作，使用频率很高；

寄存器EBX称为基地址寄存器(Base Register)。它可作为存储器指针来使用；

寄存器ECX称为计数寄存器(Count Register)

在循环和字符串操作时，要用它来控制循环次数；在位操作中，当移多位时，要用CL来指明移位的位数；

寄存器EDX称为数据寄存器(Data Register)。在进行乘、除运算时，它可作为默认的操作数参与运算，也可用于存放I/O的端口地址。

变址寄存器

寄存器ESI、EDI、SI和DI称为变址寄存器(Index Register)，它们主要用于存放存储单元在段内的偏移量，

指针寄存器

32位CPU有2个32位通用寄存器EBP和ESP。

它们主要用于访问堆栈内的存储单元，并且规定：

EBP为基指针(Base Pointer)寄存器，用它可直接存取堆栈中的数据；

ESP为堆栈指针(Stack Pointer)寄存器，用它只可访问栈顶。

寄存器EBP、ESP、BP和SP称为指针寄存器(Pointer Register)，主要用于存放堆栈内存储单元的偏移量，

ECS——代码段寄存器(Code Segment Register)，其值为代码段的段值；

EDS——数据段寄存器(Data Segment Register)，其值为数据段的段值；

EES——附加段寄存器(Extra Segment Register)，其值为附加数据段的段值；

ESS——堆栈段寄存器(Stack Segment Register)，其值为堆栈段的段值；

EFS——附加段寄存器(Extra Segment Register)，其值为附加数据段的段值；

EGS——附加段寄存器(Extra Segment Register)，其值为附加数据段的段值










ECS——代码段寄存器(Code Segment Register)，其值为代码段的段值；

EDS——数据段寄存器(Data Segment Register)，其值为数据段的段值；

EES——附加段寄存器(Extra Segment Register)，其值为附加数据段的段值；

ESS——堆栈段寄存器(Stack Segment Register)，其值为堆栈段的段值；

EFS——附加段寄存器(Extra Segment Register)，其值为附加数据段的段值；

EGS——附加段寄存器(Extra Segment Register)，其值为附加数据段的段值。
