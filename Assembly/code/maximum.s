# select data MAX

# %edi 保存正在监测的数据项索引
# %ebx 保存当前已找到的最大数据项
# %eax 当前数据项
# 使用以下内存位置:
#	data_items

.section .data
data_it:
	.long 3,67,1,77,33,88,99,31,0
.section .text
.globl _start

_start:
	movl $0,%edi   			#存放存储单元在段内的偏移量
	movl data_it(,%edi,4), %eax
	movl %eax, %ebx
start_loop:
	cmpl $0,%eax
	je loop_exit
incl %edi
movl data_it(,%edi,4), %eax
cmpl %ebx,%eax

jle start_loop
loop_exit:
	movl $1,%eax
	int 0x80

