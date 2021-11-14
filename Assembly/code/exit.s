#退出并向linux内核返回一个状态码的简单程序

# var %eax保存系统调用号
# var %ebx保存返回状态
.section .data
.section .text
.globl _start
_start:
	movl $1, %eax
	movl $2, %ebx
	int $0x80
